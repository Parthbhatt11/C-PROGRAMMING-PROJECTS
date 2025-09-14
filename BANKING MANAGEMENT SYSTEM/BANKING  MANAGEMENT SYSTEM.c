#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct account 
{
    char name[50];
    char address[500];
    char aadhar[20];
    char pan[20];
    int accountno;
    int pin;
    double balance;
    char transactions[5000];
};

void getCurrentTimestamp(char *buffer) {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    sprintf(buffer, "[%02d-%02d-%04d %02d:%02d:%02d] ",
            tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900,
            tm.tm_hour, tm.tm_min, tm.tm_sec);
}

int verifyPIN(struct account *acc) {
    int pin;
    printf("Enter PIN: ");
    scanf("%d", &pin);
    if(pin == acc->pin) return 1;
    printf("Wrong PIN\n");
    return 0;
}

void createAccount() {
    struct account acc;
    FILE *fp = fopen("accounts.dat", "rb");
    int lastAccNo = 1000;
    if(fp) {
        struct account temp;
        fseek(fp, -sizeof(struct account), SEEK_END);
        if(fread(&temp, sizeof(struct account), 1, fp) == 1) lastAccNo = temp.accountno;
        fclose(fp);
    }
    acc.accountno = lastAccNo + 1;
    acc.transactions[0] = '\0';
    fp = fopen("accounts.dat", "ab");
    if(!fp) return;
    printf("Enter Name: ");
    scanf(" %[^\n]", acc.name);
    printf("Enter Address: ");
    scanf(" %[^\n]", acc.address);
    printf("Enter Aadhar: ");
    scanf("%19s", acc.aadhar);
    printf("Enter PAN: ");
    scanf("%19s", acc.pan);
    printf("Enter PIN: ");
    scanf("%d", &acc.pin);
    printf("Starting Balance: ");
    scanf("%lf", &acc.balance);
    fwrite(&acc, sizeof(acc), 1, fp);
    printf("Account created successfully. Account Number: %d\n", acc.accountno);
    fclose(fp);
}

void displayAccounts() {
    struct account acc;
    FILE *fp = fopen("accounts.dat", "rb");
    if(!fp) { printf("No accounts found.\n"); return; }
    int searchNo;
    printf("Enter Account Number to display (0 = Show All): ");
    scanf("%d", &searchNo);
    int found = 0;
    while(fread(&acc, sizeof(acc), 1, fp)) {
        if(searchNo == 0 || acc.accountno == searchNo) {
            printf("\nName      : %s", acc.name);
            printf("\nAddress   : %s", acc.address);
            printf("\nAadhar    : %s", acc.aadhar);
            printf("\nPAN       : %s", acc.pan);
            printf("\nAccountNo : %d", acc.accountno);
            printf("\nBalance   : %.2lf\n", acc.balance);
            printf("-----------------------------\n");
            found = 1;
            if(searchNo != 0) break;
        }
    }
    if(!found) printf("Account not found.\n");
    fclose(fp);
}

void depositmoney() { 
    struct account acc;
    FILE *fp = fopen("accounts.dat", "rb+");
    if(!fp) return;
    int account; 
    double deposit;
    printf("Enter your account number: ");
    scanf("%d", &account);
    int found = 0;
    while(fread(&acc, sizeof(acc), 1, fp)) {
        if(account == acc.accountno) {
            found = 1;
            if(!verifyPIN(&acc)) break;
            printf("Current Balance: %.2lf\n", acc.balance);
            printf("Enter Amount to Deposit: ");
            scanf("%lf", &deposit);
            acc.balance += deposit;
            char temp[500], timestamp[50];
            getCurrentTimestamp(timestamp);
            sprintf(temp, "%sDeposited: Rs.%.2lf | New Balance: %.2lf\n", timestamp, deposit, acc.balance);
            if(strlen(acc.transactions) + strlen(temp) < sizeof(acc.transactions)) strcat(acc.transactions, temp);
            fseek(fp, -sizeof(acc), SEEK_CUR);
            fwrite(&acc, sizeof(acc), 1, fp);
            printf("Money deposited successfully. New Balance: %.2lf\n", acc.balance);
            break;
        }
    }
    if(!found) printf("Account Not Found.\n");
    fclose(fp);
}

void withdrawmoney() { 
    struct account acc;
    FILE *fp = fopen("accounts.dat", "rb+");
    if(!fp) return;
    int account; 
    double withdraw;
    printf("Enter your account number: ");
    scanf("%d", &account);
    int found = 0;
    while(fread(&acc, sizeof(acc), 1, fp)) {
        if(account == acc.accountno) {
            found = 1;
            if(!verifyPIN(&acc)) break;
            printf("Current Balance: %.2lf\n", acc.balance);
            printf("Enter Amount to Withdraw: ");
            scanf("%lf", &withdraw);
            if(withdraw > acc.balance) { printf("Insufficient balance.\n"); break; }
            acc.balance -= withdraw;
            char temp[500], timestamp[50];
            getCurrentTimestamp(timestamp);
            sprintf(temp, "%sWithdrawn: Rs.%.2lf | New Balance: %.2lf\n", timestamp, withdraw, acc.balance);
            if(strlen(acc.transactions) + strlen(temp) < sizeof(acc.transactions)) strcat(acc.transactions, temp);
            fseek(fp, -sizeof(acc), SEEK_CUR);
            fwrite(&acc, sizeof(acc), 1, fp);
            printf("Money withdrawn successfully. New Balance: %.2lf\n", acc.balance);
            break;
        }
    }
    if(!found) printf("Account Not Found.\n");
    fclose(fp);
}

void transferMoney() {
    struct account acc, dest;
    FILE *fp = fopen("accounts.dat", "rb+");
    if(!fp) return;
    int srcAcc, destAcc;
    double amount;
    printf("Enter your Account Number: ");
    scanf("%d", &srcAcc);
    printf("Enter Destination Account Number: ");
    scanf("%d", &destAcc);
    printf("Enter Amount to Transfer: ");
    scanf("%lf", &amount);
    int foundSrc=0, foundDest=0;
    long srcPos=0, destPos=0;
    while(fread(&acc, sizeof(acc), 1, fp)) {
        if(acc.accountno == srcAcc) { foundSrc=1; srcPos=ftell(fp)-sizeof(acc); if(!verifyPIN(&acc)) { fclose(fp); return; } if(amount>acc.balance) { printf("Insufficient balance.\n"); fclose(fp); return; } }
        if(acc.accountno == destAcc) { foundDest=1; dest=acc; destPos=ftell(fp)-sizeof(acc); }
    }
    if(!foundSrc || !foundDest) { printf("Source or Destination account not found.\n"); fclose(fp); return; }
    char temp[500], timestamp[50];
    getCurrentTimestamp(timestamp);
    fseek(fp, srcPos, SEEK_SET);
    acc.balance -= amount;
    sprintf(temp, "%sTransferred Rs.%.2lf to Acc %d | New Balance: %.2lf\n", timestamp, amount, destAcc, acc.balance);
    if(strlen(acc.transactions)+strlen(temp)<sizeof(acc.transactions)) strcat(acc.transactions, temp);
    fwrite(&acc, sizeof(acc), 1, fp);
    fseek(fp, destPos, SEEK_SET);
    dest.balance += amount;
    sprintf(temp, "%sReceived Rs.%.2lf from Acc %d | New Balance: %.2lf\n", timestamp, amount, srcAcc, dest.balance);
    if(strlen(dest.transactions)+strlen(temp)<sizeof(dest.transactions)) strcat(dest.transactions, temp);
    fwrite(&dest, sizeof(dest), 1, fp);
    printf("Money transferred successfully.\n");
    fclose(fp);
}

void deleteAccount() {
    struct account acc;
    FILE *fp = fopen("accounts.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");
    if(!fp || !temp) return;
    int accNo;
    printf("Enter Account Number to Delete: ");
    scanf("%d", &accNo);
    int found = 0;
    while(fread(&acc, sizeof(acc), 1, fp)) {
        if(acc.accountno == accNo) { if(verifyPIN(&acc)) found=1; else { fwrite(&acc,sizeof(acc),1,temp); continue; } }
        else fwrite(&acc, sizeof(acc),1,temp);
    }
    fclose(fp);
    fclose(temp);
    remove("accounts.dat");
    rename("temp.dat","accounts.dat");
    if(found) printf("Account deleted successfully.\n"); else printf("Account not deleted.\n");
}

void updateAccount() {
    struct account acc;
    FILE *fp = fopen("accounts.dat", "rb+");
    if(!fp) return;
    int accNo;
    printf("Enter Account Number to Update: ");
    scanf("%d", &accNo);
    int found=0;
    while(fread(&acc,sizeof(acc),1,fp)) {
        if(acc.accountno == accNo) { found=1; if(!verifyPIN(&acc)) break;
            printf("Update Name: "); scanf(" %[^\n]", acc.name);
            printf("Update Address: "); scanf(" %[^\n]", acc.address);
            printf("Update PIN: "); scanf("%d", &acc.pin);
            fseek(fp,-sizeof(acc),SEEK_CUR);
            fwrite(&acc,sizeof(acc),1,fp);
            printf("Account Updated Successfully.\n"); break;
        }
    }
    if(!found) printf("Account not found.\n");
    fclose(fp);
}

void changePIN() {
    struct account acc;
    FILE *fp = fopen("accounts.dat", "rb+");
    if(!fp) return;
    int accNo;
    printf("Enter Account Number: ");
    scanf("%d", &accNo);
    int found=0;
    while(fread(&acc,sizeof(acc),1,fp)) {
        if(acc.accountno == accNo) { found=1; if(!verifyPIN(&acc)) break;
            printf("Enter New PIN: "); scanf("%d",&acc.pin);
            fseek(fp,-sizeof(acc),SEEK_CUR);
            fwrite(&acc,sizeof(acc),1,fp);
            printf("PIN changed successfully.\n"); break;
        }
    }
    if(!found) printf("Account not found or wrong PIN.\n");
    fclose(fp);
}

void viewTransactionHistory() {
    struct account acc;
    FILE *fp = fopen("accounts.dat", "rb");
    if(!fp) { printf("No accounts found.\n"); return; }
    int accNo;
    printf("Enter your Account Number: ");
    scanf("%d", &accNo);
    int found=0;
    while(fread(&acc,sizeof(acc),1,fp)) {
        if(acc.accountno == accNo) { found=1; if(!verifyPIN(&acc)) break;
            printf("==== Transaction History for Account %d ====\n", accNo);
            printf("%s", acc.transactions[0]? acc.transactions: "No transactions yet.\n"); break;
        }
    }
    if(!found) printf("Account not found.\n");
    fclose(fp);
}

int main() {   
    int choice;
    while(1) {
        printf("\n===== BANK MANAGEMENT SYSTEM =====\n");
        printf("1. Create Account\n2. Display Account info\n3. Deposit Money\n4. Withdraw Money\n5. Transfer Money\n6. Update Account Details\n7. Delete Account\n8. View Transaction History\n9. Change PIN\n10. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: createAccount(); break;
            case 2: displayAccounts(); break;
            case 3: depositmoney(); break;
            case 4: withdrawmoney(); break;
            case 5: transferMoney(); break;
            case 6: updateAccount(); break;
            case 7: deleteAccount(); break;
            case 8: viewTransactionHistory(); break;
            case 9: changePIN(); break;
            case 10: exit(0);
            default: printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

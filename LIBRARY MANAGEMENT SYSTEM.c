#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct Book /* STRUCTURE FOR BOOK*/
{
	int id;
	char title[100];
	char author[100];
	int quantity;
	int available;
};

void addBook()
{
	struct Book b;
	printf("\n-------------------------\n");
	printf("Welcome TO Add Book\n");

	FILE *fp = fopen("books.dat", "ab");
	if (fp == NULL) {
		// Try creating the file first
		fp = fopen("books.dat", "wb");
		if (fp == NULL) {
			perror("Error creating file");
			return;
		}
		// Now reopen in append mode
		fclose(fp);
		fp = fopen("books.dat", "ab");
		if (fp == NULL) {
			perror("Error reopening file");
			return;
		}
	}

	printf("Enter Book ID: ");
	scanf("%d", &b.id);
	getchar();  // To consume newline

	printf("Enter Book Title: ");
	fgets(b.title, sizeof(b.title), stdin);
	b.title[strcspn(b.title, "\n")] = '\0';

	printf("Enter Book Author: ");
	fgets(b.author, sizeof(b.author), stdin);
	b.author[strcspn(b.author, "\n")] = '\0';

	printf("Enter Book Quantity: ");
	scanf("%d", &b.quantity);
	b.available = b.quantity;

	fwrite(&b, sizeof(b), 1, fp);
	fclose(fp);

	printf("Book added successfully!\n \n");
}

void viewBooks() {
	struct Book b;
	FILE *fp = fopen("books.dat", "rb");

	if (fp == NULL) {
		printf("\nNo books found. File does not exist.\n\n");
		return;
	}

	printf("\n------------------------- BOOK LIST -------------------------\n");

	int count = 0;
	while (fread(&b, sizeof(b), 1, fp)) {
		printf("\nBook ID      : %d", b.id);
		printf("\nTitle        : %s", b.title);
		printf("\nAuthor       : %s", b.author);
		printf("\nQuantity     : %d", b.quantity);
		printf("\nAvailable    : %d", b.available);
		printf("\n------------------------------------------------------------\n");
		count++;
	}

	fclose(fp);

	if (count == 0) {
		printf("\nNo books available in the library.\n");
	}
}


void searchBook() {
	struct Book b;
	int id, found = 0;

	FILE *fp = fopen("books.dat", "rb");
	if (fp == NULL) {
		printf("\nBook file not found.\n");
		return;
	}

	printf("Enter Book ID to search: ");
	scanf("%d", &id);

	while (fread(&b, sizeof(b), 1, fp)) {
		if (b.id == id) {
			printf("\nBook Found:\n");
			printf("ID         : %d\n", b.id);
			printf("Title      : %s\n", b.title);
			printf("Author     : %s\n", b.author);
			printf("Quantity   : %d\n", b.quantity);
			printf("Available  : %d\n", b.available);
			found = 1;
			break;
		}
	}

	if (!found) {
		printf("\nBook with ID %d not found.\n", id);
	}

	fclose(fp);
}

void issueBook() {
	struct Book b;
	int id, found = 0;

	FILE *fp = fopen("books.dat", "rb+"); // open for reading and writing
	if (fp == NULL) {
		printf("\nBook file not found.\n");
		return;
	}

	printf("Enter Book ID to issue: ");
	scanf("%d", &id);

	while (fread(&b, sizeof(b), 1, fp)) {
		if (b.id == id) {
			found = 1;
			if (b.available > 0) {
				b.available--;
				fseek(fp, -sizeof(b), SEEK_CUR);
				fwrite(&b, sizeof(b), 1, fp);
				printf("Book issued successfully.\n");
			} else {
				printf("No copies available to issue.\n");
			}
			break;
		}
	}

	if (!found) {
		printf("Book not found.\n");
	}

	fclose(fp);
}


void returnBook() {
	struct Book b;
	int id, found = 0;

	FILE *fp = fopen("books.dat", "rb+");
	if (fp == NULL) {
		printf("\nBook file not found.\n");
		return;
	}

	printf("Enter Book ID to return: ");
	scanf("%d", &id);

	while (fread(&b, sizeof(b), 1, fp)) {
		if (b.id == id) {
			found = 1;
			if (b.available < b.quantity) {
				b.available++;
				fseek(fp, -sizeof(b), SEEK_CUR);
				fwrite(&b, sizeof(b), 1, fp);
				printf("Book returned successfully.\n");
			} else {
				printf("All copies are already returned.\n");
			}
			break;
		}
	}

	if (!found) {
		printf("Book not found.\n");
	}

	fclose(fp);
}


void deleteBook() {
	struct Book b;
	int id, found = 0;

	FILE *fp = fopen("books.dat", "rb");
	FILE *temp = fopen("temp.dat", "wb");

	if (fp == NULL || temp == NULL) {
		printf("\nError opening file.\n");
		return;
	}

	printf("Enter Book ID to delete: ");
	scanf("%d", &id);

	while (fread(&b, sizeof(b), 1, fp)) {
		if (b.id == id) {
			found = 1;
			continue; // skip writing this record
		}
		fwrite(&b, sizeof(b), 1, temp);
	}

	fclose(fp);
	fclose(temp);

	remove("books.dat");
	rename("temp.dat", "books.dat");

	if (found)
		printf("Book deleted successfully.\n");
	else
		printf("Book ID not found.\n");
}






int main()
{
	int choice;

	while(1)  /*MENU FOR CHOOSING THE PREFERRED OPTION*/
	{
		printf("-------------------------  WELCOME TO LIBRARY MANAGEMENT SYSTEM  -------------------------");
		printf("\n                                 MADE BY PARTH BHATT                                      ");
		printf("\n CHOOSE THE CHOICE");
		printf("\n \n \n ");
		printf("1. Add Book \n");
		printf("2. View Book \n");
		printf("3. Search Book \n");
		printf("4. Issue Book \n");
		printf("5. Return Book \n");
		printf("6. Delete Book \n");
		printf("7. Exit\n");

		printf("PLEASE ENTER YOUR CHOICE:- ");
		scanf("%d",&choice);

		switch (choice) {
		case 1:
			addBook();
			break;
		case 2:
			viewBooks();
			break;
		case 3:
			searchBook();
			break;
		case 4:
			issueBook();
			break;
		case 5:
			returnBook();
			break;
		case 6:
			deleteBook();
			break;
		case 7:
			exit(0);
		default:
			printf("Invalid choice!\n");

		}
	}


	return 0;
}

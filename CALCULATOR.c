#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define M_PI 3.14159265358979323846
#define RAD_TO_DEG(x) ((x) * 180.0 / M_PI)
#define DEG_TO_RAD(x) ((x) * M_PI / 180.0)

// Factorial function
long long factorial(int n) {
    if (n < 0) return -1;
    long long result = 1;
    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}

int main() {
    int choice;
    double x, y, result;
    int a, b, n;

    do {
        printf("\n========== SCIENTIFIC CALCULATOR ==========\n");
        printf("1.  Addition\n");
        printf("2.  Subtraction\n");
        printf("3.  Multiplication\n");
        printf("4.  Division\n");
        printf("5.  Modulus\n");
        printf("6.  Percentage (x percent of y)\n");
        printf("7.  sin(x in degrees)\n");
        printf("8.  cos(x in degrees)\n");
        printf("9.  tan(x in degrees)\n");
        printf("10. cosec(x in degrees)\n");
        printf("11. sec(x in degrees)\n");
        printf("12. cot(x in degrees)\n");
        printf("13. inverse sin(x) (output in degrees)\n");
        printf("14. inverse cos(x) (output in degrees)\n");
        printf("15. inverse tan(x) (output in degrees)\n");
        printf("16. Square\n");
        printf("17. Cube\n");
        printf("18. Square Root\n");
        printf("19. Cube Root\n");
        printf("20. Power (x^y)\n");
        printf("21. Degree to Radian\n");
        printf("22. Radian to Degree\n");
        printf("23. log10(x)\n");
        printf("24. ln(x)\n");
        printf("25. Factorial (integer)\n");
        printf("0.  Exit\n");
        printf("===========================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &x, &y);
                printf("Result = %.2lf\n", x + y);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &x, &y);
                printf("Result = %.2lf\n", x - y);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &x, &y);
                printf("Result = %.2lf\n", x * y);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &x, &y);
                if (y == 0)
                    printf("Error: Division by zero\n");
                else
                    printf("Result = %.2lf\n", x / y);
                break;

            case 5:
                printf("Enter two integers: ");
                scanf("%d %d", &a, &b);
                if (b == 0)
                    printf("Error: Modulus by zero\n");
                else
                    printf("Result = %d\n", a % b);
                break;

            case 6:
                printf("Enter base and percentage: ");
                scanf("%lf %lf", &x, &y);
                printf("%.2lf%% of %.2lf = %.2lf\n", y, x, (x * y / 100));
                break;

            case 7:
                printf("Enter angle in degrees: ");
                scanf("%lf", &x);
                printf("sin(%.2lf°) = %.4lf\n", x, sin(DEG_TO_RAD(x)));
                break;

            case 8:
                printf("Enter angle in degrees: ");
                scanf("%lf", &x);
                printf("cos(%.2lf°) = %.4lf\n", x, cos(DEG_TO_RAD(x)));
                break;

            case 9:
                printf("Enter angle in degrees: ");
                scanf("%lf", &x);
                printf("tan(%.2lf°) = %.4lf\n", x, tan(DEG_TO_RAD(x)));
                break;

            case 10:
                printf("Enter angle in degrees: ");
                scanf("%lf", &x);
                result = sin(DEG_TO_RAD(x));
                if (result == 0)
                    printf("cosec(%.2lf°) is undefined\n", x);
                else
                    printf("cosec(%.2lf°) = %.4lf\n", x, 1 / result);
                break;

            case 11:
                printf("Enter angle in degrees: ");
                scanf("%lf", &x);
                result = cos(DEG_TO_RAD(x));
                if (result == 0)
                    printf("sec(%.2lf°) is undefined\n", x);
                else
                    printf("sec(%.2lf°) = %.4lf\n", x, 1 / result);
                break;

            case 12:
                printf("Enter angle in degrees: ");
                scanf("%lf", &x);
                result = tan(DEG_TO_RAD(x));
                if (result == 0)
                    printf("cot(%.2lf°) is undefined\n", x);
                else
                    printf("cot(%.2lf°) = %.4lf\n", x, 1 / result);
                break;

            case 13:
                printf("Enter value (-1 to 1): ");
                scanf("%lf", &x);
                if (x < -1 || x > 1)
                    printf("Invalid input for asin\n");
                else
                    printf("asin(%.2lf) = %.2lf°\n", x, RAD_TO_DEG(asin(x)));
                break;

            case 14:
                printf("Enter value (-1 to 1): ");
                scanf("%lf", &x);
                if (x < -1 || x > 1)
                    printf("Invalid input for acos\n");
                else
                    printf("acos(%.2lf) = %.2lf°\n", x, RAD_TO_DEG(acos(x)));
                break;

            case 15:
                printf("Enter value: ");
                scanf("%lf", &x);
                printf("atan(%.2lf) = %.2lf°\n", x, RAD_TO_DEG(atan(x)));
                break;

            case 16:
                printf("Enter number: ");
                scanf("%lf", &x);
                printf("%.2lf^2 = %.2lf\n", x, x * x);
                break;

            case 17:
                printf("Enter number: ");
                scanf("%lf", &x);
                printf("%.2lf^3 = %.2lf\n", x, x * x * x);
                break;

            case 18:
                printf("Enter number: ");
                scanf("%lf", &x);
                if (x < 0)
                    printf("Square root of negative number is not real.\n");
                else
                    printf("√%.2lf = %.4lf\n", x, sqrt(x));
                break;

            case 19:
                printf("Enter number: ");
                scanf("%lf", &x);
                printf("∛%.2lf = %.4lf\n", x, cbrt(x));
                break;

            case 20:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &x, &y);
                printf("%.2lf^%.2lf = %.4lf\n", x, y, pow(x, y));
                break;

            case 21:
                printf("Enter angle in degrees: ");
                scanf("%lf", &x);
                printf("%.2lf° = %.4lf radians\n", x, DEG_TO_RAD(x));
                break;

            case 22:
                printf("Enter angle in radians: ");
                scanf("%lf", &x);
                printf("%.4lf radians = %.2lf°\n", x, RAD_TO_DEG(x));
                break;

            case 23:
                printf("Enter number: ");
                scanf("%lf", &x);
                if (x <= 0)
                    printf("Logarithm undefined for zero or negative numbers.\n");
                else
                    printf("log10(%.2lf) = %.4lf\n", x, log10(x));
                break;

            case 24:
                printf("Enter number: ");
                scanf("%lf", &x);
                if (x <= 0)
                    printf("Natural logarithm undefined for zero or negative numbers.\n");
                else
                    printf("ln(%.2lf) = %.4lf\n", x, log(x));
                break;

            case 25:
                printf("Enter a non-negative integer: ");
                scanf("%d", &n);
                if (n < 0)
                    printf("Factorial not defined for negative numbers.\n");
                else
                    printf("%d! = %lld\n", n, factorial(n));
                break;

            case 0:
                printf("Exiting calculator. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }

    } while (choice != 0);

    return 0;
}

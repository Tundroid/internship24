#include <stdio.h>
#include <math.h>

/* Function Decalrations */
int getOp1();
int getOp2();
int getNumber(char *prompt);

/* Entry point of program */
int main()
{
        short operation;
        int operand1, operand2, result;

        printf("+=========================+\n");
        printf("| Welcome to myCalc v1.0! |\n");
        printf("+=========================+\n\n");
        do
        {
                printf("\tMenu\n\t----\n");
                printf("1. Addition (+)\n");
                printf("2. Subtraction (-)\n");
                printf("3. Multiplication (*)\n");
                printf("4. Division (/)\n");
                printf("5. Remainder (%%)\n");
                printf("6. Square (sqr)\n");

                printf("What operation whould you like to do? ");
                scanf("%hd", &operation);

                switch (operation)
                {
                case 1:
                        operand1 = getOp1();
                        operand2 = getOp2();
                        result = operand1 + operand2;
                        printf("%d + %d = %d\n", operand1, operand2, result);
                        break;
                case 2:
                        operand1 = getOp1();
                        operand2 = getOp2();
                        result = operand1 - operand2;
                        printf("%d - %d = %d\n", operand1, operand2, result);
                        break;
                case 3:
                        operand1 = getOp1();
                        operand2 = getOp2();
                        result = operand1 * operand2;
                        printf("%d * %d = %d\n", operand1, operand2, result);
                        break;
                case 4:
                        operand1 = getOp1();
                        operand2 = getOp2();
                        result = operand1 / operand2;
                        printf("%d / %d = %d\n", operand1, operand2, result);
                        break;
                case 5:
                        operand1 = getOp1();
                        operand2 = getOp2();
                        result = operand1 % operand2;
                        printf("%d %% %d = %d\n", operand1, operand2, result);
                        break;
                case 6:
                        operand1 = getNumber(NULL);
                        result = operand1 * operand1;
                        printf("%d^2 = %d\n", operand1, result);
                        break;
                default:
                        printf("Unrecognized operation!\n");
                        break;
                }
        } while (operation >= 0);

        printf("End of Program!\n");
}

/* Function Definitions */

int getOp1()
{
        return getNumber("Enter first number: ");
}

int getOp2()
{
        return getNumber("Enter second number: ");
}

int getNumber(char *prompt)
{
        int read;

        if (prompt == NULL)
                printf("Enter number: ");
        else
                printf("%s", prompt);
        scanf("%d", &read);
        return (read);
}
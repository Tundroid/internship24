#include <stdio.h>
#include <math.h>

char OPERATORS[] = {'x', '+', '-', '*', '/', '%'};
short operation;
int operand1, operand2, result;

/* Function Decalrations */
int getNumber(char *prompt);
int getResult();
void showMenu();
void showWelcome();

/* Entry point of program */
int main()
{
        showWelcome();
        do
        {
                showMenu();
                switch (operation)
                {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                        operand1 = getNumber("Enter first number: ");
                        operand2 = getNumber("Enter second number: ");
                        result = getResult();
                        printf("%d %c %d = %d\n", operand1, OPERATORS[operation], operand2, result);
                        break;
                case 6:
                        operand1 = getNumber("Enter number: ");
                        operand2 = operand1;
                        result = getResult();
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

int getNumber(char *prompt)
{
        int read;

        printf("%s", prompt);
        scanf("%d", &read);
        return (read);
}

int getResult()
{
        switch (operation)
        {
        case 1:
                result = operand1 + operand2;
                break;
        case 2:
                result = operand1 - operand2;
                break;
        case 3:
                result = operand1 * operand2;
                break;
        case 4:
                result = operand1 / operand2;
                break;
        case 5:
                result = operand1 % operand2;
                break;
        case 6:
                result = operand1 * operand2;
                break;
        default:
                result = 0;
                break;
        }
        return result;
}

void showWelcome()
{
        printf("+=========================+\n");
        printf("| Welcome to myCalc v1.0! |\n");
        printf("+=========================+\n\n");
}

void showMenu()
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
}
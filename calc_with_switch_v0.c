#include <stdio.h>
#include <math.h>

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
                        printf("Enter first operand: ");
                        scanf("%d", &operand1);
                        printf("Enter second operand: ");
                        scanf("%d", &operand2);
                        result = operand1 + operand2;
                        printf("%d + %d = %d\n", operand1, operand2, result);
                        break;
                case 2:
                        printf("Enter first operand: ");
                        scanf("%d", &operand1);
                        printf("Enter second operand: ");
                        scanf("%d", &operand2);
                        result = operand1 - operand2;
                        printf("%d - %d = %d\n", operand1, operand2, result);
                        break;
                case 3:
                        printf("Enter first operand: ");
                        scanf("%d", &operand1);
                        printf("Enter second operand: ");
                        scanf("%d", &operand2);
                        result = operand1 * operand2;
                        printf("%d * %d = %d\n", operand1, operand2, result);
                        break;
                case 4:
                        printf("Enter first operand: ");
                        scanf("%d", &operand1);
                        printf("Enter second operand: ");
                        scanf("%d", &operand2);
                        result = operand1 / operand2;
                        printf("%d / %d = %d\n", operand1, operand2, result);
                        break;
                case 5:
                        printf("Enter first operand: ");
                        scanf("%d", &operand1);
                        printf("Enter second operand: ");
                        scanf("%d", &operand2);
                        result = operand1 % operand2;
                        printf("%d %% %d = %d\n", operand1, operand2, result);
                        break;
                case 6:
                        printf("Enter number: ");
                        scanf("%d", &operand1);
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
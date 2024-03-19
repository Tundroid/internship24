#include "calcv4.h"

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

#include "calcv4.c"
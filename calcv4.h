#ifndef CALCv4
#define CALCv4

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

#endif /* CALCv4*/
#include <stdio.h>

int main()
{
    int choice = 0;
start:
    printf("Do you want to exit(1=yes)? ");
    scanf("%d", &choice);
    if (choice != 1)
        goto start;
    return 0;
}
#include <stdio.h>

/*
 * Beginner-friendly C program
 * This program reads an integer n from the user and prints numbers from 0 to n.
 * It uses a while-loop and includes simple input validation and explanatory messages.
 */

int main(void)
{
    int n;

    /* Explain what the program does */
    printf("This program prints numbers from 0 to n (inclusive).\n");

    /* Prompt the user to enter a non-negative integer */
    printf("Enter a non-negative integer n: ");
    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input. Please enter an integer.\n");

        return 1;
        }

    /* If n is negative, inform the user and exit */
    if (n < 0)
    {
        printf("You entered a negative number. Please run the program again with a non-negative integer.\n");
        return 0;
    }

    /* Print header */
    printf("Numbers from 0 to %d:\n", n);

    /* Use a while-loop to print numbers from 0 to n */
    int i = 0;
    while (i <= n)
    {
        printf("%d\n", i);
        i++; /* increment the counter */
    }

    return 0;
}
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * min_number_of_coins - Calculates the min number of coins needed to make change
 * @cents: The amount in cents
 *
 * Return: The minimum number of coins
 */
int min_number_of_coins(int cents)
{
    int coins = 0;

    if (cents <= 0)
        return (0);

    while (cents >= 25)
    {
        coins++;
        cents -= 25;
    }

    while (cents >= 10)
    {
        coins++;
        cents -= 10;
    }

    while (cents >= 5)
    {
        coins++;
        cents -= 5;
    }

    while (cents >= 2)
    {
        coins++;
        cents -= 2;
    }

    while (cents >= 1)
    {
        coins++;
        cents -= 1;
    }

    return (coins);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings representing the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    int cents, result;

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }

    cents = atoi(argv[1]);

    if (cents < 0)
    {
        printf("0\n");
        return (0);
    }

    result = min_number_of_coins(cents);
    printf("%d\n", result);

    return (0);
}

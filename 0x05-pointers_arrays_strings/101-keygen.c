#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generate_password - Generates a random password.
 * @password: Pointer to store the generated password.
 * @length: Length of the password to be generated.
 */
void generate_password(char *password, int length)
{
    int i;
    char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int num_chars = sizeof(characters) - 1; 

    srand(time(NULL));

    for (i = 0; i < length; i++)
    {
        int random_index = rand() % num_chars;
        password[i] = characters[random_index];
    }

    password[length] = '\0';
}

/**
 * main - Entry point of the program.
 * Return: Always 0.
 */
int main(void)
{
    char password[15]; 

    generate_password(password, 9); 

    printf("%s\n", password);

    return 0;
}

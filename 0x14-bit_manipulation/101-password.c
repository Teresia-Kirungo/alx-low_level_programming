#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * check_password - function that checks password
 * @a1: input
 * Return: 1
 */
unsigned int check_password(const char *a1)
{
	char i;
	
	if (strlen(a1) != 4)
		return (0);
	for (i = 0; i < 4; ++i)
	{
		if (a1[i] != (0x46C6F48 >> (8 * i)))
			return 0;
	}
	return 1;
}

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * @envp: env
 * Return: 0
 */

int main(int argc, const char **argv, char **envp)
{
  if (argc == 2)
  {
	  if ((check_password(a1) == 1))
	  {
		  puts("Congratulations!");
		  return (0);
	  }
	  else
	  {
		  puts("ko");
		  return 1;
	  }
  }
  else
  {
    fprintf(stderr, "Usage: %s password\n", *argv);
    return 1;
  }
}

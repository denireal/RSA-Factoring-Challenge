#include "main.h"

/**
* main - Entry point of the program
* @argc: Number of command-line arguments
* @argv: Array of command-line argument strings
* Return: EXIT_SUCCESS if successful, EXIT_FAILURE otherwise
*/
int main(int argc, char *argv[])
{
char *input_file;
int num;
FILE *file;

if (argc != 2)
{
fprintf(stderr, "Usage: %s <file>\n", argv[0]);
return (EXIT_FAILURE);
}

input_file = argv[1];
file = fopen(input_file, "r");

if (file == NULL)
{
perror("Error opening file");
return (EXIT_FAILURE);
}

while (fscanf(file, "%d", &num) == 1)
{
factorise(num);
}

fclose(file);

return (EXIT_SUCCESS);
}

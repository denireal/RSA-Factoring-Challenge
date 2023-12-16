#include "main.h"

/**
* main - Entry point of the program
* @argc: Number of command-line arguments
* @argv: Array of command-line argument strings
* Return: EXIT_SUCCESS if successful, EXIT_FAILURE otherwise
*/
int main(int argc, char *argv[])
{
FILE *file_ptr;
char *buffer = NULL;
size_t buffer_size = 0;
ssize_t bytes_read;
int num;

if (argc != 2)
{
fprintf(stderr, "Usage: factor <filename>\n");
exit(EXIT_FAILURE);
}

file_ptr = fopen(argv[1], "r");
if (file_ptr == NULL)
{
fprintf(stderr, "Error: can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}

while ((bytes_read = getline(&buffer, &buffer_size, file_ptr)) != -1)
{
num = atoi(buffer);
factorise(num);
}

free(buffer); /* Free the memory allocated by getline */

return (0);
}

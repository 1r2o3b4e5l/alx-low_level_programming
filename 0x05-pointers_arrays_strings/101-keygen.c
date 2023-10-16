#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv)
{
srand(time(NULL));
if (argc != 2)
{
printf("Usage: %s <program_name>\n", argv[0]);
return 1;
}
char *password = malloc(65 * sizeof(char));
if (password == NULL)
{
printf("Memory allocation error\n");
return 1;
}
for (int i = 0; i < 64; i++)
{
password[i] = rand() % 94 + 33; // ASCII value range from 33 to 126
}
password[64] = '\0';
printf("Password: %s\n", password);
printf("Usage: %s \"%s\"\n", argv[1], password);
free(password);
return 0;
}


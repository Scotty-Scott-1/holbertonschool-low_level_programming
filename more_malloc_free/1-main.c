#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);

for (i = 0;concat[i] != '\0'; i++ )
{
    putchar(concat[i]);

}

putchar('\n');
 /*   printf("%s\n", concat); */
    free(concat);
    return (0);
}

#include "main.h"

/**
 * rev_string - Prints reverse string
 *
 * @s: Input
 */
void rev_string(char *s)
{
int i;
int j;
int k;
int rev;
for (i = 0; s[i] != '\0'; i++)
{
continue;
}
j = i - 1;
for (k = 0; j >= 0 && k < j; j--, k++)
{
rev = s[k];
s[k] = s[j];
s[j] = rev;
}
}

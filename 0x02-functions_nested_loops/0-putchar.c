#include "main.h"
/**
 * main-Print_putchar
 *kosomkm
 * Return:Always0
 */
int main(void)
{
char str[] = "_putchar";
int i;
for (i = 0; i < 8; i++)
{
_putchar(str[i]);
}
printf("%s","\n");
return (0);
}

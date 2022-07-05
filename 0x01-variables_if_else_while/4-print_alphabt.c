#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: 'Print all the letters except q and e'
 *
 * Return: Always returns 0(Success)
 */
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
if (a == 'q' || a == 'e')
{
continue;
}
putchar (a);
}
return (0);
}

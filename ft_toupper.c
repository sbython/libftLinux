int toupper(int c)
{
	if(c >= 'a' && c <= 'z')
		return (c -= 32);
	return c;
}
#include <stdio.h>
int main(void)
{
	printf("%c",toupper('m'));
}

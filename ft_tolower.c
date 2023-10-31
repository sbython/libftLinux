int tolower(int c)
{
	        if(c >= 'A' && c <= 'Z')
			                return (c += 32);
		        return c;
}
#include <stdio.h>
int main(void)
{
	        printf("%c",tolower('M'));
}


char *ft_strrchr(const char *s, int c)
{
	int i = 0;
	int f = 0;
	while(s[i])
	{
		i++;
		if(s[i] == (char)c)
			f = 1;
	}
	if (f == 0)
		return (char *)(0);
	while(s[i] != c && i > 0)
		i--;
	return (char *)(s + i);
}
#include <stdio.h>
#include <string.h>
int main() {
	    const char *input = "ridasbai is ";
	        
	        printf("%s", strrchr(input, 'y'));       // Using the standard strchr
	    printf("%s", ft_strrchr(input, 'y'));    // Using your ft_strchr
	     return 0;
}						//         }

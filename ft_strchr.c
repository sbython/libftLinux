char *ft_strchr(const char *s, int c)
{
	int i;
	while(s[i] != c && s[i])
	{
		i++;
	}
	if(s[i])
		return (char *)(s+i);
	else
		return (char *)(0);
}

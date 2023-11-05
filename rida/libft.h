#ifndef LIBFT_H
#define LIBFT_H
# include <stdlib.h>
# include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(const char *s);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strrchr(const char *s, int c);
unsigned int	ft_strlen(const char *s);
unsigned int ft_strlcpy(char *dest, const char *src, unsigned int n);
unsigned int ft_strlcat(char *dest, const char *src, unsigned int n);
char *ft_strchr(const char *s, int c);
void *ft_memset(void *s, int c, unsigned int n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int ft_isprint (int c);
int ft_isdigit(int c);
int ft_isascii(int c);
int ft_isalpha(int c);
int ft_isalnum (int c);
void	*ft_bzero(void *s, int n);
#endif

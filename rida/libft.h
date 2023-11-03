#ifndef LIBFT_H
#define LIBFT_H
# include <stdlib.h>
# include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(const char *s);
int toupper(int c);
int tolower(int c);
char *ft_strrchr(const char *s, int c);
unsigned int	ft_strlen(const char *s);
unsigned int strlcpy(char *dest, const char *src, unsigned int n);
unsigned int ft_strlcat(char *dest, const char *src, unsigned int n);
char *ft_strchr(const char *s, int c);
void *ft_memset(void *s, int c, unsigned int n);
void *ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int isprint (int c);
int ft_isdigit(int c);
int isascii(int c);
int ft_isalpha(int c);
int isalnum (int c);
void	*ft_bzero(void *s, int n);
#endif

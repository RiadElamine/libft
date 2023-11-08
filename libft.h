
#ifndef lib_h
#define lib_h

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int	ft_toupper(int c);
int ft_tolower(int c);
char	*ft_strrchr(const char *s, int c);
char *ft_strnstr(const char *str, const char *find, size_t len);
int ft_strncmp(const char *s1, const char *s2, size_t n);
size_t ft_strlen(const char *s);
size_t ft_strlcpy(char * dst, const char * src, size_t dstsize);
size_t	ft_strlcat(char *dest,const char *src, size_t size);
char    *ft_strchr(const char *s, int c);
void * ft_memset (void *voidptr, int value, size_t count);
void * ft_memmove(void *dst, const void *src, size_t len);
void * ft_memcpy(void * dst, const void *src, size_t n);
void * ft_memchr(const void *voids, int c, size_t size);
int	ft_isprint(int c);
int	ft_isdigit(int c);
int	ft_isascii(int c);
int	ft_isalpha(int c);
int	ft_isalnum(int c);
void ft_bzero (void *ptr, size_t size);
int ft_atoi(const char *str);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void * ft_calloc(size_t count, size_t size);
char * ft_strdup(const char *s1);
char *ft_substr(const char *s, unsigned int start,size_t len);

#endif
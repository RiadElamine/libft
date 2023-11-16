/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:47:34 by relamine          #+#    #+#             */
/*   Updated: 2023/11/15 18:42:21 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
#include <fcntl.h>

int     ft_toupper(int c);
int     ft_tolower(int c);
char    *ft_strrchr(const char *s, int c);
char    *ft_strnstr(const char *str, const char *find, size_t len);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
size_t  ft_strlen(const char *s);
size_t  ft_strlcpy(char * dst, const char * src, size_t dstsize);
size_t	ft_strlcat(char *dest,const char *src, size_t size);
char    *ft_strchr(const char *s, int c);
void    *ft_memset (void *voidptr, int value, size_t count);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memcpy(void * dst, const void *src, size_t n);
void    *ft_memchr(const void *voids, int c, size_t size);
int	    ft_isprint(int c);
int	    ft_isdigit(int c);
int	    ft_isascii(int c);
int	    ft_isalpha(int c);
int	    ft_isalnum(int c);
void    ft_bzero (void *ptr, size_t size);
int     ft_atoi(const char *str);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_calloc(size_t count, size_t size);
char    *ft_strdup(const char *s1);
char    *ft_substr(const char *s, unsigned int start,size_t len);
char    *ft_strjoin(const char *s1, const char *s2);
void    ft_putstr_fd(char *s, int fd);
void    ft_putchar_fd(char c, int fd);
void    ft_putnbr_fd(int n, int fd);
void    ft_putendl_fd(char *s, int fd);
char    *ft_strtrim(char const *s1, char const *set);
void    ft_striteri(char *s, void (*f)(unsigned int,char*));
char    *ft_strmapi(char const *s, char (*f)( unsigned int, char));
char    *ft_itoa(int n);
char    **ft_split(char const *s, char c);
#endif
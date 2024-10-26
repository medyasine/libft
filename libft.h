/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:42:09 by masnus            #+#    #+#             */
/*   Updated: 2024/10/26 10:19:47 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <limits.h>


void	ft_bzero(void *s, int n);
int		ft_isalnum(unsigned char c);
int		ft_isalpha(unsigned char ch);
int		ft_isalpha(unsigned char ch);
int		ft_isascii(unsigned char ch);
int		ft_isdigit(unsigned char ch);
int		ft_isprint(unsigned char ch);
void	*ft_memset(void *b, int c, int len);
size_t	ft_strlen(const char *str);
char	*ft_toupper(char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c) ;
int     ft_strncmp(const char *s1, const char *s2, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);	
void    *ft_memchr(const void *s, int c, size_t n);
void    *ft_memcpy(void *dest, const void *src,size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
void	*ft_calloc(size_t count, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s1);
int		ft_strlcpy(char *dst, char *src, size_t dstsize);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
int		ft_atoi(const char *str);




# endif
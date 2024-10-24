/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:42:09 by masnus            #+#    #+#             */
/*   Updated: 2024/10/24 21:15:24 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

void	ft_bzero(void *s, int n);
int		ft_isalnum(unsigned char c);
int		ft_isalpha(unsigned char ch);
int		ft_isalpha(unsigned char ch);
int		ft_isascii(unsigned char ch);
int		ft_isdigit(unsigned char ch);
int		ft_isprint(unsigned char ch);
void	*ft_memset(void *b, int c, int len);
int		ft_strlen(const char *str);
char	*ft_toupper(char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c) ;
int     ft_strncmp(const char *s1, const char *s2, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
void    *ft_memcpy(void *dest, const void *src,size_t n);





# endif
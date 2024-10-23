/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:42:09 by masnus            #+#    #+#             */
/*   Updated: 2024/10/23 22:52:43 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef LIBFT_H
# define LIBFT_H

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
int     ft_strncmp(const char *s1, const char *s2, int n);



# endif
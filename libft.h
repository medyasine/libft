/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:42:09 by masnus            #+#    #+#             */
/*   Updated: 2024/10/21 22:36:52 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef LIBFT_H
# define

void	ft_bzero(void *s, int n);
int		ft_isalnum(unsigned char c);
int		ft_isalpha(unsigned char ch)
int		ft_isalpha(unsigned char ch);
int		ft_isascii(unsigned char ch);
int		ft_isdigit(unsigned char ch);
int		ft_isprint(unsigned char ch);
void	*ft_memset(void *b, int c, size_t len);
int		ft_strlen(char *str);
char	*toupper(char *str);
char	*strchr(const char *s, int c);


# endif
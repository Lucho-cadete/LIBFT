/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luimarti <luimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 13:09:27 by luimarti          #+#    #+#             */
/*   Updated: 2025/05/03 13:55:18 by luimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <stddef.h>

int		ft_atoi(const char *str);
void	ft_bzero(void *ptr, size_t num);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_memcpy(void *dest, void *src, size_t n);
void	*ft_memmove(void *dest, void *src, size_t n);
void	*ft_memset(void *ptr, int value, size_t num);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int		ft_strlen(char *str);
int		ft_strncmp(char *s1, char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t length);
char	*ft_strchr(const char *str, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	*ft_calloc(size_t nmemb, size_t size);

#endif
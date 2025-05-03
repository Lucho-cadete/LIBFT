/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luimarti <luimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:55:31 by luimarti          #+#    #+#             */
/*   Updated: 2025/05/03 18:49:11 by luimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	stop;

	stop = 0;
	while (stop < n)
	{
		if ((unsigned char)s1[stop] != (unsigned char)s2[stop])
		{
			return ((unsigned char)s1[stop] - (unsigned char)s2[stop]);
		}
		if ((unsigned char)s1[stop] == '\0')
		{
			return (0);
		}
		stop++;
	}
	return (0);
}

// int main (void)
// {
// 	char a [] = "test\200";
// 	char b [] = "long\0";
// 	printf ("%d\n", ft_strncmp (a ,b, 6));
// 	printf ("%d\n", strncmp (a, b, 6));
// 	return (0);
// }
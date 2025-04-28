/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luimarti <luimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:55:31 by luimarti          #+#    #+#             */
/*   Updated: 2025/04/28 14:12:26 by luimarti         ###   ########.fr       */
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
		if (s1[stop] != s2[stop])
		{
			return (s1[stop] - s2[stop]);
		}
		if (s1[stop] == '\0')
		{
			return (0);
		}
		stop++;
	}
	return (0);
}

// int main (void)
// {
// 	char a [] = "Hello";
// 	char b [] = "HeLlo";
// 	printf ("%d\n", ft_strncmp (a ,b, 3));
// 	return (0);
// }
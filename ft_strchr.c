/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luimarti <luimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:59:02 by luimarti          #+#    #+#             */
/*   Updated: 2025/05/03 19:17:14 by luimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (NULL);
}
// int main(void)
// {
// 	const char str [] = "HelloWorld";
// 	char *result = ft_strchr(str, '\0');
// 	char *test = strchr(str, '\0');

// 	printf ("%p\n", result);
// 	printf ("%p\n", test);
// 	return (0);
// }

// //Casting is needed!
// la resta de result - str resta su posicion en la memoria!
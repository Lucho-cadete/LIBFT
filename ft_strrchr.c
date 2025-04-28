/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luimarti <luimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:07:21 by luimarti          #+#    #+#             */
/*   Updated: 2025/04/28 12:40:36 by luimarti         ###   ########.fr       */
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
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
		{
			return ((char *)&str[i]);
		}
		else
		{
			i--;
		}
	}
	return (NULL);
}
// int main()
// {
// 	const char str [] = "HelloWorld";
// 	char *result = ft_strchr(str, 'l');
// 	int index = result - str;
// 	printf ("%d\n", index);
// 	return (0);
// }

// //Casting is needed!
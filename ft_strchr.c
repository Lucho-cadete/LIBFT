/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luimarti <luimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:59:02 by luimarti          #+#    #+#             */
/*   Updated: 2025/04/28 12:39:21 by luimarti         ###   ########.fr       */
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
			return ((char *)str);
		str++;
	}
	return (NULL);
}
int main()
{
	const char str [] = "HelloWorld";
	char *result = ft_strchr(str, 'l');
	int index = result - str;
	printf ("%d\n", index);
	return (0);
}

// //Casting is needed!
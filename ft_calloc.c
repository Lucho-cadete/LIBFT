/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luimarti <luimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 10:18:48 by luimarti          #+#    #+#             */
/*   Updated: 2025/05/03 13:13:21 by luimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	tmp = malloc (nmemb * size);
	i = 0;
	if (!tmp)
		return (NULL);
	while (i < nmemb * size)
		tmp [i++] = 0;
	return (tmp);
}

// int main ()
// {
// 	size_t n = 2;
// 	char *str = (char *)ft_calloc(552654445644664, sizeof(char));
// 	if (!str)
// 	{
// 		printf("Error: Memory allocation failed.\n");
// 		return (1);
// 	}
// 	str[0] = 'H';
// 	str[1] = 'i';
// 	str[2] = '!';
// 	printf("String copied: %s\n", str);	
// 	free(str);
// 	return (0);
// }	
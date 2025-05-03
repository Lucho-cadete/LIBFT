/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luimarti <luimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 10:18:48 by luimarti          #+#    #+#             */
/*   Updated: 2025/05/03 16:48:33 by luimarti         ###   ########.fr       */
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
// 	size_t n = 10;
//     char *my_calloc = (char *)ft_calloc(n, sizeof(char));
//     char *std_calloc = (char *)calloc(n, sizeof(char));
//     int i = 0;
//     int identical = 1;

//     if (!my_calloc || !std_calloc)
//     {
//         printf("Error: Memory allocation failed.\n");
//         free(my_calloc);
//         free(std_calloc);
//         return (1);
//     }

//     while (i < (int)n)
//     {
//         if (my_calloc[i] != std_calloc[i])
//         {
//             identical = 0;
//             break;
//         }
//         i++;
//     }

//     if (identical)
//         printf("✅ Both calloc versions behave the same (memory zeroed).\n");
//     else
//         printf("❌ Mismatch: calloc and ft_calloc produce different memory content.\n");

//     free(my_calloc);
//     free(std_calloc);
//     return (0);
// }	
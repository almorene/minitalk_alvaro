/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:18:36 by almorene          #+#    #+#             */
/*   Updated: 2023/12/01 20:01:58 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
		i++;
	}
	return (0);
}
/*int main (void)
{
    unsigned char s[] = {1, 2, 3, 4 ,5};
    int busca;
    busca = 2;
    size_t n;
    n = 9;
    void *result = ft_memchr(s, busca, n);
    if (result != NULL)
    {
        size_t posicion_busca = (unsigned char *)result - s;
        printf("%zu\n", posicion_busca);
    }
	char str[] = "EEta es una cadena de ejemplo";
    char target = 'E'; // Carácter que buscamos
	char * resultado;

    
    resultado = (char *)ft_memchr(str, target, ft_strlen(str));

    if (result != NULL) {
        printf("El carácter '%c'  posición %ld.\n", target, resultado - str);
    } else {
        printf("El carácter '%c' no se encuentra en la cadena.\n", target);
    }

    return(0);
}*/

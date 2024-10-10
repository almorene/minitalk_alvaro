/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:30:22 by almorene          #+#    #+#             */
/*   Updated: 2023/12/01 20:02:10 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*source;

	dest = (unsigned char *)dst;
	source = (unsigned char *) src;
	if (n == 0 || dst == src)
		return (dst);
	i = 0;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dest);
}
/*int main(void)
{
	unsigned char des[50]= "hola";
	unsigned char src[6] = "amigo";
	
	size_t i;
	i = 7;
	
	printf("%s\n", memcpy(des, src, i));
	printf("%s\n", ft_memcpy(des, src, i));

	return(0);
}*/
/*int main() {
    int numero_src = 42;
    char cadena_src[10] = "yeeee";
	size_t n = 100;

    // Variables de destino
    int numero_dest;
    char cadena_dest[14]; // Asegúrate de asignar el tamaño suficiente

    // Copiar las variables originales en las variables de destino
    ft_memcpy(&numero_dest, &numero_src, sizeof(int));
    ft_memcpy(cadena_dest, cadena_src, sizeof(char*));

    // Imprimir las copias
    printf("%d\n", numero_dest);
    printf("%s\n", cadena_dest);

    return 0;
}*/
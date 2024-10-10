/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:49:31 by almorene          #+#    #+#             */
/*   Updated: 2023/12/01 20:02:46 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
/*{
	char	*dest;
	int		i;
	int		j;

	j = 0;
	while (src[j])
		j++;
	if (!(dest = malloc (sizeof(char) * (j + 1))))
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}*/	
{
	char	*s2;

	s2 = (char *)malloc(ft_strlen(src) + 1);
	if (!s2)
		return (NULL);
	ft_memcpy (s2, src, ft_strlen(src) + 1);
	return (s2);
}
/*int main (void)
{
	const char *original = "qqaqq";
	char *copia = "hola";

	copia = ft_strdup(original);

	if(copia == NULL)
	{
		printf("nadadena\n");
		return(1);
	}
	else  
		printf("%s\n", copia);

	free(copia);
	return(0);
}*/

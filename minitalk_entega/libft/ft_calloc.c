/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:06:56 by almorene          #+#    #+#             */
/*   Updated: 2023/11/22 18:56:53 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	*ft_calloc(size_t tmr, size_t	bm)
{
	void	*p;

	p = malloc(tmr * bm);
	if (p == NULL)
		return (NULL);
	else
		ft_bzero (p, tmr * bm);
	return (p);
}
/*int main(void)
{
	size_t tmr;// tamaño del numero de bloque
	tmr = 5;
	size_t bm; // tipo de tamaño y numero de bloques de ese tamaño

	printf("%s\n", calloc(tmr,bm));
	printf("%s\n", ft_calloc(tmr, bm));
	
	return(0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 20:40:45 by almorene          #+#    #+#             */
/*   Updated: 2023/12/01 20:02:48 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (*s)
	{
		f (i, s);
		i++;
		s++;
	}
}
/*void prueba (unsigned int index, char *s)
{
	if (*s >= 'a' && *s <= 'z')
	{
		*s -= 32;
	}
}

int main (void)
{
	char s[] = "hola";
	
	ft_striteri(s, prueba);
	printf("%s\n", s);
	return(0);// aplica la funcion a s y a i. Luego irtera las 2.
}*/

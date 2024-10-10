/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 13:04:44 by almorene          #+#    #+#             */
/*   Updated: 2023/12/01 20:01:13 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

static int	len_num(long int n)
{
	int	len;

	len = 0;
	while (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*sol;
	int			len;
	long int	aux;

	if (n == 0)
		return (ft_strdup("0"));
	aux = n;
	len = len_num(aux);
	sol = (char *)malloc(sizeof(char) * (len + 1));
	if (sol == NULL)
		return (NULL);
	if (aux < 0)
	{
		sol[0] = '-';
		aux = -aux;
	}
	sol[len] = '\0';
	len--;
	while (aux > 0)
	{
		sol[len] = (aux % 10) + '0';
		aux = aux / 10;
		len--;
	}
	return (sol);
}

/*int main(void)
{
	//char str[50] = "-1234a";
	int i = 0;
	printf ("%d\n", len_num(i));
	printf("%s\n", ft_itoa(i));
	//printf("%d\n", itoa(i));
	return(0);
}*/

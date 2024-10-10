/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:45:45 by almorene          #+#    #+#             */
/*   Updated: 2024/09/16 20:36:01 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

void	ft_putnbr_printf(int n, int *contador)
{
	char	c;

	if (n == -2147483648)
	{
		ft_putchar_printf ('-', contador);
		ft_putchar_printf ('2', contador);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_printf ('-', contador);
		n = n * -1;
	}
	if (n >= 10)
	{
		ft_putnbr_printf (n / 10, contador);
		c = (n % 10);
		n = n / 10;
		ft_putchar_printf (c + '0', contador);
	}
	else
		ft_putchar_printf (n + '0', contador);
}
//d
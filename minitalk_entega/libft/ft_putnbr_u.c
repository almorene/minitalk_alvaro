/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:51:13 by almorene          #+#    #+#             */
/*   Updated: 2024/09/16 20:35:48 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_u(unsigned int n, int *contador)
{
	char	c;

	if (n >= 10)
	{
		ft_putnbr_u (n / 10, contador);
		c = (n % 10);
		n = n / 10;
		ft_putchar_printf (c + '0', contador);
	}
	else
		ft_putchar_printf (n + '0', contador);
}

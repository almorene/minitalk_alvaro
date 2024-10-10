/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 21:50:26 by almorene          #+#    #+#             */
/*   Updated: 2024/09/16 20:36:18 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthex(unsigned int n, int *contador)
{
	char	*hexmax;

	hexmax = "0123456789ABCDEF";
	if (n / 16 != 0)
		ft_puthex(n / 16, contador);
	n = n % 16;
	ft_putchar_printf(hexmax[n], contador);
}

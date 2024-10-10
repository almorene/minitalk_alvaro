/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:36:35 by almorene          #+#    #+#             */
/*   Updated: 2024/09/16 20:36:30 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

/*void ft_putex(uintptr_t n, char c, int *contador)
{
	if (n >= 16)
		ft_putex ( n / 16, c, contador);
	n = n % 16;
	if(n < 0)
	{
		ft_putchar_printf('-', contador);
		n *= -1;
	}
	if (n < 10)
	{
		ft_putchar_printf(n + '0', contador);
	}
	else if (c == 'X')
		ft_putchar_printf(n - 10 + 'A', contador);
	else 
		ft_putchar_printf(n - 10 + 'a', contador);
}*/

/*void ft_putex(int num, int *contador)
{
	//1. recursion.
	//2. entre 16 problema, no imprime caracteres, es lo mismo, 
	//pero hay que hacerlo de este modo, 
	//en binerio por ejemplo,
	// habria que dividirlo entre 2
	//3. Declaramos un string, por que 

	char * hexminus = "0123456789abcdef"

	if es negativo?
		write -
		num -= num
}*/
void	ft_putex(unsigned long int n, int *contador)
{
	char	*hexminus;

	hexminus = "0123456789abcdef";
	if (n / 16 != 0)
		ft_putex(n / 16, contador);
	n = n % 16;
	ft_putchar_printf(hexminus[n], contador);
}

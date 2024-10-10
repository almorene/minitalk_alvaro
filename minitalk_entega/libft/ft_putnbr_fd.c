/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 13:20:48 by almorene          #+#    #+#             */
/*   Updated: 2023/12/01 20:02:27 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		ft_putchar_fd ('-', fd);
		ft_putchar_fd ('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd ('-', fd);
		n = n * -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd (n / 10, fd);
		c = (n % 10) + '0';
		n = n / 10;
		write (fd, &c, 1);
	}
	else
		ft_putchar_fd (n + '0', fd);
}
/*int main(void)
{
	int n;

	int fd;

	n = -11111214;
	fd = 1;
	ft_putnbr_fd(n, fd);
	return(0);
}*/

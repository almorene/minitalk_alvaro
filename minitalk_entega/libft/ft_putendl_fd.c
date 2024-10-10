/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:56:49 by almorene          #+#    #+#             */
/*   Updated: 2023/12/01 20:02:24 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	if (s != NULL)
	{
		ft_putstr_fd (s, fd);
		ft_putchar_fd ('\n', fd);
	}
}
/*int main (void)
{
	char *s = "holajd";
	int fd;
	fd = 1;
	ft_putendl_fd(s, fd);
	return(0);
}*/

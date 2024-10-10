/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:39:20 by almorene          #+#    #+#             */
/*   Updated: 2024/09/16 20:35:36 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr_printf(char *s, int *contador)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		i = write(1, "(null)", 6);
		*contador = *contador + 6;
		return ;
	}
	while (s[i] != '\0')
	{
		ft_putchar_printf(s[i], contador);
		i++;
	}
}
//s

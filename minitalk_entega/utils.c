/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 20:47:45 by almorene          #+#    #+#             */
/*   Updated: 2024/10/02 20:07:28 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	print_and_reset_buffer(char *buffer, size_t *c)
{
	write(1, buffer, *c);
	ft_bzero(buffer, BUFFER_SIZE);
	write(1, "\n", 1);
}

void	reset_and_free_buffer(char **buffer, size_t *c)
{
	print_and_reset_buffer(*buffer, c);
	free (*buffer);
	*buffer = NULL;
	*c = 0;
}

char	*expand_buffer(char **buffer, size_t *buffer_size)
{
	size_t	new_size;
	char	*new_buffer;

	new_size = (*buffer_size) * 2;
	new_buffer = (char *)malloc(new_size);
	if (!new_buffer)
	{
		write(2, "Error al expandir el buffer\n", 28);
		exit(EXIT_FAILURE);
	}
	ft_memcpy (new_buffer, *buffer, *buffer_size);
	free(*buffer);
	*buffer = new_buffer;
	*buffer_size = new_size;
	return (*buffer);
}

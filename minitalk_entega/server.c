/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:36:10 by almorene          #+#    #+#             */
/*   Updated: 2024/10/02 19:49:37 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

//int	g_server = 1;

void	print_pid(void)
{
	pid_t	num_pid;

	num_pid = getpid();
	ft_putnbr_fd (num_pid, 1);
	write(1, "\n", 1);
}

char	*initialize_buffer(size_t buffer_size)
{
	char	*buffer;

	buffer = (char *)malloc(buffer_size);
	if (!buffer)
	{
		write(2, "Error de memoria\n", 17);
		exit(EXIT_FAILURE);
	}
	ft_bzero(buffer, buffer_size);
	return (buffer);
}

void	set_bit(char *buffer, size_t c, int bit, int sign)
{
	if (sign == SIGUSR1)
		buffer[c] |= (1 << bit);
	else if (sign == SIGUSR2)
		buffer[c] &= ~(1 << bit);
}

void	reception_of_bits(int sign)
{
	static size_t	c = 0;
	static int		bit = 7;
	static char		*buffer = NULL;
	static size_t	buffer_size = BUFFER_SIZE;

	if (buffer == NULL)
		buffer = initialize_buffer(buffer_size);
	set_bit(buffer, c, bit, sign);
	if (bit == 0)
	{
		if (buffer[c] == '\0')
			reset_and_free_buffer(&buffer, &c);
		else
			c++;
		bit = 7;
	}
	else
		bit--;
	if (c >= buffer_size)
	{
		//print_and_reset_buffer(buffer, &c);
		//c = 0;
		//bit = 7;
		buffer = expand_buffer(&buffer, &buffer_size);
	}
}
/*static void close_server ()
{
    //int sig;
	write(1,"\nservidor apagado\n", 19);
    //sig = 2;
    g_server = 0;
}*/
/*void	close_server(void)
{
	write(1, "\nServidor apagado\n", 18);
	exit(0);  // Finalizar el programa
}*/

int	main(void)
{
	print_pid ();
	signal (SIGUSR1, reception_of_bits);
	signal (SIGUSR2, reception_of_bits);
	while (1)
	{
		pause();
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:35:49 by almorene          #+#    #+#             */
/*   Updated: 2024/10/02 20:30:55 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	handle_signal_error(const char *msg, size_t c)
{
	write(2, msg, c);
	return (1);
}

int	send_bits_wpid(char x, pid_t num_pid)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if (x & (1 << i))
		{
			if (kill(num_pid, SIGUSR1) == -1)
				return (handle_signal_error("Error\n", 6));
		}
		else
		{
			if (kill(num_pid, SIGUSR2) == -1)
				return (handle_signal_error("Error\n", 6));
		}
		usleep(200);
		i--;
	}
	return (0);
}

int	send_string(char *str, pid_t num_pid)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if (send_bits_wpid(str[i], num_pid))
		{
			return (1);
		}
		i++;
	}
	j = 0;
	while (j < 8)
	{
		kill (num_pid, SIGUSR2);
		usleep(50);
		j++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 3 || argc > 3)
	{
		ft_printf ("Error: client pid mensaje\n");
		return (1);
	}
	if (argc == 3)
	{
		i = ft_atoi (argv[1]);
		if (i <= 0)
		{
			ft_printf ("Error: PID incorrecto\n");
			return (1);
		}
		else
		{
			send_string (argv[2], i);
		}
	}
	return (0);
}

// va de derecha a izquierda. sobre x va a ver si tienes que poner un 1 
// siguser1 es 1
//siguser2 es 0
// los kills comprueban si son 0 o 1, por que estamos utilizando bits.
// es i-- por que decrementamos lo que nos pasan, dederechaca izquierda
//VIP: por que solo un & en vez dde dos. ¿por que?
// send string recorre y envia la string entera! cuando ya hasc 
//liedo los chars que 
//se mandan en cada bits que se analiza en la anterior
// acuerdate que el '\0' es 00000000 por eso el ultimo while de j
//create una funcion para lo errores

/*int	send_bits_wpid(char x, pid_t num_pid)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		// Verifica si el bit está encendido y envía SIGUSR1, de lo contrario SIGUSR2
		if (x & (1 << i))
		{
			if (kill(num_pid, SIGUSR1) == -1)
			{
				perror("Error al enviar SIGUSR1");
				return (1);  // Devuelve 1 en caso de error
			}
		}
		else
		{
			if (kill(num_pid, SIGUSR2) == -1)
			{
				perror("Error al enviar SIGUSR2");
				return (1);  // Devuelve 1 en caso de error
			}
		}
		usleep(1000);  // Pausa de 1ms entre señales
		i--;
	}
	return (0);  // Todo correcto
}*/

// Función principal
/*int	main(int argc, char **argv)
{
	pid_t	server_pid;

	// Verifica que los argumentos sean correctos
	if (argc != 3)
	{
		ft_printf("Error: uso incorrecto. Uso: ./client <PID> <mensaje>\n");
		return (1);
	}

	// Convierte el PID del servidor de cadena a número
	server_pid = ft_atoi(argv[1]);
	if (server_pid <= 0)
	{
		ft_printf("Error: PID incorrecto\n");
		return (1);
	}

	// Envía la cadena al servidor
	if (send_string(argv[2], server_pid))
	{
		ft_printf("Error al enviar el mensaje al servidor\n");
		return (1);
	}

	return (0);  // Todo correcto
}*/
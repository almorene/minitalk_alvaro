/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:41:40 by almorene          #+#    #+#             */
/*   Updated: 2024/10/02 19:51:41 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# include "./libft/libft.h"
# include <signal.h>
# include <stdio.h>
# include <stddef.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>
# include <math.h>
# include <limits.h>

void	print_pid(void);
int		send_bits_wpid(char x, pid_t num_pid);
int		send_string(char *str, pid_t num_pid);
void	print_and_reset_buffer(char *buffer, size_t *c);
//int		validate_quotes(const char *buffer);
void	reception_of_bits(int sign);
char	*initialize_buffer(size_t buffer_size);
void	reset_and_free_buffer(char **buffer, size_t *c);
char	*expand_buffer(char **buffer, size_t *buffer_size);

#endif
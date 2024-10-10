/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 14:50:52 by almorene          #+#    #+#             */
/*   Updated: 2024/09/16 20:36:50 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "libft.h"
#include <unistd.h>

void	ft_format(const char *format, va_list args, int *contador)
{
	if (*format == 'c')
		ft_putchar_printf(va_arg(args, int), contador);
	else if (*format == 'd' || *format == 'i')
		ft_putnbr_printf(va_arg(args, int), contador);
	else if (*format == 's')
		ft_putstr_printf(va_arg(args, char *), contador);
	else if (*format == 'p')
	{
		write(1, "0x", 2);
		(*contador) += 2;
		ft_putex(va_arg(args, size_t), contador);
	}
	else if (*format == 'u')
		ft_putnbr_u(va_arg(args, unsigned int), contador);
	else if (*format == '%')
	{
		write(1, "%", 1);
		(*contador)++;
	}
	else if (*format == 'x')
		ft_putex(va_arg(args, unsigned int), contador);
	else if (*format == 'X')
		ft_puthex(va_arg(args, int), contador);
}

int	ft_printf(char const *input, ...)
	{
	va_list		args;
	int			i;
	int			contador;

	va_start (args, input);
	i = 0;
	contador = 0;
	while (input[i])
	{
		if (input[i] == '%')
		{
			i++;
			ft_format (&input[i], args, &contador);
		}
		else
		{
			ft_putchar_printf (input[i], &contador);
		}
		if (input[i])
			i++;
	}
	va_end (args);
	return (contador);
}

/*int main()
{
	int a;
	a = printf("%u", -1);
	printf("%d\n", a);
	a = ft_printf("%u", -1);
	ft_printf("%d\n", a);
	
	return(0);
}*/
/*int main()
{
	int a;

	a = ft_printf("%d ", 10);
	ft_printf("%d\n", a);
	return (0);
}*/
/*int main()
{
    //int i = 12;
	//char	*pal = "patata";
    //char c = 'i';
	int a;
	int b;
	int e;
	int d;
	int f;
	int g;
    unsigned int u = 35;

	a = ft_printf(" NULL %s NULL ", NULL);
	ft_printf("%d\n", a);
    f = ft_printf("que tal %c\n", c);
	g = printf("que tal %c\n", c);
	printf("\n%d, %d\n\n",f, g);
	e = ft_printf("que tal %s\n", pal);
	d = printf("que tal %s\n", pal);
	printf("\n%d, %d\n\n",e, d);
	a = ft_printf("QUE PASA %% \n");
	b = printf("QUE PASA %% \n");
	printf ("\n%d, %d\n\n", a, b);
    ft_printf("%s\n", "hola");
    ft_printf("%d\n", i);
    ft_printf("%c\n", c);
    ft_printf("%u\n", u);
    ft_printf("%%\n");
	ft_printf("%x\n", 10);
	ft_printf("%X\n", 10); 
	//ft_printf("%p", )

    return(0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:16:55 by almorene          #+#    #+#             */
/*   Updated: 2024/09/17 19:47:54 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*ptr;
	const unsigned char	*ptr2;

	ptr = (unsigned char *) dst;
	ptr2 = (unsigned char *) src;
	if (dst == src || n == 0)
		return (dst);
	if (ptr2 < ptr)
	{
		while (n > 0)
		{
			ptr[n - 1] = ptr2[n - 1];
			n--;
		}
	}
	else
	{
		ft_memcpy(dst, src, n);
	}
	return (dst);
}
/*int main (void)
{
	// tambien valdria while (++i <= len)
			//ptr[len - i] = ptr2[len - i];
	size_t len;
	len = 20;
	char source[21] = "hooohiotitit";
	char dest[20] = "aaaaaaa";
	printf("%s\n", memmove(dest, source, len));
	printf("%s\n", ft_memmove(dest, source, len));
	return(0);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:09:53 by almorene          #+#    #+#             */
/*   Updated: 2023/12/01 20:02:05 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h> 

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ptr2;

	if (n == 0)
		return (0);
	ptr = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (*ptr == *ptr2 && i < n - 1)
	{
		ptr++;
		ptr2++;
		i++;
	}
	return ((int)(*ptr - *ptr2));
}
/*int main (void)
{
    char s1[] = "hola";
    char s2[] = "holb";
    int n;
    n = 5;
    printf("%d", ft_memcmp(s1, s2, n));
    return(0);
}*/

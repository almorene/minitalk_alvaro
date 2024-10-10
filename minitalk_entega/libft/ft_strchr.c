/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:42:21 by almorene          #+#    #+#             */
/*   Updated: 2023/12/01 20:05:03 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (unsigned char ) c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char )c == '\0')
		return ((char *)s);
	return (NULL);
}
/*int main()
{
    char str [10] = "hola";
    int c;
    c = '0';
    printf("%s\n", ft_strchr(str, c));
	printf("%s\n", strchr(str,c));
    return(0);
}*/

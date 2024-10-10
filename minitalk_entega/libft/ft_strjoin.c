/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:26:14 by almorene          #+#    #+#             */
/*   Updated: 2023/12/01 20:05:16 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len;
	int		i;
	int		i2;

	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str || !s2 || !s1)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	i2 = 0;
	while (s2[i2] != '\0')
		str[i++] = s2 [i2++];
	str[i] = '\0';
	return (str);
}
/*int main (void)
{
    char const *s1 = "hola";
    char const *s2 = "amigo";
    printf("%s", ft_strjoin(s1, s2));
    return (0);
}*/

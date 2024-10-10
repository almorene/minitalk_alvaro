/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:10:33 by almorene          #+#    #+#             */
/*   Updated: 2023/12/01 20:03:24 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_of_s;
	char	*substr;
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (NULL);
	len_of_s = ft_strlen(s);
	if (start >= len_of_s)
		return (ft_strdup(""));
	if (len > len_of_s - start)
		len = len_of_s - start;
	substr = (char *)malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	i = 0;
	j = start;
	while (j < len_of_s && i < len)
	{
		substr[i] = s[j];
		i++;
		j++;
	}
	substr[i] = '\0';
	return (substr);
}
/*int main (void)
{
	char const *s = "hola, amigo mio";
	unsigned int start = 2;
	size_t len = 20;

	printf("%s" ,ft_substr(s, start, len));
	return(0);
}*/

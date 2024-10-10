/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:30:18 by almorene          #+#    #+#             */
/*   Updated: 2023/12/01 20:03:21 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_check(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*str;

	len = ft_strlen(s1);
	while (ft_check(*s1, set) == 1 && *s1)
	{
		s1++;
		len--;
	}
	while (ft_check(s1[len - 1], set) == 1 && len > 0)
		len--;
	if (len == 0)
		return (ft_strdup(""));
	str = malloc(sizeof(char) * (len +1));
	if (s1 == NULL || set == NULL || str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s1[i];
		i++;
	}
	str[len] = '\0';
	return (str);
}
/*static int	ft_check(char const c, char const *set)
{
	size_t	j;

	j = 0;
	while (set[j])
	{
		if (c == set[j])
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len;
	size_t	i;
	size_t	j;

	if (!s1)
		return (0);
	len = ft_strlen(s1);
	if (len == 0)
		return (ft_strdup(""));
	i = 0;
	while (ft_check(s1[i], set) == 1 && s1[i])
		i++;
	while (ft_check(s1[len - 1], set) == 1 && len > 0)
		len--;
	if (len <= i)
		return (ft_strdup(""));
	str = malloc((len - i + 1) * sizeof(char));
	if (!str)
		return (0);
	j = 0;
	while (i < len)
		str[j++] = (char)s1[i++];
	str[j] = '\0';
	return (str);
}*/
/*int main ()
{
	char *s1 = "amigaaaahaaa";
	char *s2 = "a";

	printf("%s\n", ft_strtrim(s1, s2));
	return(0);

	//primer while //cuenta/imprime las veces que hay caracteres set 
	//al principio de la cadena, hasta que llegue al nulo.
	//strlen //cuenta desde el numero de caracteres de s1 
	//desde donde se quedo s1, 
	//dado por la funcion anterior
	//segundo while // cuenta/imprime desde el final, 
	//el numero de caracteres que hay de set y se los resta a size_s1
	//antes de legar a zero.
	//return  //te copia desde el set contado al principio, 
	//en 0 por que ya estams al principio
	//de lo que queremos copiar, y hasta size_s1, 
	//que es el final de la cadena restado con los caracteres 
	//de set que habia  al final +1 
	//(para el nulo)
}*/
/*size_t	size_s1_res;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	size_s1_res = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[size_s1_res]) && size_s1_res != 0)
		size_s1_res--;
	return (ft_substr((char *)s1, 0, size_s1_res +1));*/

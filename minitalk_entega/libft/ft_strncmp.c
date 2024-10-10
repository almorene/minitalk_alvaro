/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:31:06 by almorene          #+#    #+#             */
/*   Updated: 2023/12/01 20:03:09 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i] && i < n - 1)
		++i;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
/*int main(void)
{
    const char *str1 = "monaco";
    const char *str2 = "mono";
    size_t n;
    n = 5;
    printf("%d", ft_strncmp(str1, str2, n));
    return(0);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:27:20 by almorene          #+#    #+#             */
/*   Updated: 2023/12/01 20:01:37 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst && lst -> next)
	{
		lst = lst -> next;
	}
	return (lst);
}
/*int main ()
{
	t_list *lst = NULL;
    int a = 1;
    int b = 2;
    int c = 3;

    t_list *nodo_a = ft_lstnew(&a);
    t_list *nodo_b = ft_lstnew(&b);
    t_list *nodo_c = ft_lstnew(&c);

	  ft_lstadd_back(&lst, nodo_a);
    ft_lstadd_back(&lst, nodo_b);
    ft_lstadd_back(&lst, nodo_c);


	t_list *ultimo = ft_lstlast(lst);

	printf ("%d\n",*(int *) ultimo->content);

	return(0);

	
}*/

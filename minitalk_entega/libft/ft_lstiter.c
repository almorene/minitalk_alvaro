/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:58:14 by almorene          #+#    #+#             */
/*   Updated: 2023/12/01 20:01:33 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst ->content);
		lst = lst->next;
	}
}
/*void multiplica (void * contenido)
{ 
	int *num = (int *) contenido;
	*num *= 2;
}
int main ()
{
	t_list *lst = NULL;
    int a = 2;
    int b = 4;
    int c = 6;

    t_list *nodo_a = ft_lstnew(&a);
    t_list *nodo_b = ft_lstnew(&b);
    t_list *nodo_c = ft_lstnew(&c);

    ft_lstadd_front(&lst, nodo_a);
    ft_lstadd_front(&lst, nodo_b);
    ft_lstadd_front(&lst, nodo_c);

    ft_lstiter(lst, multiplica);

	


	printf("%d\n",*(int*) nodo_a->content );
	printf("%d\n",*(int*) nodo_b->content );
	printf("%d\n",*(int*) nodo_c->content );

	free(nodo_a);
	free(nodo_b);
	free(nodo_c);

	return (0);

}*/
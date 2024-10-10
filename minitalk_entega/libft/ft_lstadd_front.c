/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:58:08 by almorene          #+#    #+#             */
/*   Updated: 2023/12/01 20:01:19 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
/*if (lst == NULL || new == NULL)
        return;
    
    // Verifica que tanto el puntero a la lista 
	como el nuevo elemento no sean nulos.
    // Si alguno de los dos es nulo, la función no hace nada y retorna.

    new->next = *lst;
    // La variable 'new' se conecta al frente de la lista.
    // El puntero 'next' de 'new' se establece para 
	apuntar al primer elemento de la lista actual.

    *lst = new;
    // Luego, el puntero a la lista (*lst) se actualiza para apuntar a 'new'.
    // Esto significa que 'new' ahora es el primer elemento de la lista.

    // Como resultado, 'new' se convierte en la 
	cabeza de la lista (el primer elemento) y apunta al elemento anterior
    // que era la cabeza antes de agregar 'new'. 
	La lista en sí se modifica de manera que 'new' se coloca al frente.
}*/

/*int main ()
{
    t_list *lst = NULL;
    int a = 1;
    int b = 2;
    int c = 3;

    t_list *nodo_a = ft_lstnew(&a);
    t_list *nodo_b = ft_lstnew(&b);
    t_list *nodo_c = ft_lstnew(&c);

    ft_lstadd_front(&lst, nodo_a);
    ft_lstadd_front(&lst, nodo_b);
    ft_lstadd_front(&lst, nodo_c);

    t_list *current = lst;

    while (current)
    {
        printf("%d\n", *(int *) current->content);
        current = current -> next;
    }
    return(0);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 19:49:17 by almorene          #+#    #+#             */
/*   Updated: 2023/12/01 20:01:22 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (lst == NULL || *lst == NULL)
		return ;
	if (lst && *lst)
	{
		ft_lstclear(&(*lst)-> next, del);
		ft_lstdelone(*lst, del);
		*lst = NULL;
	}
}

/*void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	(del)(lst -> content);
	free (lst);
}*/
/*void delete_node(void *content)
{
    free(content);
}

int main() {
    // Crear una lista de ejemplo
    t_list *list = NULL;
   
   // Llamar a ft_lstclear para eliminar la lista
    ft_lstclear(&list, delete_node);

    // Comprobar si la lista está vacía
    if (list == NULL) {
        printf("La lista ha sido eliminada correctamente.\n");
    }

    return (0);
}*/

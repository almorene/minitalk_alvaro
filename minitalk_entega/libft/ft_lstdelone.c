/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:46:34 by almorene          #+#    #+#             */
/*   Updated: 2023/12/01 20:01:30 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	(del)(lst -> content);
	free (lst);
}
/*void delete_contenido(void *content)
{
    free(content);
}*/
/*int main()
{
	t_list *lista = NULL;
	
	char *i = "hola";
	
 	t_list *newnode =  ft_lstnew(i);
	 newnode -> content = (char *)malloc(sizeof(char));
	
	

	newnode -> next = lista;
	lista = newnode;


	 ft_lstdelone(newnode, delete_contenido);

	  if (newnode == NULL) {
        printf("El nodo ha sido eliminada correctamente.\n");
		return(0);
    }

}*/
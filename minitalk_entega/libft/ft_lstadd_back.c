/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 20:14:16 by almorene          #+#    #+#             */
/*   Updated: 2023/12/01 20:01:15 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*n;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		n = ft_lstlast(*lst);
		n -> next = new;
	}
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	
    char *content = "hola!";
    t_list    *new = ft_lstnew(content);
    t_list *result = ft_lstnew(ft_strdup("adios"));
    ft_lstadd_back(&result, new);
    t_list *aux = result;
    while (aux != '\0')
    {
        printf("Contenido: %s\n", aux->content);
        aux = aux->next;
    }
    return (0);
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

    ft_lstadd_back(&lst, nodo_a);
    ft_lstadd_back(&lst, nodo_b);
    ft_lstadd_back(&lst, nodo_c);

    t_list *current = lst;

    while (current)
    {
        printf("%d\n", *(int *) current->content);
        current = current -> next;
    }
    return(0);
}*/

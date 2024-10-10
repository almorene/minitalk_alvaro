/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:39:47 by almorene          #+#    #+#             */
/*   Updated: 2023/12/01 20:02:37 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/*int ft_count(char *str, char c)
{
    int i;
    int size;
    
    size = 0;
    i = 0;
    while   (str[i] != '\0')
    {
        if( str[i] == c)
        {
            i++;
        }
        
            size++;
        i++;
    }
    return(size);
}*/
//while, cuando no sea nulo, recorre la str. cuando llegue a nulo parará.
//siempre que no aparezca el c Y IN_WORD = 0(FALSE), se sumará el  ++sum, 
//y el in_word se vuelve true = 1 
//en cuanto aparezca c, volvemos INWORD = 0, volvemos atras(++sum)
//str++(recorremos el string,mencioando antes).
//devolvemos (sum);

static int	count_words(const char *str, char c)
{
	int	sum;
	int	in_word;
	int	i;

	sum = 0;
	in_word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && in_word == 0)
		{
			sum++;
			in_word = 1;
		}
		else if (str[i] == c)
			in_word = 0;
		i++;
	}
	return (sum);
}
//contará cuantas veces hay c!

//En esta funcion, while, cuando el str sea diferente a c y str no sea nulo
//sumamos len++(cuenta las letras)
//recorremos la str (i++)
//devolvemos este numero len
static int	count_letr(const char *str, int i, char c)
{
	int		len;

	len = 0;
	while (str[i] != c && str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
// En esta funcion Siempre que j sea mayor o igual a 0, 
//se liberará la memoria almacenada en new[j] y jota se ira restando,
//hasta ser negativo
//despues se liberará new completo! Y returnara NULL
//El free dentro del while elimina las reservas para cada palabra, 
//el free de fuera libera todo

char	**malloc_liberar(char **new, int pa)
{
	while (pa >= 0)
	{
		free(new[pa]);
		pa--;
	}
	free(new);
	return (NULL);
}
// comenzamos el split, generamos tres variables, una un doble puntero, 2 int.
//generamos el malloc con el valor que sacamos de de count 
//words(las veces que aparece c) +1
// por el ultimo caracter nulo
// y que sea una memoria con tamaño de char.
//condicion si new, puntero doble, es 0, devuelve nulo (return NULL)
//igualamos las int j e i a 0
// mientras While j sea menor que las veces que aparecerá c(caracter separativo)
//generamos un while dentro de este, que dice que mientras algun character 
//dentro de char s sea igual a c seguirá corriendo el string
//seguimos con el primer while, donde decimos que new(puntero doble) 
//será igual a
// al substr(funcion que copia desde una cadena de string, 
//con un int que te dice desde donde copiar 
//y el tamaño donde debes copiarlo)
//sus variables seran : copiar s, desde i, 
//con el tamaño que genermaos en word_len
//seguimos dentro del primer while, condición: si new[j] es 0, 
//returnamos malloc error
//(con new y j de variables)
//al final tnedremos que ir sumandole a i len en world len
// recoremos new ++j;
// igualamos new [j] a 0.
//por ultimo devollvemos new!

char	**ft_split(char const *s, char c)
{
	int		j;
	int		i;
	char	**new;

	new = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (j < count_words(s, c))
	{
		while (s[i] == c)
			i++;
		new[j] = ft_substr(s, i, count_letr(s, i, c));
		if (new[j] == NULL)
			return (malloc_liberar(new, j));
		i += count_letr(s, i, c);
		j++;
	}
	new[j] = 0;
	return (new);
}
/*char **ft_split (char const *str, char c)
{
    char *aux = ft_strtrim(str, &c);
    
    printf("'%s'\n",str);
    printf("'%s'\n",aux);
    
    int words = ft_count(aux,c);
    printf("Words -> %i\n", words);

    return NULL;str = ((char **)malloc(ft_count + 2) * sizeof(char *));
     
}*/
/*int main()
{
    char *str = "hola mundo como estas";
    char c = ' ';
    int i;
    i = 50;
	//int j = 0;
	char **result;
	int a;
	
	a = count_words(str, c);
    
	
	printf("%d\n", a);
	
	printf("%d\n", count_letr(str, a, c));


	result = ft_split(str, c);
	 for (int i = 0; result[i] != NULL; i++) {
        printf("%s\n", result[i]);
        free(result[i]); // Liberar la memoria de cada palabra
    }

    free(result); // Liberar el arreglo de palabras
	
	//while(prueba)
	//{
		//printf("%s\n", prueba[j]);
		//j++;
	//}
   //printf("%s\n", ft_split(str, c));
 	
   return(0);  
}*/

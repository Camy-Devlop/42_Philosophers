/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 02:22:15 by isadbaib          #+#    #+#             */
/*   Updated: 2025/05/07 02:22:30 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philosophers.h"

bool  ft_conversion_tab(char **tab, int **res)
{
  int i;

	(void)tab;
	(void)i;
  if (!res)
    return (false);
  *res = ft_calloc(4, sizeof(int));
  if (!*res)
    return (false);
  i = 1;  
  while (i < 5)
  {
//    (*res)[i] = ft_calloc(1, sizeof(int));
    (*res)[i]	 = ft_atoi(tab[i]);
		printf("%d \n",(*res)[i]);

    i++;
  }
  return (true);
}

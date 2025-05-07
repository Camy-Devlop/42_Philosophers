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

  if (!res)
    return (false);
  *res = ft_calloc(4, sizeof(int*));
  if (!*res)
    return (false);
  i = 0;  

  while (i < 4)
  {

    *res[i] = ft_atoi(tab[i]);
    i++;
  }
  return (true);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 20:57:41 by isadbaib          #+#    #+#             */
/*   Updated: 2025/04/22 21:29:07 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philosophers.h"

bool	ft_isdigit(char c)
{
	return ('0' <= c && c <= '9');
}

/*
int	main(int n, char **tab)
{
	int i=1;
	while (i < n)
	{
	printf ("[%c] = %d \n",tab[i][0],ft_isdigit(tab[i][0]));
	i++;
	}
}*/

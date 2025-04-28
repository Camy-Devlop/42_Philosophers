/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 03:35:29 by isadbaib          #+#    #+#             */
/*   Updated: 2025/04/25 09:23:58 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philosophers.h"

static bool	ft_check_int(char *s)
{
	size_t	i;

	if (!s || ft_strlen(s) == 0)
		return (false);
	i = 0;
	while (s[i] != '\0')
	{
		if (!ft_isdigit(s[i]))
			return (false);
		i++;
	}
	return (true);
}

bool	ft_check(char **tab, size_t nb)
{
	size_t	i;

	if (nb < 5 || 6 < nb)
		return (false);
	if (!tab)
		return (false);
	i = 1;
	while (i < nb)
	{
		if (!ft_check_int(tab[i]))
			return (false);
		i++;
	}
  i = 1;
  while (i )
    if (ft_atoi(tab[i] ))
	return (true);
}


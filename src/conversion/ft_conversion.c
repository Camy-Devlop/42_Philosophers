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

bool	ft_conversion_tab(char **tab, int nb_param, int *res)
{
	int	i;

	if (!res)
		return (ft_message(MESSAGE_PARAM, true), false);
	i = 1;
	while (i < nb_param)
	{
		res[i - 1] = ft_atoi(tab[i]);
		if (res[i - 1] <= 0)
			return (ft_message(MESSAGE_INT_MAX, true), false);
		i++;
	}
	return (true);
}

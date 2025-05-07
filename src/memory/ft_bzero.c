/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 03:32:03 by isadbaib          #+#    #+#             */
/*   Updated: 2025/05/07 04:00:15 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philosophers.h"

void	ft_bzero(void *memo, size_t size)
{
	size_t	i;

	i = 0;
	if (!memo || (long long int)size <= 0)
		return ;
	while (i < size)
	{
		*((unsigned char *)memo) = 0;
		memo++;
		i++;
	}
}

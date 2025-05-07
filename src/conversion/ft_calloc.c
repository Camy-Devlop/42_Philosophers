/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 03:18:32 by isadbaib          #+#    #+#             */
/*   Updated: 2025/05/07 03:18:34 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philosophers.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*m;

	m = NULL;
	if (((long long int)elementCount * (long long int)elementSize) < 0)
		return (NULL);
	if (INT_MAX <= (long long int)elementCount
		|| (INT_MAX <= (long long int)elementSize)
		|| ((long long int)elementCount < 0 && (long long int)elementSize < 0))
		return (NULL);
	m = malloc(elementCount * elementSize);
	if (!m)
		return (NULL);
	if (elementCount == 0 || elementSize == 0)
		return (m);
	ft_bzero(m, elementCount * elementSize);
	return (m);
}

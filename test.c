/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 20:27:34 by isadbaib          #+#    #+#             */
/*   Updated: 2025/05/20 13:03:42 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/philosophers.h"

void	*bonjour(void *args)
{
	int	i;

	i = 0;
	while (i < *(int *)args)
	{
		printf("bonjour %d\n", *(int *)args);
		sleep(2);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	t_manager	*p;

	(void)p;
	p = NULL;
	init_manager(p);
	free(p);
	return (0);
}

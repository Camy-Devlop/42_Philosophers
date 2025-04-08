/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pilosophers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 22:47:30 by isadbaib          #+#    #+#             */
/*   Updated: 2025/04/08 20:49:10 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philosophers.h"

static bool	ft_preparation(char **tab, int n)
{
	if (!ft_check(tab, n))
		return (false);
	return (true);
}

int	main(int n, char **tab)
{
	struct timeval	t;
	t_status_philo	s;

	(void)n;
	(void)tab;
	if (!ft_preparation(tab, n))
		return (-1);
	printf("retour de time of day = %d\n", gettimeofday(&t, NULL));
	printf("val sec = %ld\n", t.tv_sec);
	s = calloc(1, sizeof(enum e_status));
	s[0] = eating;
	ft_message_status(s);	
	free(s);
	return (0);
}

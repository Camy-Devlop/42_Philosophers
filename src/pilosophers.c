/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pilosophers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 22:47:30 by isadbaib          #+#    #+#             */
/*   Updated: 2025/04/16 15:32:54 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philosophers.h"
/*
static bool	ft_preparation(char **tab)
{
	if (ft_check(tab))
	{
	}
}
*/

void* myturn(void *arg)
{
	(void)arg;
	int i = 0;
	while(i < 25)
	{
		sleep(1);
		printf("%d My Turn!\n", i++);
	}
	return NULL;
}

void youturn()
{
	int i = 0;
	while(i < 30)
	{
		sleep(2);
		printf("[%d] You Turn!\n",i++);
	}
}


int	main(int n, char **tab)
{
	struct timeval	t;
	t_status_philo	s;

	(void)n;
	(void)tab;
	if (n != 6)
		return (0);
	printf("retour de time of day = %d\n", gettimeofday(&t, NULL));
	printf("val sec = %ld\n", t.tv_sec);
	s = calloc(1, sizeof(enum e_status));
	s[0] = eating;
	ft_message_status(s);	
	free(s);
	pthread_t test;
	pthread_create(&test,NULL, myturn,NULL);
	youturn();
	free(&test);
	return (0);
}

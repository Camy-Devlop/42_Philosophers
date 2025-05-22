/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 22:47:30 by isadbaib          #+#    #+#             */
/*   Updated: 2025/05/22 22:22:51 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philosophers.h"
#include <time.h>
/*
static bool	ft_preparation(char **tab)
{
	if (ft_check(tab))
	{
	}
}
*/

void	*myturn(void *arg)
{
	int	i;

	(void)arg;
	i = 0;
	while (i < 25)
	{
		sleep((int)((rand() % (15 - 3)) + 3));
		printf("%d My Turn! %d\n", i++, ((t_philo)arg)->i);
	}
	return (NULL);
}

void	youturn(void)
{
	int	i;

	i = 0;
	while (i < 30)
	{
		sleep(2);
		printf("[%d] You Turn!\n", i++);
	}
}

int	main(int n, char **tab)
{
	int		tab_int[5];
	t_philo	*p;
	int		i;

	(void)n;
	(void)tab;
	(void)tab_int;
  srand(time(NULL));
	i = 0;
		// printf("valur de timeVal %ld\n", p[0]->t.tv_sec);
		//	t_status_philo	s;
	if (n < 5 || 6 < n)
		return (ft_message(MESSAGE_NUMBRE, true), -1);
	printf("test ok\n");
	printf("%s\n", ft_check(tab, n, tab_int) ? "true" : "false");
	
	if (!ft_conversion_tab(tab, n, tab_int))
		return (ft_message("Error convertion",true), 0);
	
	while (i < n - 1)
	{
		printf("%d => %d\n", i, tab_int[i]);
		i++;
	}
	return 0;
//========================================================================	
	p = calloc(10, sizeof(t_philo));
	while (i < 10)
	{
		if (init_philo(&(p[i]), i))
			printf("philo ok %d = adress = %p\n", i + 1, &p[i]->philo);
		else
			printf("philo NOT %d\n", i + 1);
		i++;
	}
//========================================================================	
	i = 0;
	while (i < 10)
	{
		printf("%p = %d\n", &p[i]->philo, i);
		pthread_create((p[i]->philo), NULL, myturn, p[i]);
		printf("thread %d\n", i);
		i++;
	}
//========================================================================	
	printf("cree les philo fini\n");
	i = 0;
	while (i < 10)
	{
		pthread_join(*p[i]->philo, NULL);
		i++;
	}
	//  printf("retour de time of day = %d\n", gettimeofday(&t, NULL));
	//  printf("retour de time of day = %ld\n", t->tv_usec);
	//	printf("val sec = %ld\n", t.tv_sec);
	//	s = calloc(1, sizeof(enum e_status));
	//	s[0] = eating;
	//	ft_message_status(s);
	//	free(s);
	//	pthread_t test;
	//	test = NULL;
	//	pthread_create(&test, NULL, myturn, NULL);
	//	youturn();
	//	pthread_join(test ,NULL);
	//	free(test);
	//	=≈≈=≈=====================≈=≈===========≈====
	//
	//					printf("%d\n",tab_int[1]);
	return (0);
}

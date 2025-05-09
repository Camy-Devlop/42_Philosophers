/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pilosophers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 22:47:30 by isadbaib          #+#    #+#             */
/*   Updated: 2025/04/25 09:24:36 by isadbaib         ###   ########.fr       */
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

void	*myturn(void *arg)
{
	int	i;

	(void)arg;
	i = 0;
	while (i < 25)
	{
		sleep(1);
		printf("%d My Turn!\n", i++);
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
	int				tab_int[5];
	t_philo p;

  if (init(&p))
    printf("philo ok\n") ;
  else 
    printf("philo NOT\n") ;
  printf("valur de timeVal %ld\n",p->t.tv_sec);

	//	t_status_philo	s;
	if (n < 5 || 6 < n)
		return (ft_message(MESSAGE_NUMBRE, true), -1);

	printf("test ok\n");
	
  printf("%s\n", ft_check(tab, n, tab_int) ? "true" : "false");
	








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

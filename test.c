/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 20:27:34 by isadbaib          #+#    #+#             */
/*   Updated: 2025/05/18 21:58:55 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/philosophers.h"

void *bonjour(void *args)
{
	int i;

	i = 0;
	while (i < *(int*)args)
	{
		printf("bonjour %d\n",*(int*)args);
		sleep(2);
		i++;
	}
	return NULL;
}

int main()
{
	t_philo *p;
	(void)p;
	int i = 10;
	p = calloc(10, sizeof(t_philo));
	p[0] =  calloc(1,sizeof(struct s_philo));
	p[0]->philo = calloc(1,sizeof(pthread_t));
	pthread_create((p[0])->philo,NULL,bonjour,&i);
	pthread_join(*p[0]->philo, NULL);
	free(p[0]->philo);
	free(p[0]);
	free(p);



iiii

}

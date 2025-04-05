/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_message.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 12:51:08 by isadbaib          #+#    #+#             */
/*   Updated: 2025/04/05 03:24:59 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philosophers.h"

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_message(const char *s)
{
	if (!s)
		return ;
	write(1, s, ft_strlen(s));
	write(1, "\n", 1);
}

void	ft_message_status(t_status_philo p)
{
	
	if (taken_a_fork == *p)
		ft_message(TAKEN_FORK);
	if (eating == *p)
		ft_message(EATING);
	if (sleeping == *p)
		ft_message(SLEEPING);
	if (thinking == *p)
		ft_message(THINKING);
	if (dead == *p)
		ft_message(DEAD);
}

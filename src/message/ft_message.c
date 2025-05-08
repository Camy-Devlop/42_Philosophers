/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_message.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 12:51:08 by isadbaib          #+#    #+#             */
/*   Updated: 2025/04/22 21:05:50 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philosophers.h"

void	ft_message(const char *s, bool r)
{
	if (!s)
		return ;
	write(1, s, ft_strlen(s));
	if (r)
		write(1, "\n", 1);
}

void	ft_message_status(t_status_philo p)
{
	if (taken_a_fork == *p)
		ft_message(TAKEN_FORK, true);
	if (eating == *p)
		ft_message(EATING, true);
	if (sleeping == *p)
		ft_message(SLEEPING, true);
	if (thinking == *p)
		ft_message(THINKING, true);
	if (dead == *p)
		ft_message(DEAD, true);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 21:57:36 by isadbaib          #+#    #+#             */
/*   Updated: 2025/05/22 19:55:07 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philosophers.h"

bool	init_philo(t_philo *f, int i)
{
	*f = ft_calloc(1, sizeof(struct s_philo));
	if (!*f)
		return (ft_message(MESSAGE_ALLOW, true), false);
	(*f)->i = i;
	if (gettimeofday(&(*f)->t, NULL) != 0)
		return (ft_message(MESSAGE_TIMEVAL, true), false);
	return (true);
}

bool	init_manager(t_manager *m)
{
	if (!m)
		m = ft_calloc(1,sizeof(t_manager));
	if (!m)
		return (ft_message("addresse t_manager no alloed", true),false);
	*m = ft_calloc(1, sizeof(struct s_manager));
	if (!*m)
		return (ft_message(MESSAGE_MANAGER, true), false);
	(*m)->stop = false;
	return (true);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 21:57:36 by isadbaib          #+#    #+#             */
/*   Updated: 2025/05/08 21:57:46 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/philosophers.h"

bool init(t_philo *f)
{
  if (!*f)
    return (ft_message(MESSAGE_EXIST, true), false);
  *f = ft_calloc(1, sizeof(struct s_philo));
  if (!*f)
    return (ft_message(MESSAGE_ALLOW, true), false);
  return (true);
}

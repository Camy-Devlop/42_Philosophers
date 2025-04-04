/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 22:46:47 by isadbaib          #+#    #+#             */
/*   Updated: 2025/04/04 14:09:33 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include "message.h"
# include <pthread.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/time.h>
# include <unistd.h>

# define TAKEN_FORK "taken a fork"
# define EATING "eating"
# define SLEEPING "sleeping"
# define THINKING "thinking"
# define DEAD "dead"

typedef enum *e_status
{
	taken_a_fork,
	eating,
	sleeping,
	thinking,
	dead
}	t_status;

void	ft_message(const char *s);
#endif

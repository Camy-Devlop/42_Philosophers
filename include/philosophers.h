/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 22:46:47 by isadbaib          #+#    #+#             */
/*   Updated: 2025/05/20 11:04:21 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include "message.h"
# include <limits.h>
# include <pthread.h>
# include <stdbool.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/time.h>
# include <unistd.h>

# define TAKEN_FORK "taken a fork"
# define EATING "eating 🥞"
# define SLEEPING "sleeping 🛌🏿"
# define THINKING "thinking 🧠"
# define DEAD "dead ⚰️"

typedef enum e_status	*t_status_philo;

typedef enum e_status
{
	taken_a_fork,
	eating,
	sleeping,
	thinking,
	dead
}						t_status;

typedef struct s_philo	*t_philo;
typedef struct s_philo
{
	int					i;
	bool			*stop;
	struct timeval		t;
	t_status_philo		status;
	pthread_t			*philo;
	pthread_mutex_t		*m_fork_l;
	pthread_mutex_t		m_fork_r;
}						t_phi;

typedef struct s_manager
{
	bool	  stop;
	pthread team;
}	t_manager;

void					ft_message(const char *s, bool r);
void					ft_message_status(t_status_philo p);
bool					ft_check(char **tab, size_t nb, int *val_param);
size_t					ft_strlen(const char *s);
bool					ft_isdigit(char c);
// int				ft_check_atoi(const char *str);
void					ft_bzero(void *memo, size_t size);
void					*ft_calloc(size_t elementCount, size_t elementSize);
int						ft_atoi(const char *str);
bool					ft_conversion_tab(char **tab, int nb_param, int *res);
bool					init(t_philo *p, int i);
//asdsdasdl;adsal;a;l,l;asasld;
#endif

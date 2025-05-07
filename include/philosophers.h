/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 22:46:47 by isadbaib          #+#    #+#             */
/*   Updated: 2025/04/22 22:17:13 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include "message.h"
# include <pthread.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/time.h>
# include <unistd.h>
#include <stddef.h>

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

typedef struct t_phi *t_pholi;
typedef struct s_philo{
 
  pthread_mutex_t *m_fork_l;
  pthread_mutex_t m_fork_r;
  
} t_phi;

void					ft_message(const char *s);
void					ft_message_status(t_status_philo p);
bool					ft_check(char **tab, size_t nb);
size_t				ft_strlen(const char *s);
bool					ft_isdigit(char c);
//int	          ft_check_atoi(const char *str);
void	        ft_bzero(void *memo, size_t size);
void          *ft_calloc(size_t elementCount, size_t elementSize);
int	          ft_atoi(const char *str);
bool          ft_conversion_tab(char **tab, int **res);
#endif

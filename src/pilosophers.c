/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pilosophers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 22:47:30 by isadbaib          #+#    #+#             */
/*   Updated: 2025/04/04 13:44:29 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philosophers.h"

int	main(int n, char **tab)
{
	struct timeval	t;

	if (n != 5)
		return (O);
	printf("retour de time of day = %d\n",
		gettimeofday(&t, NULL));
	printf("val sec = %ld\n", t.tv_sec);
	return (0);
}

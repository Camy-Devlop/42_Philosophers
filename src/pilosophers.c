/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pilosophers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 22:47:30 by isadbaib          #+#    #+#             */
/*   Updated: 2025/04/03 13:01:26 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philosophers.h"

int main(void)
{
	//usleep, gettimeofday
	//struct timeval *restrict tv,
        //struct timezone *_Nullable restrict tz
	struct timeval t;
//	struct timezone tz;

	printf("retour de time of day = %d\n",gettimeofday(&t,NULL));
	printf("val sec = %ld\n",t.tv_sec);
//	printf("val sec = %d\n",tz.tz_minuteswest);
	return (0);
}

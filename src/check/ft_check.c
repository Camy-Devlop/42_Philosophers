/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 03:35:29 by isadbaib          #+#    #+#             */
/*   Updated: 2025/04/08 20:55:48 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philosophers.h"

bool	ft_check(char **tab, int n)
{
	
	if (n != 6)
		return (ft_message(MESSAGE_0, false), false);


	(void)tab;
	return (true);
	
}

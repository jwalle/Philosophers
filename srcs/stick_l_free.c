/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stick_l_free.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/04 18:28:17 by cdeniau           #+#    #+#             */
/*   Updated: 2016/06/04 18:28:50 by cdeniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

int					g_stick_l_free(t_philo *p)
{
	if (g_sticks[p->id] != S_FREE)
		return (0);
	return (1);
}
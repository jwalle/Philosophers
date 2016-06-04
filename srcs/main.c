/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 13:37:52 by cdeniau           #+#    #+#             */
/*   Updated: 2016/06/04 18:46:41 by cdeniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

int					g_sticks[7] = {1, 1, 1, 1, 1, 1, 1};

int					main(void)
{
	GLFWwindow		*win;
	t_env			*e;
	t_philo			*p;

	e = (t_env *)malloc(sizeof(t_env));
	init_env(e);
	p = table_allocation();
	win = initwindow(WIDTH, HEIGHT);
	if (win)
		display(win, e, p);
	glfwDestroyWindow(win);
	return (0);
}

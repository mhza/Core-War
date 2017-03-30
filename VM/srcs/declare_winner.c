/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_e.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <ewallner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 14:16:11 by ewallner          #+#    #+#             */
/*   Updated: 2017/03/19 18:37:40 by nsabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vm.h"

/*
** Have one option with bonus, and one without
*/

void ft_declare_winner(t_env *e)
{
	if(e->bonus)
	{
		attron(COLOR_PAIR(8));
		printw("The winner is: Player %s\n", e->player[e->winner].name);
		attroff(COLOR_PAIR(8));
		refresh();
		getch();
		endwin();
	}
	else
	{
		if(e->dump)
			ft_print_dump_init(e);
		ft_printf("Contestant %d, \"%s\", has won !\n", e->player[e->winner].nbr, e->player[e->winner].name);
	}
}

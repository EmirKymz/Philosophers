/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:23:51 by ekaymaz           #+#    #+#             */
/*   Updated: 2022/11/28 16:23:53 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philosophers_bonus.h"

int	main(int argc, char **argv)
{
	t_simulation	sim;

	if (argc != 5 && argc != 6)
		print_error_b("Eksik veya fazla arguman");
	init_all_b(&sim, argv);
	ft_simulation_b(&sim);
}

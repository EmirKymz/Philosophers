/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:36:34 by ekaymaz           #+#    #+#             */
/*   Updated: 2022/11/28 16:36:35 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char **argv)
{
	t_data	data;

	if (check_args(argc, argv) == ERROR)
		philo_error("\"CHECK_ARGS(ARGC, ARGV)\" RETURNED_ERROR", ARGS_ERROR);
	start_philo(argc, argv, &data);
	end_philo(&data);
	return (0);
}

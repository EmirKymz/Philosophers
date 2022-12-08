/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:36:29 by ekaymaz           #+#    #+#             */
/*   Updated: 2022/11/28 16:36:30 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	end_philo(t_data *data)
{
	int	i;

	i = -1;
	pthread_mutex_destroy(&data->write);
	while (++i < data->n_philos)
		pthread_mutex_destroy(&data->fork[i]);
	free(data->fork);
	free(data->philo);
}

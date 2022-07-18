/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dinner_start.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadwa <fadwa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 05:32:17 by fadwa             #+#    #+#             */
/*   Updated: 2022/07/18 05:47:14 by fadwa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	start_dinner(t_philo *philo)
{
	int i;
	i=0;
	philo->setup_philo->start_time=get_time();
	//start timefor every philo 1by1;
	while(i<philo->setup_philo->n_philos)
	
}
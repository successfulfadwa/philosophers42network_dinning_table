/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dinner_start.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadwa <fadwa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 05:32:17 by fadwa             #+#    #+#             */
/*   Updated: 2022/07/18 07:41:36 by fadwa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
void *only_one(t_philo *philo)
{
	//only_one_fork_situation
	pthread_mutex_lock(&philo->setup_philo->forks[philo->left_fork])
	print_event(philo,"has taken a fork");
	//once
	philo->setup_philo->is_died=1;
	return(NULL);
}
void *routine(void *ptr)
{
	t_philo *philo;
	philo = (t_philo*)ptr;
	if(philo->setup_philo->n_philos==1)
	return(only_one(philo));
}

void	start_dinner(t_philo *philo)
{
	int i;
	i=0;
	philo->setup_philo->start_time=get_time();
	//start timefor every philo 1by1; 
	while(i<philo->setup_philo->n_philos)
	{
		pthread_create(&philo[i].thread,NULL,&routine,&philo[i]);
		i++;
	}
	
}
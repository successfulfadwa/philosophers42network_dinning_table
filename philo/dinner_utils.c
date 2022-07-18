/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dinner_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadwa <fadwa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 04:19:45 by fadwa             #+#    #+#             */
/*   Updated: 2022/07/18 07:37:44 by fadwa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
void	print_event(t_philo *philo , char *action)
{
	long current_time;
	current_time=get_time()-philo->setup_philo -> start_time;
	//start time of dinner -thismoment --->current time
	pthread_mutex_lock(&philo->steup_philo ->print_locker);
	//stopprint so hta other functionmateal print
	if(!philo->setup_philo->is_died)
			printf("%5ld %3d %s\n", current_time, philo->philo_id, action);
	pthread_mutex_unlock(&philo->setup_philo->print_locker);


}

	

long get_time(void)
{
	struct timeval time;
	gettimeofday(&time ,NULL);
	//transfer time of thismoment since 1970 somthing to milisecond.
	return((time.tv_sec*1000)+(time.tv_usec/1000));
}
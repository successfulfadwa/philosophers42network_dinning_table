/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dinner_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadwa <fadwa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 04:19:45 by fadwa             #+#    #+#             */
/*   Updated: 2022/07/18 04:46:32 by fadwa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

long get_time(void)
{
	struct timeval time;
	gettimeofday(&time ,NULL);
	//transfer time of thismoment since 1970 somthing to milisecond.
	return((time.tv_sec*1000)+(time.tv_usec/1000));
}
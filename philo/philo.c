/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadwa <fadwa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 03:26:30 by fadwa             #+#    #+#             */
/*   Updated: 2022/07/16 06:00:07 by fadwa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
void init_setup(t_setup *setup,int argc ,char **argv)
{
	setup->n_philos = ft_atoi(argv[1]);
	setup->time_to_die =ft_atoi(argv[2]);
	setup->time_to_eat =ft_atoi(argv[3]);
	setup->time_to_sleep =ft_atoi(argv[4]);
	setup->time_to_eat =0;
	if (argc>5)
		setup->times_to_eat =0;

}
int main(int argc , char *argv[])
{
	t_setup setup;
	if (argc <5 || argc >6)
	{
		printf("Invalid syntax!\n");
		exit(1);
	}
	printf("hey");
	init_setup(&setup,argc,argv);
}
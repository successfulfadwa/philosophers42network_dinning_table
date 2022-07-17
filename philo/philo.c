/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadwa <fadwa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 03:26:30 by fadwa             #+#    #+#             */
/*   Updated: 2022/07/17 02:16:47 by fadwa            ###   ########.fr       */
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
void	validation(int argc, char *argv[])
{
	int	i;
	int	j;

	while (0 < argc)
	{
		argc--;
		//printf("argcss%d",argc);
		i = 1;
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				if (!ft_isdigit(argv[i][j]) || ft_atol(argv[i]) > MAX_INT
					|| ft_atol(argv[i]) <= 0)
				{
					printf("Error: argv[%d] is not a valid input.\n", i);
					exit(1);//argcss5argcss4argcss3argcss2argcss1argcss0
				}
				j++;
			}
			i++;
		}
	}
}
int main(int argc , char *argv[])
{
	t_setup setup;
	if (argc <5 || argc >6)
	{
		printf("Invalid syntax!\n");
		printf("Error: Invalid number of arguments.\n");
		exit(1);
	}
	printf("hey");
	validation(argc,argv);
	init_setup(&setup,argc,argv);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadwa <fadwa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 03:26:30 by fadwa             #+#    #+#             */
/*   Updated: 2022/07/18 05:51:02 by fadwa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

t_philo *init_philo(t_setup *setup)
{
	int		i;
	t_philo *philo;
	
	i = 0;
	philo = malloc (sizeof(t_philo) * setup-> n_philos);
	while (i < setup->n_philos)
	{
	philo[i].philo_id=i+1;
	philo[i].last_meal=get_time();
	philo[i].n_meals=0;
	philo[i].left_fork=i;
	philo[i].right_fork=i+1;
	philo[i].setup_philo=setup;
	pthread_mutex_init(&setup->forks[i],NULL);
	i++;
	}
	//second round l philosophers reset rightfork to 0 sophilo number 1 could take fork 1 
	//in case shi philos on of them stop at midlle we should reset  forsecround.
	i--;
	philo[i].right_fork =0;
	return(philo);


}

void init_setup(t_setup *setup,int argc ,char **argv)
{
	setup->n_philos = ft_atoi(argv[1]);
	setup->time_to_die =ft_atoi(argv[2]);
	setup->time_to_eat =ft_atoi(argv[3]);
	setup->time_to_sleep =ft_atoi(argv[4]);
	setup->time_to_eat =0;
	if (argc>5)
		setup->times_to_eat =0;
	setup->is_died=0;
	setup->meals=0;
	setup->forks =malloc(sizeof(pthread_mutex_t)* setup->n_philos);
	//allocate mutex size *philos nb  to be used by forks
	//cuz they if not they will all share same data and causesome data rces

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
	t_philo *philo;
	if (argc <5 || argc >6)
	{
		printf("Invalid syntax!\n");
		printf("Error: Invalid number of arguments.\n");
		exit(1);
	}
	printf("hey");
	validation(argc,argv);
	init_setup(&setup,argc,argv);
	philo = init_philo(&setup);
	start_dinner(philo);
	//printf("%ld",philo->last_meal);
	return(0);
}
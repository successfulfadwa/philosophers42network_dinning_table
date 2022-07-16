#ifndef PHILO_H
# define PHILO_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <pthread.h>
# include <sys/time.h>
# include "libft/libft.h"
# include "getnext_line/get_next_line.h"

# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef struct s_philo
{
	int		philo_id;
	int		n_meals;
	long 	last_meal;
	int	 	left_fork;
	int		right_fork;

}	t_philo;

typedef struct s_setup
{
	int n_philos;
	int time_to_die;
	int	time_to_eat;
	int	time_to_sleep;
	int	times_to_eat;
}	t_setup;

#endif
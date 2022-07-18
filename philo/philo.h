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
typedef struct s_setup
{
	int				meals;
	pthread_mutex_t	*forks;
	int				is_died;
	int				n_philos;
	long			start_time;
	int				time_to_die;
	int				time_to_eat;
	int				times_to_eat;
	pthread_mutex_t	print_locker;
	int				time_to_sleep;
}	t_setup;

typedef struct s_philo
{
	pthread_t	thread;
	int		philo_id;
	int		n_meals;
	long 	last_meal;
	int	 	left_fork;
	int		right_fork;
	t_setup *setup_philo;//setub_own_philo
	//setup for every philosophers

}	t_philo;

void	validation(int argc, char *argv[]);
void	init_setup(t_setup *setup,int argc ,char **argv);
long	get_time(void);
void	print_event(t_philo *philo , char *action);
int		ft_isdigit(int i);
long	ft_atol(const char *str);
int		ft_atoi(const char *str);

#endif
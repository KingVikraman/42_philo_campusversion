/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:04:09 by rvikrama          #+#    #+#             */
/*   Updated: 2025/03/03 19:30:17 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"



// ✅ Static function to check if a string contains only digits
static bool	ft_isdigit(char	*str)
{
	int i = 0;

	if (!str[i])  // Handle empty strings
		return false;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return false;
		i++;
	}
	return true;
}

// ✅ Fixed `atoi` function (renamed to `ft_atoi`)
static int ft_atoi(char *str)
{
	int i = 0;
	unsigned long nb = 0;

	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		if (nb > INT_MAX)  // Handle overflow
			return -1;
		i++;
	}
	return (int)nb;
}

// ✅ Function to validate input
bool is_valid_check(char **argv)
{
	int i = 0;
	int nb;

 	while (argv[++i])
	{
		if (!ft_isdigit(argv[i]))
			return (printf("Not a number: %s\n", argv[i]), false);

		//printf("input>> %s\n", argv[i]);
		nb = ft_atoi(argv[i]);
		//printf("output>> %d\n", nb);

		if (i == 1 && (nb <= 0 || nb > MAX_PHILOS))
			return (printf("Invalid number of philos: %d\n", nb), false);

		if (i != 1 && nb == -1)
			return (printf("Number is a negative value or overflowed: %d\n", nb), false);

	}
	return true;
}

// ✅ Fixed `main` function
int main(int argc, char **argv)
{
	if (argc != 5 && argc != 6)
		return(printf("%s", STR_ERR_VALID), 1);
	if (!is_valid_check(argv))
		return (1);
	printf("OK\n");
}

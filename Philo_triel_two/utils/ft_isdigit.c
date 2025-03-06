/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:18:21 by rvikrama          #+#    #+#             */
/*   Updated: 2025/03/03 19:43:39 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"


static bool	ft_isdigit(char	*str)
{
	int i = 0;

	if (!str[i])  
		return false;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return false;
		i++;
	}
	return true;
}

int main()
{
    // Test cases
    char *test_cases[] = {
        "12345",       // Valid digits
        "00123",       // Leading zeros
        "",            // Empty string
        "123a45",      // Contains a letter
        " 123",        // Leading space
        "123 ",        // Trailing space
        "12 34",       // Space in between
        "-123",        // Negative number
        "+123",        // Positive sign
        "12345678901234567890", // Long number
        "123\n45",     // Newline in the string
        "0",           // Single digit
        "2147483647",  // INT_MAX (valid digits)
        "-2147483648", // INT_MIN (negative, should fail)
    };

    int num_cases = sizeof(test_cases) / sizeof(test_cases[0]);
    for (int i = 0; i < num_cases; i++)
    {
        printf("Test case: '%s' => %s\n", test_cases[i], ft_isdigit(test_cases[i]) ? "Valid" : "Invalid");
    }

    return 0;
}


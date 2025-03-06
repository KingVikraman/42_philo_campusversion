// int is_number(char *str)
// {
// 	int i;

// 	i = 0;
// 	if (!str[i])
// 		return (0);
// 	if (str[i] == '+')
// 		i++;
// 	while (str[i])
// 	{
// 		if (str[i] < '0' || str[i] > '9')
// 			return (0);
// 		i++;
// 	}
// 	return (1);
// }


/* check for INT_MAX and minimum value, 
*	~one declare at  the header trhe stdlib and then use the INT_MAX 
*	constant  to insidacte the int max and set the minimum at 60.
*	~ before this step you should convert the string to integer with 
*	the fucntion called atoi. But unsually yiou can also one shot inistalize
*	to you table while shifting from intiger to atoi.
*	~*/
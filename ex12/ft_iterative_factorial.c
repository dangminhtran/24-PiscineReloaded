/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangtran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:23:50 by dangtran          #+#    #+#             */
/*   Updated: 2024/11/04 16:10:00 by dangtran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	if (nb < 0)
		return (!nb);
	i = 1;
	res = 1;
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}
/*#include <stdio.h>
int main()
{
	int nb = 5;
	printf("RESULT : %d\n", ft_iterative_factorial(nb));
	return (0);
}*/

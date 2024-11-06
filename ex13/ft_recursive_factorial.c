/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangtran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:33:52 by dangtran          #+#    #+#             */
/*   Updated: 2024/11/04 16:10:43 by dangtran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 1)
		return (!nb);
	nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}
/*
#include <stdio.h>
int main()
{
	int nb = 5;
	printf("RESULT : %d\n", ft_recursive_factorial(nb));
	return (0);
}*/

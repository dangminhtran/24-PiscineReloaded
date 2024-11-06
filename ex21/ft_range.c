/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangtran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:22:11 by dangtran          #+#    #+#             */
/*   Updated: 2024/11/04 16:18:45 by dangtran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*dest;

	dest = NULL;
	if (min >= max)
		return (0);
	dest = (int *)malloc((max - min) * sizeof(int));
	if (!dest)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	int	*dest;
	int	min;
	int	max;
	int	i;

	min = 2;
	max = 2;
	dest = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("RESULT : %d\n", dest[i]);
		i++;
	}
	return (0);
}*/

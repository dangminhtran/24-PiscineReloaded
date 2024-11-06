/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangtran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:53:25 by dangtran          #+#    #+#             */
/*   Updated: 2024/11/04 16:13:05 by dangtran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char v1[10] = "accd";
	char v2[10] = "abcd";

	printf("STRCMP : %d\n", strcmp(v1, v2));
	printf("FT_STRCMP : %d\n", ft_strcmp(v1, v2));
	return (0);
}*/

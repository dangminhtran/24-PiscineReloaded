/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangtran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:15:19 by dangtran          #+#    #+#             */
/*   Updated: 2024/11/04 16:17:07 by dangtran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = NULL;
	dest = (char *)malloc(ft_strlen(src) * sizeof(char));
	if (dest == NULL)
		return (0);
	ft_strcpy(dest, src);
	return (dest);
}
/*
#include <stdio.h>
int	main ()
{
	char src[10] = "hello";
	printf("RESULT : %s\n", ft_strdup(src));
	return (0);
}*/

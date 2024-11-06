/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangtran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:56:25 by dangtran          #+#    #+#             */
/*   Updated: 2024/11/06 19:00:04 by dangtran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

//void	ft_putchar(char c)
//{
//	write(1, &c, 1);
//}
void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		ft_putchar(c);
		c++;
	}
}
/*
int	main(void)
{
 	ft_print_alphabet();
 	return (0);
}*/

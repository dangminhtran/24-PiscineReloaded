/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangtran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:04:47 by dangtran          #+#    #+#             */
/*   Updated: 2024/11/05 15:21:54 by dangtran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

//void	ft_putchar(char c)
//{
//	write(1, &c, 1);
//}
void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	c;

	c = '0';
	while (c <= '9')
	{
		ft_putchar(c);
		c++;
	}
}

//int	main(void)
//{
// 	ft_print_numbers();
// 	return (0);
//}

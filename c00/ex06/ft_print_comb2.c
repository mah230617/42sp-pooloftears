/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-e <msilva-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:26:27 by msilva-e          #+#    #+#             */
/*   Updated: 2023/03/12 14:16:55 by msilva-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	to_print(int x, int y, int a, int b);
void	function_while(int x, int y, int a, int b);

void	ft_print_comb2(void)
{
	int	x;
	int	y;
	int	a;
	int	b;

	x = '0';
	y = '1';
	a = '0';
	b = '0';
	function_while(a, b, x, y);
}

void	function_while(int a, int b, int x, int y)
{
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (x <= '9')
			{
				while (y <= '9')
				{
					to_print(x, y, a, b);
					y++;
				}
				y = '0';
				x++;
			}
			x = '0';
			b++;
		}
		b = '0';
		a++;
	}
}

void	to_print(int x, int y, int a, int b)
{
	if (a <= x && b < y)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &x, 1);
		write(1, &y, 1);
		if (!(a == '9' && b == '8' && x == '9' && y == '9'))
			write(1, &", ", 2);
	}
}

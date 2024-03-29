/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-e <msilva-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:09:01 by msilva-e          #+#    #+#             */
/*   Updated: 2023/03/18 20:30:07 by msilva-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	letter;

	letter = 0;
	while (str[letter])
	{
		write (1, &str[letter], 1);
		letter++;
	}
}

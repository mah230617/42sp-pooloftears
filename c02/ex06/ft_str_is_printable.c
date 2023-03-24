/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-e <msilva-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:01:13 by msilva-e          #+#    #+#             */
/*   Updated: 2023/03/22 10:36:49 by msilva-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	other;
	int	printable;

	other = 1;
	printable = 0;
	while (str[printable])
	{
		if (str[printable] < 32 || str[printable] > 126)
		other = 0;
		printable++;
	}
	return (other);
}

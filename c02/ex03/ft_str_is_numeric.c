/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-e <msilva-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 07:21:43 by msilva-e          #+#    #+#             */
/*   Updated: 2023/03/22 10:36:02 by msilva-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	only_digit;
	int	other;

	only_digit = 1;
	other = 0;
	while (str[other])
	{
		if (!(str[other] >= '0' && str[other] <= '9'))
		{
			only_digit = 0;
		}
		other++;
	}
	return (only_digit);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-e <msilva-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:02:53 by msilva-e          #+#    #+#             */
/*   Updated: 2023/03/22 10:36:22 by msilva-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	other;
	int	alphabetical;

	other = 1;
	alphabetical = 0;
	while (str[alphabetical])
	{
		if (str[alphabetical] < 'a' || str[alphabetical] > 'z')
		other = 0;
		alphabetical++;
	}
	return (other);
}

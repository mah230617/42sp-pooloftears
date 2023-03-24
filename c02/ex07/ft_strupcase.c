/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-e <msilva-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:42:33 by msilva-e          #+#    #+#             */
/*   Updated: 2023/03/22 10:29:58 by msilva-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		if (str[len] >= 'a' && str[len] <= 'z')
		{
			str[len] -= 32;
		}
		len++;
	}
	return (str);
}

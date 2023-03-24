/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-e <msilva-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:23:41 by msilva-e          #+#    #+#             */
/*   Updated: 2023/03/22 10:30:52 by msilva-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		if (str[len] >= 'A' && str[len] <= 'Z')
		{
			str[len] += 32;
		}
		len++;
	}
	return (str);
}

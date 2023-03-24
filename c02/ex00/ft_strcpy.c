/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-e <msilva-e@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:25:45 by msilva-e          #+#    #+#             */
/*   Updated: 2023/03/22 15:53:21 by msilva-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	len;

	len = 0;
	while (src[len])
	{
	dest[len] = src[len];
	len++;
	}
	dest[len] = 0;
	return (dest);
}

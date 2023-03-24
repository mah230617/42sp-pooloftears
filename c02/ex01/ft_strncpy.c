/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-e <msilva-e@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:42:33 by msilva-e          #+#    #+#             */
/*   Updated: 2023/03/22 16:22:12 by msilva-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	len;

	len = 0;
	while (src[len] && len < n)
	{
	dest[len] = src[len];
	len++;
	}
	while (len < n)
	{
	dest[len] = '\0';
	len++;
	}
	return (dest);
}

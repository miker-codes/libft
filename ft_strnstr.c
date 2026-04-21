/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ra <mruiz-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:44:31 by mruiz-ra          #+#    #+#             */
/*   Updated: 2026/04/21 13:59:26 by mruiz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big,	const char *little, size_t len)
{
	size_t	contador;
	size_t	contador2;

	if (little[0] == '\0')
		return (big);
	contador = 0;
	contador2 = 0;
	while (big[contador] != '\0' && len > 0)
	{
		while (big[contador] == little[contador2]
			&& len > 0 && little[contador2] != '\0')
		{
			contador++;
			contador2++;
			len--;
		}
		if (little[contador2] == '\0')
			return (&big[contador - contador2]);
		contador2 = 0;
		contador++;
		len--;
	}
	return (NULL);
}

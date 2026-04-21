/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ra <mruiz-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 11:15:50 by mruiz-ra          #+#    #+#             */
/*   Updated: 2026/04/21 11:35:33 by mruiz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	contador;

	contador = 0;
	while (s[contador] != '\0')
	{
		if (s[contador] == c)
			return ((char *)&s[contador]);
		contador++;
	}
	if (c == '\0')
		return ((char *)&s[contador]);
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: metyasar <metyasar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 13:06:03 by metyasar          #+#    #+#             */
/*   Updated: 2023/07/12 23:38:44 by metyasar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*a;

	if (!s1 || !s2)
		return (NULL);
	a = malloc(sizeof(char) * (ft_strlen(s1)) + (ft_strlen(s2) + 1));
	if (!a)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		a[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		a[i] = s2[j];
		i++;
		j++;
	}
	a[i] = '\0';
	return (a);
}

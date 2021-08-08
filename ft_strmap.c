/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mframbou <mframbou@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 16:19:34 by mframbou          #+#    #+#             */
/*   Updated: 2021/08/06 16:25:42 by mframbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*fresh;
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	fresh = (char *) malloc (sizeof (char) * (i + 1));
	if (fresh)
	{
		fresh[i] = '\0';
		while (i-- > 0)
			fresh[i] = (f)(s[i]);
	}
	return (fresh);
}

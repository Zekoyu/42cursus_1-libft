/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mframbou <mframbou@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 15:07:19 by mframbou          #+#    #+#             */
/*   Updated: 2021/08/06 16:12:27 by mframbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char	*res;
	size_t	i;

	res = (char *) malloc(size);
	if (res)
	{
		i = 0;
		while (i < size)
		{
			res[i] = 0;
			i++;
		}
	}
	return ((void *) res);
}

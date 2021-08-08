/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mframbou <mframbou@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 22:23:33 by mframbou          #+#    #+#             */
/*   Updated: 2021/08/05 19:19:51 by mframbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*char_dest;
	char	*char_src;

	char_dest = (char *) dest;
	char_src = (char *) src;
	i = 0;
	while (i < n)
	{
		char_dest[i] = char_src[i];
		if ((char) char_src[i] == (char) c)
			return (&(char_dest[i + 1]));
		i++;
	}
	return (NULL);
}

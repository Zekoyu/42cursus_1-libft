/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mframbou <mframbou@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 15:14:29 by mframbou          #+#    #+#             */
/*   Updated: 2021/08/08 22:49:30 by mframbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

// If one of 2 args == 0, then just return malloc(0)
// Returning NULL didn't passed the hardcore test, so return
// the other possible value (source: man)
void	*ft_calloc(size_t nmemb, size_t size)
{
	return (ft_memalloc(nmemb * size));
}

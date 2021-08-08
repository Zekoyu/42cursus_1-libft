/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mframbou <mframbou@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 19:40:39 by mframbou          #+#    #+#             */
/*   Updated: 2021/08/05 22:09:32 by mframbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

// Only go 1 by one instead of checking the whole length
// ("TESTESTTT", "TESTT")
// TESTESTTT
//     ^
// Missed the substring, need to go one by one each time
char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;

	if (needle[0] == '\0')
		return ((char *) haystack);
	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i + j] != '\0')
			j++;
		if (needle[j] == '\0')
			return (&((char *) haystack)[i]);
		i++;
	}
	return (NULL);
}

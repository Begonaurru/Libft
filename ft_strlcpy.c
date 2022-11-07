/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Beurruel <beurruel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:55:42 by Beurruel          #+#    #+#             */
/*   Updated: 2022/11/03 17:23:28 by Beurruel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	if (dstsize == 0)
		return (ft_strlen(src));
	if (dstsize > ft_strlen(src))
	{
		ft_bzero(dst, ft_strlen(src));
		ft_memmove(dst, src, ft_strlen(src));
		dst[ft_strlen(src)] = '\0';
	}
	else
	{
		ft_bzero(dst, dstsize);
		ft_memmove(dst, src, dstsize);
		dst[dstsize -1] = '\0';
	}
	return (ft_strlen(src));
}

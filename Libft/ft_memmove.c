/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Beurruel <beurruel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:45:04 by Beurruel          #+#    #+#             */
/*   Updated: 2022/11/03 11:19:38 by Beurruel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*temp_src;
	unsigned char	*temp_dst;

	if (!dst && !src)
		return (NULL);
	temp_src = (unsigned char *)src;
	temp_dst = (unsigned char *)dst;
	if (dst < src)
		return (ft_memcpy(temp_dst, temp_src, len));
	while (len--)
		temp_dst[len] = temp_src[len];
	return (dst);
}

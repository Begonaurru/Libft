/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Beurruel <beurruel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:25:01 by Beurruel          #+#    #+#             */
/*   Updated: 2022/11/03 13:28:13 by Beurruel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*b1;
	unsigned char	*b2;
	size_t			i;

	if (n == 0)
		return (0);
	b1 = (unsigned char *)s1;
	b2 = (unsigned char *)s2;
	i = 0;
	while ((i < n - 1) && (*(b1 + i) == *(b2 + i)))
		i++;
	return (*(b1 + i) - *(b2 + i));
}

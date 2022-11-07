/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Beurruel <beurruel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:36:11 by Beurruel          #+#    #+#             */
/*   Updated: 2022/11/04 14:49:29 by Beurruel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	size;

	size = ft_strlen(s1);
	str = (char *) ft_calloc(size + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	return ((char *) ft_memmove(str, s1, size));
}

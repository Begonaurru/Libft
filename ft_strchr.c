/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Beurruel <beurruel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:43:05 by Beurruel          #+#    #+#             */
/*   Updated: 2022/11/02 13:01:29 by Beurruel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && ((unsigned char)c) != *s)
			s++;
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}

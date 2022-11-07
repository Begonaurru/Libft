/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Beurruel <beurruel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 20:54:27 by Beurruel          #+#    #+#             */
/*   Updated: 2022/10/18 20:55:02 by Beurruel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const	char *str)

{
	size_t	tam;

	tam = 0;
	while (*str++)
			tam++;
	return (tam);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Beurruel <beurruel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:37:24 by Beurruel          #+#    #+#             */
/*   Updated: 2022/11/03 16:25:49 by Beurruel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** Coding of non-standard function putendl().
** Parameters: const string
** Side effect: writes the string argument to standard out, followed by a
** newline
** Return value: none
** If s is NULL, ft_putstr will do nothing (see ft_putstr which checks for if
** the pointer passed to it is nul), but ft_putchar() will put the newline.
*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Beurruel <beurruel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:11:03 by Beurruel          #+#    #+#             */
/*   Updated: 2022/10/23 14:02:46 by Beurruel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (*s)
	{
		write (fd, s, ft_strlen(s));
		s++;
	}
}
/*int main(void)
{
	char	*gacela;
	int		fd;

	gacela = "hola";
	fd = 1;
	ft_putstr_fd(gacela, fd);
	return (0);	
}*/

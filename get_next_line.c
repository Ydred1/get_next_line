/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmillier <nmillier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:14:02 by nmillier          #+#    #+#             */
/*   Updated: 2023/11/09 15:54:02 by nmillier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*line;
	int			flag;
	int			len;
	size_t		BUFFER_SIZE;
	static int	offset;

	if (!fd)
		return (NULL);
	BUFFER_SIZE = 42;
	offset = 0;
	flag = 0;
	while (!flag)
	{
		len += read(fd)
	}
	return (line);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmillier <nmillier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:14:02 by nmillier          #+#    #+#             */
/*   Updated: 2024/03/07 14:45:00 by nmillier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>

char	*get_next_line(int fd)
{
	char	*buf;
	int		len;

	buf = malloc(BUFFER_SIZE * sizeof(char));
	if (!buf)
		return (NULL);
	len = read(fd, buf, BUFFER_SIZE);
	return (buf);
}
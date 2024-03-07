/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmillier <nmillier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:12:18 by nmillier          #+#    #+#             */
/*   Updated: 2024/03/07 15:02:15 by nmillier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main()
{
	int	filedescriptor;

	filedescriptor = open("message.txt", O_RDONLY);
	printf("%s\n", get_next_line(filedescriptor));
	printf("%s\n", get_next_line(filedescriptor));
	printf("%s\n", get_next_line(filedescriptor));
	printf("%s\n", get_next_line(filedescriptor));
	printf("%s\n", get_next_line(filedescriptor));
	printf("%s\n", get_next_line(filedescriptor));
	printf("%s\n", get_next_line(filedescriptor));
	printf("%s\n", get_next_line(filedescriptor));

	return (0);
}
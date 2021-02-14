/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 17:15:20 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/02/11 09:37:35 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
	int fd;
	int r;
	char *line = 0;
	int i = 0;

	fd = 0;
	fd = open("alternate_line_nl_no_nl.txt", O_RDONLY);
	r = 1;
	while (r == 1)
	{
		r = get_next_line(fd,  &line);
		printf("%s\n", line);
		i++;
	}
	printf("\n\nFINAL\n\n");
	close(fd);
	system("leaks a.out");
	return (0);
}

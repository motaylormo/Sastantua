/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaylor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 17:28:18 by mtaylor           #+#    #+#             */
/*   Updated: 2019/07/13 17:28:20 by mtaylor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	sastantua(int size);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	if (argc > 1)
		sastantua(atoi(argv[1]));
	else
	{
		for (int i = 0; i <= 7; ++i)
		{
			printf("\nsastantua(%d);\n", i);
			sastantua(i);
		}
	}
	return (0);
}

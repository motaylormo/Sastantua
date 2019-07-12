/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaylor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 09:28:15 by mtaylor           #+#    #+#             */
/*   Updated: 2019/07/12 09:28:16 by mtaylor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define ODD_NUM(n)	(n % 2 == 1)

/*
**	[ += 1, every 2 tiers. 2 for tier 2.]
**	For even-number tiers, the growth is 1 + nth / 2
**		(ex. tier 2, growth 2)
**	For odd-number tiers, the growth is the same as on the prev tier
**		(ex. tier 3, growth 2)
*/
#define TIER_GROWTH(n)	(1 + ((!ODD_NUM(n)) ? (n) / 2 : ((n) - 1) / 2))

/*
**	[ += 2, every 2 tiers. 1 for tier 1.]
**	If the door is on an odd-number tier, the door is the size of the nth
**		(ex. tier 3, 3x3 door)
**	On an even-numbered tier, the door is the same as on the prev tier
**		(ex. tier 4, 3x3 door)
*/
#define DOOR_SIZE(n)	((ODD_NUM(nth)) ? nth : (nth) - 1)

/*
**	Tier 1 has 3 rows, tier 2 has 4, etc.
*/
#define TIER_ROWS(n)	(n + 2)

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_repeatchar(char c, int i)
{
	while (i-- > 0)
		ft_putchar(c);
}

static int	door_row(int width, int door, int rows)
{
	if (rows < door)
	{
		ft_repeatchar('*', (width - door) / 2);
		if ((door >= 5) && (rows == door / 2))
		{
			ft_repeatchar('|', door - 2);
			ft_putchar('$');
			ft_putchar('|');
		}
		else
			ft_repeatchar('|', door);
		ft_repeatchar('*', (width - door) / 2);
		return (1);
	}
	return (0);
}

static int	print_tier(int last, int nth, int width, int indent)
{
	int	rows;

	rows = TIER_ROWS(nth);
	while (rows--)
	{
		ft_repeatchar(' ', indent + rows);
		ft_putchar('/');
		if (last == 1 && door_row(width, DOOR_SIZE(nth), rows))
			;
		else
			ft_repeatchar('*', width);
		ft_putchar('\\');
		ft_putchar('\n');
		width += 2;
	}
	return (width + (TIER_GROWTH(nth + 1) * 2));
}

static int	recurse(int last, int tier, int indent)
{
	int	width;

	if (tier == 1)
		return (print_tier(last, tier, 1, indent));
	else if (tier > 1)
	{
		width = recurse(0, tier - 1,
							indent + TIER_GROWTH(tier) + TIER_ROWS(tier));
		return (print_tier(last, tier, width, indent));
	}
	return (0);
}

void		sastantua(int size)
{
	recurse(1, size, 0);
}


#include <stdio.h>
int		main(void)
{
	for (int i = 0; i <= 7; ++i)
	{
		printf("\nsastantua(%d);\n", i);
		sastantua(i);
	}
	return (0);
}

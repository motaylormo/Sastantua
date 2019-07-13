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

static int	print_tier(int last, int nth, int width, int total_width)
{
	int	rows;
	int door;

	door = DOOR_SIZE(nth);
	rows = TIER_ROWS(nth);
	while (rows--)
	{
		ft_repeatchar(' ', (total_width - width) / 2);
		ft_putchar('/');
		if (last == 1 && rows < door)
		{
			ft_repeatchar('*', (width - door) / 2);
			ft_repeatchar('|', door - 2);
			ft_putchar(((door >= 5) && (rows == door / 2)) ? '$' : '|');
			ft_putchar('|');
			ft_repeatchar('*', (width - door) / 2);
		}
		else
			ft_repeatchar('*', width);
		ft_putchar('\\');
		ft_putchar('\n');
		width += 2;
	}
	return (width);
}

static int	get_total_width(int tiers)
{
	int width;

	width = 0;
	while (tiers > 0)
	{
		width += TIER_ROWS(tiers) * 2;
		if (tiers - 1 > 0)
			width += TIER_GROWTH(tiers) * 2;
		tiers--;
	}
	return (width);
}

void		sastantua(int tiers)
{
	int i;
	int width;
	int	total_width;

	total_width = get_total_width(tiers);
	width = 1;
	i = 0;
	while (++i <= tiers)
	{
		width = print_tier(((i == tiers)), i, width, total_width);
		if (i + 1 <= tiers)
			width += TIER_GROWTH(i + 1) * 2;
	}
}


#include <stdio.h>
int		main(void)
{
	for (int i = 0; i <= 6; ++i)
	{
		printf("\nsastantua(%d);\n", i);
		sastantua(i);
	}
	return (0);
}

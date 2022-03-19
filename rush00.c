/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarras <frcarras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 14:24:59 by alflopez          #+#    #+#             */
/*   Updated: 2022/03/19 19:31:02 by frcarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_top(int x)
{
	if (x-- >= 2)
	{
		ft_putchar('/');
		while (x-- >= 2)
			ft_putchar('*');
		if (x == 0)
			ft_putchar('\\');
		ft_putchar('\n');
	}
}

void	print_vertical(int x, int y)
{
	int	i;

	if (x == 1)
	{
		ft_putchar('\n');
		i = 2;
		while (y > i++)
		{
			ft_putchar('*');
			ft_putchar('\n');
		}
	}
	else
	{
		while (y-- > 1)
		{
			ft_putchar('*');
			i = 2;
			while (x > i++)
			{
				ft_putchar(' ');
			}
			ft_putchar('*');
			ft_putchar('\n');
		}
	}
}

void	print_base(int x)
{
	ft_putchar('\\');
	while (x-- >= 2)
	{
		ft_putchar('*');
	}
	if (x == 1)
	{
		ft_putchar('/');
	}
}

void	rush00(int x, int y)
{
	if (x == 1)
	{
		ft_putchar('/');
		if (y > 1)
		{
			print_vertical(x, y);
			ft_putchar('\\');
		}
	}
	if (x >= 2)
	{
		print_top(x);
		print_vertical(x, y);
		print_base(x);
	}
}

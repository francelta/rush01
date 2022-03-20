/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarras <frcarras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 14:24:59 by alflopez          #+#    #+#             */
/*   Updated: 2022/03/20 15:28:26 by frcarras         ###   ########.fr       */
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
		{
			ft_putchar('*');
		}
	}
	if (x == 0)
	{
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	print_down_basic(int x, int y)
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
}

void	print_down_complex(int x, int y)
{
	int	i;

	if (x > 1)
	{
		while (y-- > 2)
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
	if (x-- >= 2)
	{
		ft_putchar('\\');
		while (x-- >= 2)
		{
			ft_putchar('*');
			if (x == 1)
			{
				ft_putchar('/');
				ft_putchar('\n');
			}
		}
	}
}

void	rush00(int x, int y)
{
	if (x == 1)
	{
		ft_putchar('/');
		if (y == 1)
		{
			ft_putchar('\n');
		}
		if (y > 1)
		{
			print_down_basic(x, y);
			print_down_complex(x, y);
			ft_putchar('\\');
			ft_putchar('\n');
		}
	}
	if (x >= 2)
	{
		print_top(x);
		print_down_basic(x, y);
		print_down_complex(x, y);
		if (y >= 2)
		{
			print_base(x);
		}
	}
}

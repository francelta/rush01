/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fruiz-ca <fruiz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 07:08:17 by fruiz-ca          #+#    #+#             */
/*   Updated: 2022/03/19 12:44:32 by fruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
char	corner1 = '/';
char	corner2 = '0';
char	row = '*';
char	column = '|';

//Tapa de la caja
void	top(x)
{
	int	i;

	ft_putchar(corner1);
	i = 2;
	while (i < x)
	{
		ft_putchar(row);
		i++;
	}
	ft_putchar(corner2);
}
//Cuerpo de la caja
void	body(x, y)
{
	int i, j;
	i = 2;
	j = 2;
	if (x > 2)
	{
		while (i < y)
		{
			char space;
            space =' ';
            char new_line;
            new_line='\n';
            ft_putchar(new_line);
			ft_putchar(column);
			i++;
			while (j < x)
			{
				ft_putchar(space);
				j++;
			}
			ft_putchar(column);
		}
	}
}
//Base de la caja
void	base(y)
{
	int	i;

	ft_putchar(corner1);
	i = 2;
	while (i < y)
	{
		ft_putchar(row);
		i++;
	}
	ft_putchar(corner2);
}

void	rush00(int x, int y)
{
    top(x);
    body(x,y);
    base(x);
}
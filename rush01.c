/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anigond <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 11:54:37 by anigond           #+#    #+#             */
/*   Updated: 2018/07/08 12:59:14 by anigond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	write_topx(int x)
{
	int index;

	index = 0;
	ft_putchar('/');
	while (index < (x - 2))
	{
		ft_putchar('*');
		index++;
	}
	if (x > 1)
		ft_putchar('\\');
	ft_putchar('\n');
}

void	write_y(int x, int y)
{
	int index_x;
	int index_y;

	index_x = 0;
	index_y = 0;
	while (index_y < (y - 2))
	{
		ft_putchar('*');
		while (index_x < (x - 2))
		{
			ft_putchar(' ');
			index_x++;
		}
		index_x = 0;
		if (x > 1)
			ft_putchar('*');
		ft_putchar('\n');
		index_y++;
	}
}

void	write_bottomx(int x)
{
	int index_x;

	index_x = 0;
	ft_putchar('\\');
	while (index_x < (x - 2))
	{
		ft_putchar('*');
		index_x++;
	}
	if (x > 1)
		ft_putchar('/');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		write_topx(x);
		write_y(x, y);
		if (y > 1)
			write_bottomx(x);
	}
}

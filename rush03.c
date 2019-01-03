/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trlevequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 13:20:36 by trlevequ          #+#    #+#             */
/*   Updated: 2018/07/08 13:20:39 by trlevequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	write_x(int x)
{
	int index;

	index = 0;
	ft_putchar('A');
	while (index < (x - 2))
	{
		ft_putchar('B');
		index++;
	}
	if (x > 1)
		ft_putchar('C');
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
		ft_putchar('B');
		while (index_x < (x - 2))
		{
			ft_putchar(' ');
			index_x++;
		}
		index_x = 0;
		if (x > 1)
			ft_putchar('B');
		ft_putchar('\n');
		index_y++;
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		write_x(x);
		write_y(x, y);
		if (y > 1)
			write_x(x);
	}
}

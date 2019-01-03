/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   answer.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcampos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 18:04:09 by lcampos-          #+#    #+#             */
/*   Updated: 2018/07/22 18:04:29 by lcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_rep(int *tab)
{
	int		i;
	int		o;

	i = 0;
	o = 0;
	while (i++ < LEN)
	{
		if (o > 0 && tab[i] == 0)
			ft_putstr(" || ");
		if (tab[i] == 0)
		{
			ft_putstr("[colle-0");
			ft_putnbr(i);
			ft_putstr("] [");
			ft_putnbr(taille.x);
			ft_putstr("] [");
			ft_putnbr(taille.y);
			ft_putstr("]");
			o++;
		}
	}
	ft_putchar('\n');
}

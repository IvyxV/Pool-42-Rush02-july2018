/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_colle1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcampos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 15:06:19 by lcampos-          #+#    #+#             */
/*   Updated: 2018/07/22 15:06:50 by lcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_colle(char *str, t_taille taille, int *tab)
{
	int		i;

	i = -1;
	while (++i < LEN)
	{
		if (i == 0)
			tab[i] = ft_strcmp(colle00(taille.x, taille.y), str);
		else if (i == 1)
			tab[i] = ft_strcmp(colle01(taille.x, taille.y), str);
		else if (i == 2)
			tab[i] = ft_strcmp(colle02(taille.x, taille.y), str);
		else if (i == 3)
			tab[i] = ft_strcmp(colle03(taille.x, taille.y), str);
		else if (i == 4)
			tab[i] = ft_strcmp(colle04(taille.x, taille.y), str);
	}
}

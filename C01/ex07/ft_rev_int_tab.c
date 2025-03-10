/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcili <bcili@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:08:24 by bcili             #+#    #+#             */
/*   Updated: 2024/08/25 21:08:42 by bcili            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = size - 1;
	while (i >= 0)
	{
		if (i >= size / 2)
		{
			tmp = tab[size - i - 1];
			tab[size - i - 1] = tab[i];
			tab[i] = tmp;
		}
		i--;
	}
}

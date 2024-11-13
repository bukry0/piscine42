/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcili <bcili@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:17:14 by bcili             #+#    #+#             */
/*   Updated: 2024/09/04 14:59:18 by bcili            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	tmp;

	tmp = 1;
	i = 1;
	if (power < 0)
		return (0);
	else if (power == 0 && nb == 0)
		return (1);
	while (i <= power)
	{
		tmp = tmp * nb;
		i++;
	}
	return (tmp);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcili <bcili@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:48:59 by bcili             #+#    #+#             */
/*   Updated: 2024/09/04 15:27:54 by bcili            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if ((power == 0 && nb == 0) || (nb == 1))
		return (1);
	else if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcili <bcili@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:19:25 by bcili             #+#    #+#             */
/*   Updated: 2024/09/04 14:58:55 by bcili            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	temp;

	i = 2;
	temp = 1;
	if (nb < 0)
		return (0);
	else if (nb < 2)
		return (1);
	while (i <= nb)
	{
		temp *= i;
		i++;
	}
	return (temp);
}

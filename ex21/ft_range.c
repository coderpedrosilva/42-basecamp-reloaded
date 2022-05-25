/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: progerio <progerio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 21:37:36 by progerio          #+#    #+#             */
/*   Updated: 2022/05/25 13:25:23 by progerio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	if (min >= max)
	{
		range = (int *)0;
		return (range);
	}
	i = 0;
	size = (min * (-1)) + max;
	range = (int *)malloc(sizeof(int) * size);
	while (i < size)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}

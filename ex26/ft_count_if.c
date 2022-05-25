/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: progerio <progerio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 20:25:27 by progerio          #+#    #+#             */
/*   Updated: 2022/05/25 13:24:57 by progerio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	returns;

	returns = 0;
	while (*tab)
		if (f(*tab++))
			returns++;
	return (returns);
}

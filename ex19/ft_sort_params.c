/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: progerio <progerio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 20:04:07 by progerio          #+#    #+#             */
/*   Updated: 2022/05/22 23:42:52 by progerio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_argv(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
			ft_putchar(argv[i][j++]);
		ft_putchar('\n');
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*aux;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		if (ft_strcmp(argv[i], argv[j]) > 0)
		{
			aux = argv[i];
			argv[i] = argv[j];
			argv[j] = aux;
			i = 0;
		}
		i++;
	}
	ft_print_argv(argv);
}

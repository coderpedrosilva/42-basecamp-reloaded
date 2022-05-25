/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: progerio <progerio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 22:31:01 by progerio          #+#    #+#             */
/*   Updated: 2022/05/25 13:24:51 by progerio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(int fd)
{
	char	buffer;

	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return ;
	}
	while (read(fd, &buffer, 1))
		write(1, &buffer, 1);
}

int	main(int argc, char *argv[])
{
	if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else if (argc < 2)
		write(2, "File name missing.\n", 19);
	else
		ft_display_file(open(argv[1], O_RDONLY));
	return (0);
}

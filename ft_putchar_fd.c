/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abounade <abounade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:38:57 by ekhallaf          #+#    #+#             */
/*   Updated: 2024/11/11 09:39:26 by abounade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int  main()
// {
//     int fd;
// 	fd = open("aaa.txt", O_RDWR, 0777);
//     ft_putchar_fd('a',fd);
// 	close(fd);

// 	int fd1 = open("aaa.txt", O_RDWR, 0777);
// 	printf("%d\n", fd1);
// }
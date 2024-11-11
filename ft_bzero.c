/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhallaf <ekhallaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:25:57 by ekhallaf          #+#    #+#             */
/*   Updated: 2024/11/11 15:22:57 by ekhallaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = '0';
		ptr++;
		n--;
	}
	return (s);
}
// int main()
// {
//     char str[] = "Hello, World!";
//     printf("%s\n",ft_bzero(str,3));
//     return (0);
// }

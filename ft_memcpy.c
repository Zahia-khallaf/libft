/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhallaf <ekhallaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:26:13 by ekhallaf          #+#    #+#             */
/*   Updated: 2024/11/11 20:40:21 by ekhallaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	
	s = (const char *)src;
	d = (char *)dest;
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (d);
}
// int main()
// {
//     char *src = "55";
//     char dest[2];

//     ft_memcpy(dest,  src, 2);

//     printf("%s\n", dest);
//     return (0);
// }
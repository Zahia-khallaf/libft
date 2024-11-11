/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abounade <abounade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:26:13 by ekhallaf          #+#    #+#             */
/*   Updated: 2024/11/11 09:47:42 by abounade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	char *d_start;

	if (src == dest || n == 0)
		return (dest);
	s = (const char *)src;
	d = (char *)dest;
	d_start = d;
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (d_start);
}
// int main()
// {
//     char *src = "55";
//     char dest[2];

//     ft_memcpy(dest,  src, 2);

//     printf("%s\n", dest);
//     return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhallaf <ekhallaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:03:47 by ekhallaf          #+#    #+#             */
/*   Updated: 2024/11/11 15:59:26 by ekhallaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	d;
	size_t			i;

	str = (unsigned char *)s;
	d = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (d == str[i])
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
/* int main ()
{
char str[] = "h@ellokjlek0wfhlow1ekf@";
printf("%s",ft_memchr(str,'1',60));
} */
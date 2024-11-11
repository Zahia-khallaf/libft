/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhallaf <ekhallaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:17:58 by ekhallaf          #+#    #+#             */
/*   Updated: 2024/11/11 16:19:27 by ekhallaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	char		*dest;
	const char	*src;
	size_t		i;

	dest = (char *)destination;
	src = (const char *)source;
	i = 0;
	if (src == dest || n == 0)
		return (destination);
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			dest[n] = src[n];
		}
	}
	else
	{
		while (i++ < n)
		{
			dest[i] = src[i];
		}
	}
	return (destination);
}
/*  int main()
{
    char src[] = "Hello,world!";
    // char dest[10];
    ft_memmove(src + 1,src, 2);
    printf("%s \n", src);
    return (0);
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhallaf <ekhallaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:47:44 by ekhallaf          #+#    #+#             */
/*   Updated: 2024/11/11 20:46:43 by ekhallaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;
	size_t	j;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	i = 0;
	j = dlen;
	if (size == 0)
		return (slen);
	if (size <= dlen)
		return (size + slen);
	while (src[i] && j < size - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (dlen + slen);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char        dest[30] = "oumaima";
	const char    *src = " zwina";
	char        dest1[30] = "oumaima";
	const char    *src2 = " zwina";

	printf("%d\n",ft_strlcat(dest,src,14));
	printf("%s\n",dest);
	printf("%d\n",strlcat(dest1,src2,14));
}*/

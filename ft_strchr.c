/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhallaf <ekhallaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:26:35 by ekhallaf          #+#    #+#             */
/*   Updated: 2024/11/09 22:42:39 by ekhallaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (c == *str)
		{
			return ((char *)str);
		}
		str++;
	}
	if (c == '\0')
	{
		return (NULL);
	}
	return (0);
}
// int main ()
// {
//     char str[] = "gentle way ";
//     char *result = ft_strchr(str, 'g');
//     printf ("%s", result);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhallaf <ekhallaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 22:39:44 by ekhallaf          #+#    #+#             */
/*   Updated: 2024/11/09 22:43:20 by ekhallaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *)s) - 1;
	while (i >= 0)
	{
		if (c == s[i])
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
// int main ()
// {
//     char str[] = "helolo";
//     printf("%s",ft_strrchr(str,'e'));
// }
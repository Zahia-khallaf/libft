/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhallaf <ekhallaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:02:09 by ekhallaf          #+#    #+#             */
/*   Updated: 2024/11/10 20:51:16 by ekhallaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= strlen(s) || len == 0)
		return ("");
	char *ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	if (len > strlen(s) - start)
		len = strlen(s) - start;
	while (i < len)
	{
		ptr[i] = s[i + start];
		i++;
	}
	ptr[len] = '\0';
	return (ptr);
}
// int main()
// {
// 	char *str = "Hello, World!";
// 	char *substr = ft_substr(str, 7, 5);
// 	printf("%s\n", substr);
// }
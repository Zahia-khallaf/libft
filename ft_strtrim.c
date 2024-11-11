/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abounade <abounade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 20:08:12 by ekhallaf          #+#    #+#             */
/*   Updated: 2024/11/11 10:31:06 by abounade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*s;

	i = 0;
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}
	while (end > start && ft_strchr(set, s1[end - 1]))
	{
		end--;
	}
	s = malloc(end - start + 1);
	if (!s)
		return (NULL);
	while (start < end)
	{
		s[i++] = s1[start++];
	}
	s[i] = '\0';
	return (s);
}
// int main()
// {
//     char *s = ft_strtrim("   Hello, World!   "," ");
//     printf("%s\n", s);
//     free(s);
//     return (0);
// }
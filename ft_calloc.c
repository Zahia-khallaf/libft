/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abounade <abounade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:35:25 by ekhallaf          #+#    #+#             */
/*   Updated: 2024/11/11 10:02:11 by abounade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	char	*tmp;

	tmp = malloc((num * (size)));
	if (!tmp)
	{
		return (NULL);
	}
	ft_bzero(tmp, size * num);
	return (tmp);
}
// int main()
// {
//     unsigned int a = 0;
// 	printf("%zu", ~(size_t)0);
// }
// int main()
// {
//     int i = 0;
//     char * tmp = ft_calloc(5,sizeof(char));
//     i = 0;
//     while (i < 5)
//     {
//         printf("%d",tmp[i]);
//         i++;
//     }
// }

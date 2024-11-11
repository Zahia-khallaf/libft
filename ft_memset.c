/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhallaf <ekhallaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:06:16 by ekhallaf          #+#    #+#             */
/*   Updated: 2024/11/11 21:18:59 by ekhallaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *a, int b, size_t n)
{
	unsigned char	*ptr;

	ptr = a;
	while (n > 0)
	{
		*ptr = (unsigned int)b;
		ptr++;
		n--;
	}
	return (a);
}

// int main ()
// {	
// 	int d = 1;
// 	int *p = &d;
//     ft_memset((char *)p,57,1);
// 	ft_memset((char *)p + 1,5,1);
//     printf("%d", d);
// }


// int main ()
// {
//     int tab[] = {1,2,3};
//     *(tab + 1) = tab[1] = 1[tab]
//     //ft_memset(tab, 2, 2);
//     ft_memset(tab, 4, 12);
//     printf("%s", tab);
// }
/*
int	main(void)
{
	int tab[] = {1};
	ft_memset(tab, 4, 1);

	// ft_memset(tab, 4, 1);
	printf("%d\n", tab[0]);
	}*/

// int main()
// {
// 	int tab[] = {0};
// 	ft_memset(tab,128,1);
// 	ft_memset(tab,37,2);
// 	printf("%d\n", tab[0]);
// }
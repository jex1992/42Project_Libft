/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/24 18:59:36 by sjang             #+#    #+#             */
/*   Updated: 2016/12/24 18:59:37 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int         ft_isint(long long n)
{
    if (n >= -2147483648 && n <= 2147483647)
        return (1);
    else
        return (0);
}

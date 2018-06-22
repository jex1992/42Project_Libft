/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 23:38:50 by sjang             #+#    #+#             */
/*   Updated: 2016/09/24 23:38:51 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void    ft_strdel(char **as)
{
    if (as == NULL || *as == NULL)
        return ;
    free(*as);
    *as = NULL;
}

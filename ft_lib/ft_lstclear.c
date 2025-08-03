/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abendrih <abendrih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 21:15:40 by abendrih          #+#    #+#             */
/*   Updated: 2025/08/03 22:05:24 by abendrih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*recip;
	t_list	*key;

	if (!lst || !*lst)
		return ;
	key = *lst;
	while (key)
	{
		recip = key;
		key = key->next;
		if (del)
			del(recip->content);
		free(recip);
	}
	*lst = (NULL);
}

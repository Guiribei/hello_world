#include "hello.h"

void	add_node_to_list(t_node **head, t_node *new_node)
{
	t_node	*tmp;

	tmp = *head;
	if (!new_node)
		return ;
	if (*head == NULL)
		*head = new_node;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new_node;
	}
	return ;
}

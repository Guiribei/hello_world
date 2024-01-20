#include "hello.h"

void	free_list(t_node *head)
{
	t_node	*tmp;

	if (!head)
		return ;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

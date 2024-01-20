#include "hello.h"

void	print_string_on_node(t_node *node)
{
	while (node)
	{
		write(1, &node->letter, 1);
		node = node->next;
	}
}

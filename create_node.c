#include "hello.h"

t_node	*create_node(char c)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->letter = c;
	node->next = NULL;
	return (node);
}

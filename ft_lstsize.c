#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int 	size;
	t_list	*current;

	size = 0;
	current = lst;
	while (current != NULL)
	{
		size ++;
		current = current->next;
	}
	return (size);
}
/*
int main(void)
{
	t_list *head;
	t_list *current;
	t_list **lst;
	t_list	*new;
	int size;

	head = ft_lstnew((void *)10);
	head->next = ft_lstnew((void *)20);
	new = ft_lstnew((void *)30);
	*lst = head;
	new = ft_lstnew((void *)30);
	ft_lstadd_front(lst, new);
    current = *lst;
    size = ft_lstsize(*lst);
    printf("size: %d\n", size);
    while (size > 0)
    {
    	printf("%zu\n", (size_t)current->content);
        current = current->next;
        size --;
    }
	return (0);
}
*/
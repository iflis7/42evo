
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*dernier;

	if (!*lst)
		*lst = new;
	else
	{
		dernier = ft_lstlast(*lst);
		dernier->next = new;
	}
}

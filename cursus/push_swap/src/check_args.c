#include "../include/push_swap.h"

int	*get_numbers(char *str)
{
	char	**nums;
	int		*tab;
	int		i;

	i = 0;
    while(str[i])
    {
        if(!ft_isnum_space(str[i++]))
            msg_error("Argument invalid! Must be only numbers!");
    }
	nums = ft_split(str, ' ');
	tab = ft_calloc(sizeof(int), 1);
    i = 0;
	while (nums[i])
	{
		tab[i] = ft_atoi(nums[i]);
		i++;
	}
	fru(nums);
	return (tab);
}

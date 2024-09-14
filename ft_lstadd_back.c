#include "libft.h"

void				ft_lstadd_back(t_list **lst, t_list *new) {
    if(lst && new) {
        t_list *ptr = *lst;
        while (ptr && ptr->next) {
            new = new->next = ptr;
        }
        ptr = new;
    }
}
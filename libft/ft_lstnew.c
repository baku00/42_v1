#include "libft.h"
#include <stdio.h>

typedef struct  s_list{
  void *content;
  struct s_list *next;
} t_list;

t_list *ft_lstnew(void *content){
  t_list *list;

  list = ft_calloc(1, sizeof(t_list));
  if (!list)
    return (0);
  list->content = content;
  list->next = ft_calloc(1, sizeof(t_list));
  return (list);
}

void  ft_lstadd_front(t_list **alst, t_list *new){
  alst[0] = new;
}

int ft_lstsize(t_list *lst)
{
  unsigned int  i;
  t_list *list;

  i = 0;
  list = lst;
  if (!lst)
    return (0);
  while (list)
  {
    list = list->next;
    i++;
  }
  return (i);
}

t_list  *ft_lstlast(t_list *list)
{
  if (!list)
    return (0);
  while (list->next)
    list = list->next;
  return (list);
}

void ft_lstadd_back(t_list **alst, t_list *new) {
  t_list  *last;

  if (!alst[0])
    ft_lstadd_front(alst, new);
  else
  {
    last = ft_lstlast(alst[0]);
    last->next = new;
  }
}

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
  del(lst->content);
  free(lst);
}

void ft_lstclear(t_list **lst, void (*del)(void *))
{
  ft_lstdelone(*lst, del);
}

/*
** funct.h for lemin in /home/gicque_p/local/cpe/CPE_2014_lem-in/include
** 
** Made by Pierrick Gicquelais
** Login   <gicque_p@epitech.net>
** 
** Started on  Thu Apr 17 10:57:50 2014 Pierrick Gicquelais
** Last update Fri Apr 18 11:38:35 2014 Pierrick Gicquelais
*/

#ifndef		__FUNCT_H_
# define	__FUNCT_H_

#include	"struct.h"

t_graf		*init_graphe();
t_list		*new_adj_list(int);
t_list		*graphe_insert_sommet(t_graf *, int);
char		*get_next_line(int);
char		*epur_str(char *);
int		my_fputchar(int, char);
int		my_strlen(char *);
void		graphe_insert_arc(t_graf *, int, int, int);
void		add_adjacence(t_list *, int, int);
void		my_parsing(t_graf *);
void		my_fputstr(int, char *);
void		my_error(char *s, int);

#endif		/* !__FUNCT_H_ */

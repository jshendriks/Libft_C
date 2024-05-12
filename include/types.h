#ifndef TYPES_H
# define TYPES_H

# include <stdlib.h>
# include <unistd.h>
# include <sys/select.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

typedef struct s_lintwo_list
{
	void					*content;
	struct s_lintwo_list	*next;
	struct s_lintwo_list	*prev;
}	t_lintwo_list;

typedef struct s_circtwo_list
{
	void					*content;
	struct s_circtwo_list	*next;
	struct s_circtwo_list	*prev;
	int						indicator;
}	t_circtwo_list;

typedef struct s_circfor_list
{
	void					*content;
	struct s_circfor_list	*next;
	int						indicator;
}	t_circtwo_list;

#endif

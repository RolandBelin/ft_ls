#include <ft_ls.h>

t_file			*file_init(const INT8 *path, INT8 *name)
{
	t_file		*f;

	if ((f = (t_file *)malloc(sizeof(t_file))) != NULL)
	{
		f->name = ft_strdup(name);
		f->dir = ft_strdup(path);
		f->parent = NULL;
		f->path = pathfile(path, name);
		f->sb = NULL;
		f->content = NULL;
		f->content_size = 0;
		f->usr = NULL;
		f->grp = NULL;
	}
	else
		ft_merror("t_file structure");
	return (f);
}

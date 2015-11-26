/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 21:42:35 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/26 03:27:14 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

# define BOOL			int
# define TRUE			1
# define FALSE			0
# define UINT8			unsigned char
# define UINT16			unsigned short
# define UINT32			unsigned int
# define UINT64			unsigned long
# define INT8			char
# define INT16			short
# define INT32			int
# define INT64			long

void					ft_putchar(INT32 c);
void					ft_putchar_fd(INT8 c, INT32 fd);
void					ft_putstr(const INT8 *str);
void					ft_putstr_fd(const INT8 *str, INT32 fd);
void					ft_putendl(const INT8 *str);
void					ft_putendl_fd(const INT8 *str, INT32 fd);
void					ft_putnbr(INT32 n);
void					ft_putnbr_fd(INT32 n, INT32 fd);

void					ft_memdel(void **ap);
void					*ft_memset(void *s, int c, size_t n);
void					ft_bzero(void *b, size_t n);
void					*ft_memalloc(size_t n);
void					*ft_memcpy(void *dst, const void *src, size_t n);
void					*ft_memccpy(void *d, const void *s, int c, size_t n);
void					*ft_memmove(void *dst, const void *src, size_t n);
void					*ft_memchr(const void *s, INT32 c, size_t n);
void					*ft_memrchr(const void *s, INT32 c, size_t n);
size_t					ft_memcmp(const void *s1, const void *s2, size_t n);

size_t					ft_strlen(const INT8 *s);
INT8					*ft_strnew(size_t n);
void					ft_strdel(INT8 **as);
INT8					*ft_strcpy(INT8 *dst, const INT8 *src);
INT8					*ft_strncpy(INT8 *dst, const INT8 *src, size_t n);
INT8					*ft_strdup(const INT8 *s);
INT8					*ft_strclr(INT8 *s);
INT32					ft_strcmp(const INT8 *s1, const INT8 *s2);
size_t					ft_strncmp(const INT8 *s1, const INT8 *s2, size_t i);
INT8					*ft_strchr(const INT8 *s, INT32 c);
INT8					*ft_strrchr(const INT8 *s, INT32 c);
INT8					*ft_strcat(INT8 *dst, const INT8 *src);
INT8					*ft_strncat(INT8 *dst, const INT8 *src, size_t n);
INT8					*ft_strstr(const INT8 *s1, const INT8 *s2);
INT8					*ft_strnstr(const INT8 *s1, const INT8 *s2, size_t n);
INT8					*ft_strjoin(const INT8 *s1, const INT8 *s2);
INT8					*ft_strsub(const INT8 *str, UINT32 st, size_t n);
INT32					ft_strequ(const INT8 *s1, const INT8 *s2);
INT32					ft_strnequ(const INT8 *s1, const INT8 *s2, size_t n);
INT8					*ft_strtrim(const INT8 *s);
INT8					**ft_strsplit(const INT8 *s, INT8 c);
void					ft_striter(INT8 *s, void (*f)(INT8 *));
void					ft_striteri(INT8 *s, void (*f)(UINT32, INT8 *));
INT8					*ft_strmap(const INT8 *s, INT8 (*f)(INT8));
INT8					*ft_strmapi(const INT8 *s, INT8 (*f)(UINT32, INT8));
INT8					*ft_strtolower(INT8 *str);
INT8					*ft_strtoupper(INT8 *str);

INT32					ft_atoi(const INT8 *nptr);
INT8					*ft_itoa(INT32 n);
INT8					**ft_atoaa(const INT8 *str, size_t cut);
INT64					ft_atol(const INT8 *nptr);
long long				ft_atoll(const INT8 *nptr);
INT8					*ft_aatoa(INT8 **ar);
INT8					*ft_aatona(INT8 **ar, size_t max);

INT32					ft_isupper(INT32 c);
INT32					ft_islower(INT32 c);
INT32					ft_isspace(INT32 c);
INT32					ft_isalpha(INT32 c);
INT32					ft_isdigit(INT32 c);
INT32					ft_isalnum(INT32 c);
INT32					ft_isascii(INT32 c);
INT32					ft_isblank(INT32 c);
INT32					ft_isxdigit(INT32 c);
INT32					ft_ispunct(INT32 c);
INT32					ft_isgraph(INT32 c);
INT32					ft_isprint(INT32 c);
INT32					ft_iscntrl(INT32 c);
INT32					ft_tolower(INT32 c);
INT32					ft_toupper(INT32 c);

typedef struct			s_segment
{
	void				*data;
	struct s_segment	*next;
	struct s_segment	*back;
}						t_segment;
typedef struct			s_linkedlist
{
	size_t				count;
	struct s_segment	*first;
	struct s_segment	*last;
}						t_linkedlist;

t_segment				*ft_segment_new(void);
void					ft_segment_free(t_segment **seg, BOOL alsodata);
t_segment				*ft_segment_setdata(t_segment *seg, void *data);
void					*ft_segment_getdata(t_segment *seg);
void					*ft_segment_getdupdata(t_segment *seg);
t_segment				*ft_segment_setnext(t_segment *seg, t_segment *next);
t_segment				*ft_segment_setback(t_segment *seg, t_segment *back);
t_linkedlist			*ft_linkedlist_new();
void					ft_linkedlist_free(t_linkedlist **ll, BOOL alsodata);
void					ft_linkedlist_addfirst(t_linkedlist *ll, void *data);
void					ft_linkedlist_addlast(t_linkedlist *ll, void *data);
void					ft_linkedlist_addat(t_linkedlist *l, void *d, size_t i);
void					*ft_linkedlist_getat(t_linkedlist *ll, size_t index);
t_segment				*ft_linkedlist_getsegat(t_linkedlist *ll, size_t index);
void					ft_linkedlist_removefirst(t_linkedlist *ll, BOOL b);
void					ft_linkedlist_removelast(t_linkedlist *ll, BOOL b);
void					ft_linkedlist_removeat(t_linkedlist *ll, size_t i,
		BOOL b);
void					ft_linkedlist_removeall(t_linkedlist *ll, BOOL b);
void					ft_linkedlist_expendlast(t_linkedlist *ll, size_t n);
void					ft_linkedlist_expendfirst(t_linkedlist *ll, size_t n);
void					ft_linkedlist_setat(t_linkedlist *ll, void *d,
		size_t i);
BOOL					ft_linkedlist_isempty(t_linkedlist *ll);
BOOL					ft_linkedlist_containindex(t_linkedlist *ll, size_t i);

typedef struct			s_arraylist
{
	void				**array;
	size_t				capacity;
	size_t				count;
}						t_arraylist;
void					**ft_array_new(size_t n);
size_t					ft_array_size(void **ar);
void					ft_array_free(void ***ar, BOOL alsodata);
void					**ft_array_dup(void **ar);
BOOL					ft_array_resize(void ***ar, size_t n);
t_arraylist				*ft_arraylist_new(void);
t_arraylist				*ft_arraylist_newn(size_t initial_size);
void					ft_arraylist_free(t_arraylist **al, BOOL alsodata);
BOOL					ft_arraylist_add(t_arraylist *al, void *data);
BOOL					ft_arraylist_addall(t_arraylist *al, void **datas);
void					*ft_arraylist_set(t_arraylist *al, size_t i, void *d);
void					ft_arraylist_trimtosize(t_arraylist *al);
void					*ft_arraylist_get(t_arraylist *al, size_t index);
BOOL					ft_arraylist_remove(t_arraylist *al, size_t i, BOOL fr);
size_t					ft_arraylist_clear(t_arraylist *al, BOOL alsodata);
BOOL					ft_arraylist_containindex(t_arraylist *al, size_t i);
BOOL					ft_arraylist_isempty(t_arraylist *al);
BOOL					ft_arraylist_ensurecapacity(t_arraylist *al,
		size_t min);

typedef t_arraylist		t_stack;
t_stack					*ft_stack_new(void);
void					ft_stack_free(t_stack **s, BOOL alsodata);
void					ft_stack_clear(t_stack *s, BOOL alsodata);
void					ft_stack_push(t_stack *s, void *data);
void					*ft_stack_pop(t_stack *s);
void					*ft_stack_peek(t_stack *s);
BOOL					ft_stack_isempty(t_stack *s);

typedef t_linkedlist	t_queue;
t_queue					*ft_queue_new(void);
void					ft_queue_free(t_queue **q, BOOL alsodata);
void					ft_queue_clear(t_queue *q, BOOL alsofree);
BOOL					ft_queue_enqueue(t_queue *q, void *data);
void					*ft_queue_dequeue(t_queue *q);

typedef t_arraylist		t_buffer;
typedef struct			s_bufferseg
{
	INT8				data[32];
	UINT8				len;
}						t_bufferseg;
t_bufferseg				*ft_bufferseg_new(void);
void					ft_bufferseg_clear(t_bufferseg *bs);
void					ft_bufferseg_free(t_bufferseg **bs);
void					ft_bufferseg_setstr(t_bufferseg *seg, INT8 *str);
BOOL					ft_bufferseg_addchr(t_bufferseg *bs, INT8 c);
BOOL					ft_bufferseg_addstr(t_bufferseg *bs, INT8 *str);
BOOL					ft_bufferseg_canaddstr(t_bufferseg *bs, INT8 *str);
BOOL					ft_bufferseg_canaddchr(t_bufferseg *bs);
INT8					*ft_bufferseg_tostr(t_bufferseg *bs);
t_buffer				*ft_buffer_new(void);
void					ft_buffer_free(t_buffer **b);
void					ft_buffer_addchr(t_buffer *b, INT8 c);
void					ft_buffer_addstr(t_buffer *b, INT8 *str);
size_t					ft_buffer_len(t_buffer *b);
INT8					**ft_buffer_toarray(t_buffer *b);
INT8					*ft_buffer_tostring(t_buffer *b);
INT8					*ft_buffer_tonstring(t_buffer *b, size_t n);

#endif

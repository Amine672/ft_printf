/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 02:26:10 by akabbouc          #+#    #+#             */
/*   Updated: 2017/01/16 12:53:44 by akabbouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include "../libft/libft.h"
# include <stdarg.h>

typedef struct	s_stock
{
	va_list		(ag);
	char		*str;
	char		*tmp;
	char		*sp;
	char		*si;
	char		s;
	long long	i;
	char		*sa;
	int			lenf;
	int			wi;
	wchar_t		*wtmp;
	wchar_t		*ws;
	wchar_t		wc;
	int			len_aq;
	char		*aq;
	char		*st;
	int			tlen;
	int			len;
}				t_stock;

typedef struct	s_flags
{
	char		flags;
	int			hast;
	int			left;
	int			champs;
	int			plus;
	int			blank;
	int			zero;
	int			pour;
	int			preci;
	int			preci_len;
	int			point;
	int			afterpour;
	int			h;
	int			hh;
	int			l;
	int			ll;
	int			jz;
	int			t;
	int			q;
	int			neg;
	int			conv;
}				t_flags;
void			print_s(t_flags *f, t_stock *s);
void			ft_putwstr(wchar_t *c);
void			ft_putwchar(wchar_t c);
size_t			ft_wcharlen(wchar_t c);
int				count_bits(unsigned int nbr);
void			ft_get_flags2(t_flags *f, char *c);
void			*ft_strset(int c, size_t len);
size_t			ft_strnwlen(t_stock *s, t_flags *f);
int				ft_cstrwlen(t_stock *s, t_flags *f);
int				ft_putnwchar(t_stock *s, t_flags *f);
void			ft_putnwstr(t_stock *s, t_flags *f);
void			get_zero_s(t_flags *f, t_stock *s);
void			get_space_s(t_flags *f, t_stock *s);
void			handle_s(t_flags *f, t_stock *s);
void			conv_s(t_flags *f, t_stock *s);
void			handle_pour(t_flags *f, t_stock *s);
void			print_c(t_flags *f, t_stock *s);
void			handle_c(t_flags *f, t_stock *s);
void			conv_c(t_flags *f, t_stock *s);
void			conv_o(t_flags *f, t_stock *s);
int				ft_printf(const char *format, ...);
t_stock			*set_stock(void);
t_flags			*set_flags(void);
void			handle_conv(t_flags *f, t_stock *s);
void			handle_d(t_flags *f, t_stock *s);
void			conv_d(t_flags *f, t_stock *s);
void			ft_get_flags(t_flags *f, char *c);
void			get_signe(t_flags *f, t_stock *s);
void			get_zero(t_flags *f, t_stock *s);
void			get_space(t_flags *f, t_stock *s);
void			print_d(t_flags *f, t_stock *s);
void			conv_u(t_flags *f, t_stock *s);
void			conv_x(t_flags *f, t_stock *s);
void			ft_test(t_stock *s, t_flags *f);

#endif

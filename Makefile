NAME = libftprintf.a

HEADER = ./

SRCS =		ft_printf.c				\
			print_format.c			\
			init_ft_printf.c		\
			get_param.c				\
			get_target_arg.c		\
			get_attributes.c		\
			get_field_width.c		\
			get_precision.c			\
			get_modifier.c			\
			get_conversion.c		\
			get_overload.c			\
			ft_put_err.c			\
			ft_strlen.c				\
			conversions1.c			\
			conversions2.c			\
			conversions3.c			\
			conversions4.c			\
			conversions5.c			\
			get_index.c				\
			get_nb.c				\
			get_vararg.c			\
			reset_param.c			\
			get_size_buffer.c		\
			ft_print_unicode.c		\
			write_unicode.c			\
			get_size_nb_base.c		\
			ft_itoa_base.c			\
			get_size_nb_base.c		\
			ft_caster.c				\
			ft_itoa.c				\
			get_size_nb.c			\
			write_number.c			\

OBJS = 		$(SRCS:.c=.o)

CFLAGS = 	-g3 -Wall -Werror -Wextra -c

all: 		$(NAME)

$(NAME): 	$(OBJS)
			@gcc $(CFLAGS) $(SRCS) -I $(HEADER)
			ar rc $(NAME) $(OBJS)
			ranlib $(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re: 		fclean $(NAME)

.PHONY:		all clean fclean re

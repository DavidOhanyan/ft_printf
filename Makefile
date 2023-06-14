SRCS			= ft_printf.c ft_print_ptr.c ft_print_hex.c ft_print_uns.c \
				  	ft_print_str.c ft_print_num.c

OBJS			= $(SRCS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror
AR				= ar
ARFLAGS         = rcs

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean:			
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re

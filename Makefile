CC			= 	cc
CCFLAGS		=	-Wall -Wextra -Werror
AR			=	ar -rsc
RM			=	rm -rf

UTILSPATH	= 	utils/

SRCSFILE	=	ft_printf.c
UTILSFILE	=	$(addprefix $(UTILSPATH), ft_format.c ft_putnull.c ft_putlchar.c ft_putlstr.c ft_putlnbr.c ft_putlunbr.c ft_putlhex.c ft_putlptr.c ft_putptr.c ft_nbrlen.c)

OBJS		=	$(SRCSFILE:.c=.o)
UTILSOBJS	=	$(UTILSFILE:.c=.o)
HEADER		=	ft_printf.h
NAME		=	libftprintf.a

all: $(NAME)

$(NAME): $(OBJS) $(UTILSOBJS)
	$(AR) $(NAME) $(OBJS) $(UTILSOBJS)

%.o: %.c ft_printf.h Makefile
	$(CC) $(CCFLAGS) -I $(HEADER) -c $< -o $@

clean:
	$(RM) $(OBJS) $(UTILSOBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re
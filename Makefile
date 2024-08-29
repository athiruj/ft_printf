CC		= 	cc
CCFLAGS	=	-Wall -Wextra -Werror
AR		=	ar -rsc
RM		=	rm -rf

SRCFILE	=	

OBJS	=	$(SRCFILE:.c=.0)
HEADER	=	
NAME	=	libftprint.a

all:	 $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c Makefile
	$(CC) $(CCFLAGS) -I $(HEADER) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re

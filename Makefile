NAME = colle-2
SRCS = MAIN.C \
	 ft .c\
	 ft .c\
	 ft .c\
OBJS $(SRCS) : .c = -o
$(NAME) : $(OBJS)
		  $(cc) -o $(NAME) $(OBJS)
cc = gcc -Wall -Wextra -Werror
all = $(NAME)
clean = rm -f $(OBJS)
fclean = clean
		 rm -f $(NAME)

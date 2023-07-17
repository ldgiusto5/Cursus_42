
NAME = libftpushswap.a

FILES = *.c

OBJ = *.o

FLAGS = -Wall -Werror -Wextra

all : $(NAME)
$(NAME):$(OBJ)
	ar rcs $(NAME) $(OBJ)
$(OBJ) :$(FILES)
	gcc $(FLAGS) -c $(FILES)
clean :
	rm -f $(OBJ)
fclean :
	rm -f $(OBJ) $(NAME) *.out
re :fclean all
.PHONY : re all fclean clean
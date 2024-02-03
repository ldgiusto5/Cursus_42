NAME = libftpipex.a

LIBFT = ../libft/*.c

FILES = *.c

MAIN = pipex.c

OUTPUT = pipex

OBJ = *.o

FLAGS = -Wall -Werror -Wextra -g

all : $(NAME)
$(NAME):$(OBJ)
	ar rcs $(NAME) $(OBJ)
	gcc $(MAIN) $(NAME) -o $(OUTPUT)
	rm -f $(OBJ)
$(OBJ) :$(FILES)
	gcc $(FLAGS) -c $(LIBFT)
	gcc $(FLAGS) -c $(FILES)
clean :
	rm -f $(OBJ)
fclean :
	rm -f $(OBJ) $(NAME) $(OUTPUT)
re : fclean all
try : all clean
.PHONY : re all fclean clean

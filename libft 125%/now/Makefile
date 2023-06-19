
NAME = libft.a

FILES = ft_strtrim.c

OBJ = $(FILES:.c=.o)

FLAGS = -Wall -Werror -Wextra

all : $(NAME)
$(NAME):$(OBJ)
	ar rcs $(NAME) $(OBJ)
$(OBJ) :$(FILES)
	gcc $(FLAGS) -c $(FILES)
clean :
	rm -f $(OBJ)
fclean :
	rm -f $(OBJ) $(NAME)
re : all
.PHONY : re all fclean clean

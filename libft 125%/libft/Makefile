
NAME = libft.a

FILES = ft_isalnum.c\
ft_isalpha.c\
ft_isascii.c\
ft_isdigit.c\
ft_isprint.c\
ft_strlcat.c\
ft_strlen.c\
ft_strncmp.c\
ft_memset.c\
ft_bzero.c\
ft_memcpy.c\
ft_memmove.c\
ft_strlcpy.c\
ft_toupper.c\
ft_tolower.c\
ft_strchr.c\
ft_strrchr.c\
ft_memchr.c\
ft_memcmp.c\
ft_strnstr.c\
ft_atoi.c\
ft_calloc.c\
ft_strdup.c\
ft_substr.c\
ft_strjoin.c\
ft_strtrim.c\
ft_itoa.c\
ft_strmapi.c\
ft_striteri.c\
ft_putchar_fd.c\
ft_putstr_fd.c\
ft_putendl_fd.c\
ft_putnbr_fd.c\
ft_split.c


OBJ = $(FILES:.c=.o)

FLAGS = -Wall -Werror -Wextra

BONUS = ft_lstnew_bonus.c\
ft_lstadd_front_bonus.c\
ft_lstsize_bonus.c\
ft_lstlast_bonus.c\
ft_lstadd_back_bonus.c\
ft_lstdelone_bonus.c\
ft_lstclear_bonus.c\
ft_lstiter_bonus.c\
ft_lstmap_bonus.c

BOBJ = $(BONUS:.c=.o)

all : $(NAME)
$(NAME):$(OBJ)
	ar rcs $(NAME) $(OBJ)
$(OBJ) :$(FILES)
	gcc $(FLAGS) -c $(FILES)
bonus :
	gcc $(FLAGS) -c $(BONUS)
	ar rcs $(NAME) $(BOBJ)
clean :
	rm -f $(OBJ) $(BOBJ)
fclean :
	rm -f $(OBJ) $(NAME) $(BOBJ)
re : all
.PHONY : re all fclean clean

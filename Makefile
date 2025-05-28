CC = cc -Wall -Wextra -Werror

EXEC = push_swap

# Lista plików źródłowych
SRC = main.c parsing/input_valid_join.c parsing/validation_utils.c parsing/validation_utils_2.c

# Tworzenie NAZW plikow obiektowych (na podstawie plików .c)
OBJ = $(SRC:.c=.o)

#Linkowanie biblioteki libft
LIBFT = libft

LIBFTL = $(LIBFT)/libft.a

# Deafult
all: $(EXEC)
	
$(LIBFTL):
	@make -C $(LIBFT)/

# Kompilacja plików .c do plików obiektowych
%.o: %.c | $(LIBFTL)
	$(CC) -c $< -o $@ 

# Linkowanie plików obiektowych z biblioteką minilibx i innymi bibliotekami
$(EXEC): $(OBJ) | $(LIBFTL)
	$(CC) $(OBJ) -o $(EXEC) -L -l $(LIBFTL)

# Usuwanie plików obiektowych
clean:
	rm -f $(OBJ)
	@make clean -C $(LIBFT)

# To samo co clean + plik wykonawczy
fclean: clean
	rm -f $(EXEC)
	@make fclean -C $(LIBFT)

# stworz od nowa ze wszystkim
re: fclean all
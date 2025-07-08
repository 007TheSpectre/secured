##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## Makefile
##

CC	=	gcc

MAKE	=	make

NAME	=	libhashtable.a

SRC_DIR	=	src

OBJ_DIR	=	obj

SRC	=	$(SRC_DIR)/ht_delete.c \
		$(SRC_DIR)/ht_dump.c \
		$(SRC_DIR)/ht_insert.c \
		$(SRC_DIR)/ht_search.c \
		$(SRC_DIR)/delete_hashtable.c \
		$(SRC_DIR)/new_hashtable.c \
		$(SRC_DIR)/hash.c \

OBJ	=	$(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

CFLAGS += -W -Wall -Wextra -Iinclude/

LIB_DIR = lib/

LDFLAGS = $(LIB_DIR)libmy.a $(LIB_DIR)liblinklist.a

all: $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ_DIR) $(OBJ)
	$(MAKE) -C $(LIB_DIR)
	ar rcT $(NAME) $(OBJ) $(LDFLAGS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) -C $(LIB_DIR) clean
	rm -f $(OBJ)
	-rmdir $(OBJ_DIR)

fclean: clean
	$(MAKE) -C $(LIB_DIR) fclean
	rm -f $(NAME)
	rm -f unit_tests

run: all
	./$(NAME)

re: fclean all

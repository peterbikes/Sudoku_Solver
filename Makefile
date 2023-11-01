# **************************************************************************** #
#                                                                 __           #
#    Makefile                                                    / _)          #
#                                                       _/\/\/\_/ /            #
#          By: pedro_mota                             _|         /             #
#      Github: github.com/peterbikes                _|  (  | (  |              #
#    Linkedin: linkedin.com/in/pedrosmpm/         /__.-'|_|--|_|               #
#                                                                              #
# **************************************************************************** #

NAME = sudoku_solver
CC = cc
CFLAGS = -g -Wall -Werror -Wextra
SRCS = main.c ./srcs/print_board.c ./srcs/check_col.c ./srcs/check_row.c ./srcs/solve_this_board.c ./srcs/check_square.c ./srcs/is_solved.c ./srcs/go_back.c ./srcs/fill_board.c
OBJS = $(SRCS:.c=.o)
OBJDIR = ./objs

# speeds
FAST = -DSPEED=100
SLOW = -DSPEED=100000
NOW = -DSPEED=0

${NAME}: ${OBJDIR} | $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	mv $(OBJS) $(OBJDIR)
	make clean

all: $(NAME)

$(OBJDIR): $(OBJS)
	mkdir objs

clean:
	rm -rf objs
	
fclean: clean
	rm -rf $(NAME)
	
re: fclean all

run:
	make re && ./sudoku_solver

slow:
	make fclean	
	$(CC) $(SRCS) $(CFLAGS) $(SLOW) -o $(NAME)
	make clean
	./sudoku_solver

now:
	make fclean	
	$(CC) $(SRCS) $(CFLAGS) $(NOW) -o $(NAME)
	./sudoku_solver

fast:
	make fclean	
	$(CC) $(SRCS) $(CFLAGS) $(FAST) -o $(NAME)
	./sudoku_solver

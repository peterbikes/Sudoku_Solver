/* ************************************************************************** */
/*                                                                __          */
/*   sudoku_solver.h                                             / _)         */
/*                                                      _/\/\/\_/ /           */
/*         By: pedro_mota                             _|         /            */
/*     Github: github.com/peterbikes                _|  (  | (  |             */
/*   Linkedin: linkedin.com/in/pedrosmpm/         /__.-'|_|--|_|              */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_SOLVER_H
#define SUDOKU_SOLVER_H

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>

# define LOCKED "\x1b[33;1m"
# define UNLOCKED "\x1b[32;1m"
# define ZERO "\x1b[31;1m"
# define RESET "\033[0m"
# define SOLVED "\x1b[32;1;3m\n            <---- SOLVED ---->             \n\n\x1b[0m"
# define INSTRUCTIONS "Using only numbers from 1-9, and 0 (or return twice) for empty squares:\nGive me the number at [%d][%d] ~> "
# define INPUT_ERROR "\n\n\n\nNo input other than 0 to 9, try again!!!\n\n\n"
# define ERR_COL "\n\nThere is already a %d at that col!!!\n\n"
# define ERR_ROW "\n\nThere is already a %d at that row!!!\n\n"
# define ERR_SQR "\n\nThere is already a %d at that square!!!\n\n"

# ifndef SPEED
# define SPEED 10000 
# endif

typedef struct s_board
{
    int (*board)[9];
	int number;
	int	square_zero[2];
	int row;
	int col;
    bool (*keys)[9];
} t_board;

void	print_board(t_board *sudoku);
void	solve_this_board (t_board *sudoku);
void	fill_board(t_board *sudoku);
void    find_square_zero(t_board *sudoku);
void	check_if_possible(t_board *sdk);

void	go_back (t_board *sudoku);

bool	check_row(int row, int col, int number, t_board *sudoku);
bool	check_col(int row, int col, int number, t_board *sudoku);
bool    check_square(int row, int col, int number, t_board *sudoku);
bool    is_solved(t_board *sudoku);

#endif

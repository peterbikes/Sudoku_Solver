/* ************************************************************************** */
/*                                                                __          */
/*   is_solved.c                                                 / _)         */
/*                                                      _/\/\/\_/ /           */
/*         By: pedro_mota                             _|         /            */
/*     Github: github.com/peterbikes                _|  (  | (  |             */
/*   Linkedin: linkedin.com/in/pedrosmpm/         /__.-'|_|--|_|              */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/sudoku_solver.h"

bool	is_solved(t_board *sudoku)
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row <= 8)
	{
		while (col <= 8)
		{
			if (sudoku->board[row][col] == 0)
				return (false);
			if ((sudoku->board[row][col] != 0) \
			&& (check_row(row, col, sudoku->board[row][col], sudoku) \
			|| check_col(row, col, sudoku->board[row][col], sudoku)))
				return (false);
			col ++;
		}
		col = 0;
		row++;
	}
	return (true);
}

/* ************************************************************************** */
/*                                                                __          */
/*   check_col.c                                                 / _)         */
/*                                                      _/\/\/\_/ /           */
/*         By: pedro_mota                             _|         /            */
/*     Github: github.com/peterbikes                _|  (  | (  |             */
/*   Linkedin: linkedin.com/in/pedrosmpm/         /__.-'|_|--|_|              */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/sudoku_solver.h"

bool	check_col(int row, int col, int number, t_board *sudoku)
{
	int	col_plus;
	int	col_less;

	col_plus = col;
	col_less = col;
	while (col_plus <= 8)
	{
		if (number == sudoku->board[row][col_plus])
			return (false);
		col_plus++;
	}
	while (col_less >= 0)
	{
		if (number == sudoku->board[row][col_less])
			return (false);
		col_less--;
	}
	return (true);
}

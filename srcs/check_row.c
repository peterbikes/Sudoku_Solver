/* ************************************************************************** */
/*                                                                __          */
/*   check_row.c                                                 / _)         */
/*                                                      _/\/\/\_/ /           */
/*         By: pedro_mota                             _|         /            */
/*     Github: github.com/peterbikes                _|  (  | (  |             */
/*   Linkedin: linkedin.com/in/pedrosmpm/         /__.-'|_|--|_|              */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/sudoku_solver.h"

bool	check_row(int row, int col, int number, t_board *sudoku)
{
	int	row_plus;
	int	row_less;

	row_plus = row;
	row_less = row;
	while (row_plus <= 8)
	{
		if (number == sudoku->board[row_plus][col])
			return (false);
		row_plus++;
	}
	while (row_less >= 0)
	{
		if (number == sudoku->board[row_less][col])
			return (false);
		row_less--;
	}
	return (true);
}

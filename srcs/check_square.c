/* ************************************************************************** */
/*                                                                __          */
/*   check_square.c                                              / _)         */
/*                                                      _/\/\/\_/ /           */
/*         By: pedro_mota                             _|         /            */
/*     Github: github.com/peterbikes                _|  (  | (  |             */
/*   Linkedin: linkedin.com/in/pedrosmpm/         /__.-'|_|--|_|              */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/sudoku_solver.h"

bool	check_mine(int row, int col, int nbr, t_board *sudoku)
{
	int	range;

	range = row + 2;
	while (row <= range)
	{
		if (nbr == sudoku->board[row][col])
			return (false);
		else if (nbr == sudoku->board[row][col + 1])
			return (false);
		else if (nbr == sudoku->board[row][col + 2])
			return (false);
		row++;
	}
	return (true);
}

bool	check_square(int row, int col, int nbr, t_board *sudoku)
{
	if (col >= 0 && col <= 2)
		col = 0;
	else if (col >= 3 && col <= 5)
		col = 3;
	else if (col >= 6 && col <= 8)
		col = 6;
	if (row >= 0 && row <= 2)
		return (check_mine(0, col, nbr, sudoku));
	else if (row >= 3 && row <= 5)
		return (check_mine(3, col, nbr, sudoku));
	else if (row >= 6 && row <= 8)
		return (check_mine(6, col, nbr, sudoku));
	return (true);
}

/* ************************************************************************** */
/*                                                                __          */
/*   go_back.c                                                   / _)         */
/*                                                      _/\/\/\_/ /           */
/*         By: pedro_mota                             _|         /            */
/*     Github: github.com/peterbikes                _|  (  | (  |             */
/*   Linkedin: linkedin.com/in/pedrosmpm/         /__.-'|_|--|_|              */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/sudoku_solver.h"

void	go_back(t_board *sudoku)
{
	while (sudoku->row >= 0)
	{
		while (sudoku->col >= 0)
		{
			if (sudoku->keys[sudoku->row][sudoku->col] == true)
			{
				sudoku->board[sudoku->row][sudoku->col] = 0;
				sudoku->col--;
			}
			else
				sudoku->col--;
			if (sudoku->col == -1)
				break ;
			if (sudoku->board[sudoku->row][sudoku->col] != 9 \
			&& sudoku->keys[sudoku->row][sudoku->col] == true)
			{
				sudoku->number = sudoku->board[sudoku->row][sudoku->col] + 1;
				return ;
			}
		}
		sudoku->col = 8;
		sudoku->row--;
	}
}

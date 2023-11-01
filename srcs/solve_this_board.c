/* ************************************************************************** */
/*                                                                __          */
/*   solve_this_board.c                                          / _)         */
/*                                                      _/\/\/\_/ /           */
/*         By: pedro_mota                             _|         /            */
/*     Github: github.com/peterbikes                _|  (  | (  |             */
/*   Linkedin: linkedin.com/in/pedrosmpm/         /__.-'|_|--|_|              */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/sudoku_solver.h"

void	solve_this_board(t_board *sdk)
{
	sdk->number = 1;
	while (!is_solved(sdk))
	{
		while (sdk->keys[sdk->row][sdk->col] == false)
		{
			if (sdk->col < 8)
				sdk->col++;
			else if (sdk->row >= 0)
			{
				sdk->col = 0;
				sdk->row++;
			}
		}
		if (check_row(sdk->row, sdk->col, sdk->number, sdk) == true \
		&& check_col(sdk->row, sdk->col, sdk->number, sdk) == true \
		&& check_square(sdk->row, sdk->col, sdk->number, sdk) == true \
		&& sdk->keys[sdk->row][sdk->col] == true)
		{
			sdk->board[sdk->row][sdk->col] = sdk->number;
			system("clear");
			print_board(sdk);
			usleep(SPEED);
			sdk->number = 1;
			if (sdk->col < 8)
				sdk->col++;
			else
			{
				sdk->col = 0;
				sdk->row++;
			}
		}
		else
			sdk->number++;
		if (sdk->number > 9)
		{
			go_back(sdk);
			system("clear");
			print_board(sdk);
			usleep(SPEED);
		}
		usleep(SPEED);
	}
	system("clear");
	print_board(sdk);
	printf(SOLVED);
}

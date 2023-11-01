/* ************************************************************************** */
/*                                                                __          */
/*   fill_board.c                                                / _)         */
/*                                                      _/\/\/\_/ /           */
/*         By: pedro_mota                             _|         /            */
/*     Github: github.com/peterbikes                _|  (  | (  |             */
/*   Linkedin: linkedin.com/in/pedrosmpm/         /__.-'|_|--|_|              */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/sudoku_solver.h"

void	fill_board(t_board *sudoku)
{
	int	row;
	int	col;
	int	number;

	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			system("clear");
			sudoku->board[row][col] = -1;
			print_board(sudoku);
			printf(INSTRUCTIONS, row + 1, col + 1);
			number = getchar();
			getchar();
			if (number == 10)
				number = '0';
			if (!check_col(row, col, number - '0', sudoku) && number != 48)
			{
				printf(ERR_ROW, number - '0');
				sleep(1);
				system("clear");
				if (col > 0)
					continue ;
				else
					row--;
				break ;
			}
			if (!check_row(row, col, number - '0', sudoku) && number != 48)
			{
				printf(ERR_COL, number - '0');
				sleep(1);
				system("clear");
				if (col > 0)
					continue ;
				else
					row--;
				break ;
			}
			if (!check_square(row, col, number - '0', sudoku) && number != 48)
			{
				printf(ERR_SQR, number - '0');
				sleep(1);
				system("clear");
				if (col > 0)
					continue ;
				else
					row--;
				break ;
			}
			if (number < '0' || number > '9')
			{
				printf(INPUT_ERROR);
				sleep(1);
				system("clear");
				if (col > 0)
					continue ;
				else
					row--;
				break ;
			}
			sudoku->board[row][col] = number - '0';
			col++;
		}
		row++;
	}
}

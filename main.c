/* ************************************************************************** */
/*                                                                __          */
/*   main.c                                                      / _)         */
/*                                                      _/\/\/\_/ /           */
/*         By: pedro_mota                             _|         /            */
/*     Github: github.com/peterbikes                _|  (  | (  |             */
/*   Linkedin: linkedin.com/in/pedrosmpm/         /__.-'|_|--|_|              */
/*                                                                            */
/* ************************************************************************** */

#include "includes/sudoku_solver.h"

bool	ac_control(int ac)
{
	if (ac != 1)
	{
		printf("Run me again with no arguments;\n");
		return (false);
	}
	return (true);
}

int	main(int ac, char **av)
{
	(void)av;
	t_board	puzzle;
	bool	keys[9][9];
	int		i;
	int		j;
	int values[9][9] = 
	{{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0}};
	if (!ac_control(ac))
		return (EXIT_FAILURE);
	puzzle.board = (int (*)[9])values;
	puzzle.keys = (bool (*)[9])keys;
	fill_board(&puzzle);
	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			if (values[i][j] == 0)
				keys[i][j] = true;
			else
				keys[i][j] = false;
			j++;
		}
		j = 0;
		i++;
	}
	puzzle.keys = (bool (*)[9])keys;
	puzzle.col = 0;
	puzzle.row = 0;
	solve_this_board(&puzzle);
	return (EXIT_SUCCESS);
}

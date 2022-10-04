#include "main.h"

/**
 * free_grid - function that frees a two dimensional grid
 * Description -  function dt dimensional grid previously
 * created byour alloc_grid function.
 *
 *    * @grid: the grid
 *
 *     * @height: height of the grid
 *
 */

void free_grid(int **grid, int height)

{

	int i;



	for (i = 0; i < height; i++)

	free(grid[i]);

	free(grid);

}

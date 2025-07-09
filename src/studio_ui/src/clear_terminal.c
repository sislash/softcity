/******************************************************************************/
/*                                                                            */
/* clear_terminal.c                                                           */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/27 18:07:45 by Xavier.Megnoux                             */
/* Updated: 2025/05/27 18:58:04 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/

#include "clear_terminal.h"
#include <unistd.h>

void clear_terminal(void)
{
	write(1, "\033[2J\033[H", 7);
}

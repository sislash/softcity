/******************************************************************************/
/*                                                                            */
/* ft_putchar.c                                                               */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/07/06 16:15:06 by Xavier.Megnoux                             */
/* Updated: 2025/07/06 16:15:41 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/
#include "../include/ft_putchar.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
}
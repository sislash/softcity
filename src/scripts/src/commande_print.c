/******************************************************************************/
/*                                                                            */
/* commande_print.c                                                           */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/31 03:11:43 by Xavier.Megnoux                             */
/* Updated: 2025/05/31 03:19:25 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/
#include "executer_script.h"
#include "commande_print.h"
#include <unistd.h>
#include <string.h>

void commande_print(void)
{
    write(1, "[PRINT] ", 8);
    write(1, ligne+6, strlen(ligne+6));
    write(1, "\n", 1);
}

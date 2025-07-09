/******************************************************************************/
/*                                                                            */
/* commande_alert.c                                                           */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/31 03:45:02 by Xavier.Megnoux                             */
/* Updated: 2025/05/31 03:46:31 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/

#include "commande_alert.h"
#include "executer_script.h"
#include <unistd.h>
#include <string.h>

void commande_alert(void)
{
    write(1, "[ALERTE] ", 9);
    write(1, ligne+6, strlen(ligne+6));
    write(1, "\n", 1);
}

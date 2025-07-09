/******************************************************************************/
/*                                                                            */
/* commande_check.c                                                           */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/31 03:53:41 by Xavier.Megnoux                             */
/* Updated: 2025/05/31 03:54:28 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/

#include "executer_script.h"
#include "commande_check.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

void commande_check(void)
{
    int check = open(ligne + 6, O_RDONLY);
    if(check >= 0)
    {
        write(1, "[CHECK] Fichier trouvé : ", 25);
        write(1, ligne+6, strlen(ligne+6));
        write(1, "\n", 1);
        close(check);
    }
    else
    {
        write(1, "[CHECK] Introuvable : ", 22);
        write(1, ligne+6, strlen(ligne+6));
        write(1, "\n", 1);
    }
}

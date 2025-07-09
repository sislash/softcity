/******************************************************************************/
/*                                                                            */
/* option_executer_script.c                                                   */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/28 15:12:09 by Xavier.Megnoux                             */
/* Updated: 2025/05/29 17:07:46 by Xavier.Megnoux                             */
/*                                                                            */
/* Softcity - (c) 2025 Xavier Megnoux                                         */
/* Consultation uniquement -- Tout droits réservés                            */
/* Voir LICENSE pour plus d'informations.                                     */
/*                                                                            */
/******************************************************************************/

#include "config.h"
#include "config_commissariat.h"
#include "executer_script.h"
#include "option_executer_script.h"


void executer_script(const char *path);

void police_executer_script(void)
{
    int i=0;
    if(i<1)
    {
        /*execution de script*/
        executer_script(COMMISSARIAT_SCRIPT_FULL_PATH "police_test.dsl");
    }
    i++;
}

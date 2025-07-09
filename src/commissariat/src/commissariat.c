/******************************************************************************/
/*                                                                            */
/* commissariat.c                                                             */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/25 20:06:35 by Xavier.Megnoux                             */
/* Updated: 2025/05/28 12:23:44 by Xavier.Megnoux                             */
/*                                                                            */
/* Softcity - (c) 2025 Xavier Megnoux                                         */
/* Consultation uniquement -- Tout droits réservés                            */
/* Voir LICENSE pour plus d'informations.                                     */
/*                                                                            */
/******************************************************************************/
#include "config.h"
#include "config_commissariat.h"
#include "constitution.h"
#include "executer_script.h"
#include "commissariat.h"
#include "fcntl.h"
#include <unistd.h>

int constitution_valider(const char *service, const char *action);
void executer_script(const char *path);

void commissariat_lancer(void)
{
	int i =0 ;
	while(1)
	{
		if(i<1)
		{
			/*execution de script*/
			executer_script(COMMISSARIAT_SCRIPT_FULL_PATH "police_test.dsl");
		}
		i++;
		usleep(1000000);
	}
	if(constitution_valider("police", "check /etc/passwd")==0)
	{
		write(1, "[POLICE] Action bloquée par la Constitution !!!\n", 49);
		return;
	}
}

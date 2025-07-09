/******************************************************************************/
/*                                                                            */
/* mairie.c                                                                   */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/25 19:15:13 by Xavier.Megnoux                             */
/* Updated: 2025/05/27 21:54:47 by Xavier.Megnoux                             */
/*                                                                            */
/* Softcity - (c) 2025 Xavier Megnoux                                         */
/* Consultation uniquement -- Tout droits réservés                            */
/* Voir LICENSE pour plus d'informations.                                     */
/*                                                                            */
/******************************************************************************/

#include "config.h"
#include "config_mairie.h"
#include "ui_terminal.h"
#include "executer_script.h"
#include "mairie.h"
#include <unistd.h>

void executer_script(const char *path);

void mairie_lancer(void)
{
	int i=0;
	
	while(1)
	{
		/*attente d'un evenement(script, fichier, alarme...)*/
		/*verifier_evenement_mairie();*/
		if(i<1)
		{
			executer_script(MAIRIE_SCRIPT_FULL_PATH "scripts_mairie_demarrage.dsl");
		}
		i++;
		usleep(500000); /*0.5s*/
	}
}

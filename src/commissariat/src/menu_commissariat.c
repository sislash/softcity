/******************************************************************************/
/*                                                                            */
/* menu_commissariat.c                                                        */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/28 12:24:43 by Xavier.Megnoux                             */
/* Updated: 2025/05/29 17:43:02 by Xavier.Megnoux                             */
/*                                                                            */
/* Softcity - (c) 2025 Xavier Megnoux                                         */
/* Consultation uniquement -- Tout droits réservés                            */
/* Voir LICENSE pour plus d'informations.                                     */
/*                                                                            */
/******************************************************************************/
#include "config.h"
#include "config_commissariat.h"
#include "menu_commissariat.h"
#include "executer_script.h"
#include "ui_terminal.h"
#include <unistd.h>
#include <fcntl.h>
//#include <string.h>

void menu_commissariat_choix_script(void);
void executer_script(const char *path);
void menu_principal(void);


void menu_principal_commissariat(void)
{
	char choix[2];

	write(1, "+--------------------------------------+\n", 41);
	write(1, "|            [COMMISSARIAT]            |\n", 41);
	write(1, "|                                      |\n", 41);
	write(1, "| 1 : Menu scripts                     |\n", 41);
	write(1, "|                                      |\n", 41);
	write(1, "| 2 : test                             |\n", 41);
	write(1, "|                                      |\n", 41);
	write(1, "| 3 : Retour menu principale           |\n", 41);
	write(1, "|                                      |\n", 41);
	write(1, "+--------------------------------------+\n", 41);
	write(1, "choix : ",8);

	read(0, choix, 2);
	if(choix[0] =='1')
	{
		executer_script(COMMISSARIAT_SCRIPT_FULL_PATH "pause.dsl");
		menu_commissariat_choix_script();
	}
	else if(choix[0] =='2')
	{
		menu_principal();
	}
	else if(choix[0] =='3')
	{
		menu_principal();
	}
	else
		write(1, "choix invalide.\n", 16);
}

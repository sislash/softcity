/******************************************************************************/
/*                                                                            */
/* centre_commandement.c                                                      */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/25 19:11:24 by Xavier.Megnoux                             */
/* Updated: 2025/05/28 12:43:01 by Xavier.Megnoux                             */
/*                                                                            */
/* Softcity - (c) 2025 Xavier Megnoux                                         */
/* Consultation uniquement -- Tout droits réservés                            */
/* Voir LICENSE pour plus d'informations.                                     */
/*                                                                            */
/******************************************************************************/
#include "config.h"
#include "centre_commandement.h"
#include "ui_terminal.h"
#include "clear_terminal.h"
#include "mairie.h"
#include "tribunal.h"
#include "commissariat.h"
#include "pompier.h"
#include "hopital.h"
#include <unistd.h>

void clear_terminal(void);
void ui_terminal_lancer(void);

void init_softcity(void)
{
	write(1, "[MCP] Bonjour bienvenue dans la ville SoftCity !\n", 50);
	write(1, "[MCP] Lancement des diferent service... \n",42);

	if(fork() == 0)
		mairie_lancer();
	write(1, "[MAIRIE] Bonjour service lancer !\n", 34);
	if(fork() == 0)
		tribunal_lancer();
	write(1, "[TRIBUNAL] Bonjour service lancer !\n", 36);
	if(fork() == 0)
		commissariat_lancer();
	write(1, "[POLICE] Bonjour service lancer !\n", 34);
	if(fork() == 0)
		pompier_lancer();
	write(1, "[POMPIER] Bonjour service lancer !\n",35);
	if(fork() == 0)
		hopital_lancer();
	write(1, "[HOPITAL] Bonjour service lancer !\n",35);
}

int main()
{
	int i=0;
	clear_terminal();
	while(1)
	{
		if(i<1)
		{
			init_softcity();
			usleep(500000);
			ui_terminal_lancer();
		}
		i++;
		usleep(500000);
	}
	return 0;
}

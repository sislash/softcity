/******************************************************************************/
/*                                                                            */
/* ui_terminal.c                                                              */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/26 08:04:24 by Xavier.Megnoux                             */
/* Updated: 2025/05/27 18:17:15 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/
#include "menu_commissariat.h"
#include "commissariat.h"
#include "pompier.h"
#include "hopital.h"
#include "ui_terminal.h"
#include "grille.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

void menu_principal_commissariat(void);
void mairie_lancer(void);
void commissariat_lancer(void);
void pompier_lancer(void);
void hopital_lancer(void);
void afficher_grille(void);

void enregistrer_choix(const char *texte)
{
	int fd =open("../softcity/src/studio_ui/logs/historique.log", O_WRONLY | O_CREAT | O_APPEND, 0644);
	if(fd >= 0)
	{
		write(fd, texte, strlen(texte));
		write(1, "\n", 1);
		close(fd);
	}
}

void menu_principal(void)
{
	char choix[2];

	write(1, "+-------------------------------------+\n", 40);
	write(1, "|                 [MENU]              |\n", 40);
	write(1, "|                                     |\n", 40);
	write(1, "| 1 : Entrer dans la [MAIRIE]         |\n", 40);
	write(1, "| 2 : Entrer dans la [POLICE]         |\n", 40);
	write(1, "| 3 : Entrer dans le [POMPIER]        |\n", 40);
	write(1, "| 4 : Entrer dans l' [HOPITAL]        |\n", 40);
	write(1, "|                                     |\n", 40);
	write(1, "+-------------------------------------+\n", 40);
	write(1, "Choix : ", 8);

	read(0, choix, 2);
	if(choix[0]=='1')
	{
		enregistrer_choix("Entrer dans la [MAIRIE]");
		mairie_lancer();
	}
	else if(choix[0]=='2')
	{
		enregistrer_choix("Entrer dans le [COMMISSARIAT]");
		menu_principal_commissariat();
	}
	else if(choix[0]=='3')
	{
		enregistrer_choix("Entrer dans la [CASERNE]");
		pompier_lancer();
	}
	else if(choix[0]=='4')
	{
		enregistrer_choix("Entrer dans l'[HOPITAL]");
		hopital_lancer();
	}
	else
		write(1, "choix invalide.\n", 16);

}

void ui_terminal_lancer()
{
	write(1, "[UI_TERMINAL] Bonjour service lancer !\n", 39);
	menu_principal();
}

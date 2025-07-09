/******************************************************************************/
/*                                                                            */
/* afficher_map.c                                                             */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/26 23:30:59 by Xavier.Megnoux                             */
/* Updated: 2025/05/27 00:24:50 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/
#include "/home/sckavens/Piscine_C/softcity/src/studio_ui/include/grille.h"
#include "../include/afficher_map.h"

void init_grille(void);
void placer_grille(int x, int y, const char *teste);
void mettre_agent_grille(int x, int y, char symbole);
void afficher_grille(void);

void afficher_map(void)
{
	init_grille();
	placer_grille(2,2,"[MAIRIE]");
	placer_grille(22,2,"[POLICE]");
	placer_grille(2,4,"[POMPIER]");
	placer_grille(22,4,"[HOPITAL]");
	placer_grille(2,6,"[LOIS]");
	placer_grille(22,6,"[SCRIPTS]");
	placer_grille(2,8,"[VISION]");
	mettre_agent_grille(16,3,'@');
	afficher_grille();
}

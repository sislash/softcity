/******************************************************************************/
/*                                                                            */
/* grille.c                                                                   */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/25 23:15:42 by Xavier.Megnoux                             */
/* Updated: 2025/05/26 20:14:24 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/

#include "grille.h"
#include <unistd.h>

static char grille[GRILLE_LIGNES][GRILLE_COLS];

void init_grille(void)
{
	int y,x;
	for(y=0;y<GRILLE_LIGNES;y++)
		for(x=0;x<GRILLE_COLS;x++)
			grille[y][x]= ' ';
}

void placer_grille(int x, int y, const char *texte)
{
	int i =0;
	while(texte[i] && (x+i) < GRILLE_COLS)
	{
		grille[y][x+i]=texte[i];
		i++;
	}
}

void mettre_agent_grille(int x, int y, char symbole)
{
	if(x >= 0 && x < GRILLE_COLS && y >= 0 && y < GRILLE_LIGNES)
		grille[y][x]= symbole;
}

void afficher_grille(void)
{
	int y;
	for(y=0;y<GRILLE_LIGNES;y++)
	{
		write(1, grille[y], GRILLE_COLS);
		write(1, "\n", 1);
	}
}

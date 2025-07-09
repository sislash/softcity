/******************************************************************************/
/*                                                                            */
/* grille.h                                                                   */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/25 23:24:04 by Xavier.Megnoux                             */
/* Updated: 2025/05/26 23:28:58 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/

#ifndef GRILLE_H
#define GRILLE_H

#define GRILLE_LIGNES 15
#define GRILLE_COLS 50
/*Prototype*/
void init_grille(void);
void placer_grille(int x, int y, const char *texte);
void mettre_agent_grille(int x, int y, char symbole);
void afficher_grille(void);

#endif /*GRILLE_H*/


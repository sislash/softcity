/******************************************************************************/
/*                                                                            */
/* executer_script.h                                                          */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/26 14:02:48 by Xavier.Megnoux                             */
/* Updated: 2025/05/26 14:05:03 by Xavier.Megnoux                             */
/*                                                                            */
/* Softcity - (c) 2025 Xavier Megnoux                                         */
/* Consultation uniquement -- Tout droits réservés                            */
/* Voir LICENSE pour plus d'informations.                                     */
/*                                                                            */
/******************************************************************************/

#ifndef EXECUTER_SCRIPT_H
#define EXECUTER_SCRIPT_H

extern char ligne[128];

/*Prototype*/

void commande_check(void);
void executer_script(const char *path);

#endif /*EXECUTER_SCRIPT_H*/

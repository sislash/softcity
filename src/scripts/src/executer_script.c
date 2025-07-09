/******************************************************************************/
/*                                                                            */
/* executer_script.c                                                          */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/26 13:32:24 by Xavier.Megnoux                             */
/* Updated: 2025/05/26 17:58:32 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/
#include "config.h"
#include "config_commissariat.h"
#include "executer_script.h"
#include "commande_print.h"
#include "commande_pause.h"
#include "commande_alert.h"
#include "commande_check.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>

char c, ligne[128];

void executer_script(const char *path)
{
	
	int fd=open(path, O_RDONLY);
	if(fd < 0)
	{
		/*fprintf(stderr, "[DEBUG] ERREUR fopen : chemain = %s\n", path);*/
		write(1, "[SCRIPT] Fichier script introuvable\n", 36);
		return;
	}
	int i=0;

	while(read(fd, &c, 1) >0)
	{
		if(c=='\n' || i>=127)
		{
			ligne[i] = '\0';
			i=0;

			/*Interpretation*/

			if(strncmp(ligne, "print ", 6)==0)
			{
				commande_print();
			}
			else if(strncmp(ligne, "pause ", 6)==0)
			{
				commande_pause();
			}
			else if(strncmp(ligne, "alert ", 6)==0)
			{
				commande_alert();
			}
			else if(strncmp(ligne, "check ", 6)==0)
			{
				commande_check();
			}
		}
		else
			ligne[i++]=c;
	}
	close(fd);
}

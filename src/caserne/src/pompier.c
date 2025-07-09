/******************************************************************************/
/*                                                                            */
/* pompier.c                                                                  */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/25 20:32:06 by Xavier.Megnoux                             */
/* Updated: 2025/05/27 21:18:36 by Xavier.Megnoux                             */
/*                                                                            */
/* Softcity - (c) 2025 Xavier Megnoux                                         */
/* Consultation uniquement -- Tout droits réservés                            */
/* Voir LICENSE pour plus d'informations.                                     */
/*                                                                            */
/******************************************************************************/

#include "pompier.h"
#include "pompier_intervention.h"
#include "constitution.h"
#include "log_caserne.h"
#include <unistd.h>

void pompier_lancer(void)
{
	int i =0;
	while(1)
	{
		if(i<1)
		{
			write(1, "[POMPIER] test pompier !\n", 25);
			write(1, "test1\n", 6);
			log_caserne("[POMPIER] Intervention\n");
			write(1, "test2\n", 6);
			write(1, "[POMPIER] Intervention\n", 23);
			write(1, "test3\n", 6);
			pompier_intervenir("police", "Service non réactif\n");
		}
		i++;
		usleep(500000); /*0.5s*/
	}
}

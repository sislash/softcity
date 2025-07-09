/******************************************************************************/
/*                                                                            */
/* hopital.c                                                                  */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/26 07:22:29 by Xavier.Megnoux                             */
/* Updated: 2025/05/28 11:59:42 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/

#include "../include/hopital.h"
#include <unistd.h>

void hopital_lancer(void)
{
	int i =0;
	while(1)
	{
		if(i<1)
		{
			write(1, "[HOPITAL] Pour le moment je ne fais rien !\n", 43);
		}
		i++;
		usleep(500000);
	}
}

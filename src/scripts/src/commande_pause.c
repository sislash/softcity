/******************************************************************************/
/*                                                                            */
/* commande_pause.c                                                           */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/31 03:34:38 by Xavier.Megnoux                             */
/* Updated: 2025/05/31 03:36:43 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/
#include "config.h"
#include "config_commissariat.h"
#include "executer_script.h"
#include "commande_pause.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>

void commande_pause(void)
{
    char *p;
    char chemin[256];
    snprintf(chemin,sizeof(chemin), "%spause.dsl",COMMISSARIAT_SCRIPT_PATH);

    int  pause=open(chemin, O_RDONLY);
    char buffer[128];
    int  n=0;

    if(pause >= 0)
    {
        ssize_t bytes_read = read(pause, buffer, 127);

        if(bytes_read>0)
            buffer[bytes_read]='\0';
        else
            buffer[0]='\0';

        close(pause);

        p=buffer;
        if(strncmp(p, "pause ", 6)==0)
        {
            p+= 6;

            while(*p>='0' && *p<='9')
            {
                n=n*10+(*p-'0');
                p++;
            }
        }
        usleep(n);
    }
}

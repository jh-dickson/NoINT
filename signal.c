#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void kill_handler (int sig)
{
    printf("Signal detected\n");
}

int main()
{
    while (1==1)
    {
        if (signal(SIGINT, kill_handler) == SIG_ERR)
        {
            printf("\nNo interrupt\n");
        }
        if (signal(SIGTERM, kill_handler) == SIG_ERR)
        {
            printf("\nNo interrupt\n");
        }

        printf("Hello\n");
        sleep(3);
    }
}
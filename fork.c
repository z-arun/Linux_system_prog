#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

void main()
{
    printf("PID:%d PPID%d\n",getpid() ,getppid());
    pid_t p = fork();
    for(;;){
        sleep(1);
        if(p == 0)
        {
            printf("Loop from child PID:%d PPID:%d\n",getpid(),getppid());
        }
        else
        {
            printf("Loop  from parent  PID:%d PPID:%d\n",getpid(),getppid());
        }
    }


}

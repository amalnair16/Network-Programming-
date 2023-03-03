#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
int main(int argc, char*argv[])
{
	int pid;
	pid=fork();
	if(pid==0)//child process
	{
		execv("/home/meteyn/Desktop/np/prog2",argv);

	}
	wait(NULL);
	exit(0);
}

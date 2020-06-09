#include <ctype.h>
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/wait.h>

#include <getopt.h>


int main(int argc, char** argv){

	pid_t pid;
	int status;
	
	switch(pid=fork()){
		case -1:{
			perror("fork");
			exit(1);
		}
		case 0:{
			sleep(10);
			printf("\nCHILD: это я!\n");
			printf("CHILD: Мой PID = %d\n", getpid());
			printf("CHILD: PID моего родителя = %d\n", getppid());
			exit(0);
		}
		default:{
			printf("\nPARENT: это я\n");
			printf("PARENT: мой PID = %d\n", getpid());
			printf("PARENT: PID моего ребенка = %d\n", pid);
			sleep(25);
			printf("PARENT: Сына, я задремал, ты где?!\n");
			exit(0);
		}
	}

	printf("The End! \n");
	return 0;

}

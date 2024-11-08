/* Find max number of child processes that can be created on Linux using C program? Hint: use fork() in inﬁnite loop (wisely). */






/* pid < 0: Fork failed (no child process created). Handle error.
   pid == 0: This is the child process (do child-specific tasks here).
   pid > 0: This is the parent process (do parent-specific tasks here, such as counting the child processes created).*/



#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() 
{
    int pid;
    int count = 0;

	while (1)
	{
    	pid = fork();

		if (pid == -1)

		{
    		printf("fork Failed!\n");
    		printf("Maximum number of processes created : %d\n", count);

   		 	exit(1);

		}

		else if (pid > 0)
		{
    		count++;
		}

		else
		{
    		exit(0);
		}

   	}

  return 0;

}

#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints Parent Process ID 
 * Run your program several times within the same shell. It should be the same.
 * Use the system call getppid (man 2 getppid)
 *
 * Return: Always 0.
 */

int main()
{
    int p_id, p_pid;

    p_id = getpid(); /*process id*/
    p_pid = getpid(); /*parent process id*/

    printf("Process ID: %d\n", p_id);
    printf("Parent Process ID: %d\n", p_pid);

    return 0;
}

#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints Parent Process ID 
 * Anytime you run the process, a new process is created
 * This new process has the same output/value
 * Use the system call getppid (man 2 getppid)
 * check back on this code
 *
 * Return: Always 0.
 */

int main()
{
    int p_id, p_pid;

    p_id = getpid(); //Prints the Process Id
    p_pid = getpid(); //Parent process Id

    printf("Process ID: %d\n", p_id);
    printf("Parent Process ID: %d\n", p_pid);

    return (0);
}
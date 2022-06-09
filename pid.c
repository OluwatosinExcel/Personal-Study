#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints Process ID 
 * Anytime you run the process, a new process is created
 * This new process has a different ID
 * Use the system call getpid (man 2 getpid)
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t my_pid;

    my_pid = getpid();
    printf("%u\n", my_pid);
    return (0);
}
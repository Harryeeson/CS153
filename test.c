#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
    // printf(1, "partb\n");
    // exit(0);
    int child_pid;
    int status;

    child_pid = fork();

    if (child_pid == 0)
    {
        printf(1, "Child PID is %ld\n", (long) getpid());
        // in child; do stuff including perhaps exec
    }
    else if (child_pid == -1)
    {
        exit(-1);
    }
    else
    {
        if (waitpid(child_pid, &status, 0) == child_pid)
        {
            // child exited or interrupted; now you can do something with status
                    printf(1, "Parent PID is %ld\n", (long) getpid());
        }
        else
        {
            exit(-1);
        }
    }
    return 0;
}

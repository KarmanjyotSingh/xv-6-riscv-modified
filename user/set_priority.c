#include "../kernel/types.h"
#include "../kernel/stat.h"
#include "user.h"
#include "../kernel/fcntl.h"

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("Usage: set_priority <new_static_priority> <pid of process >\n");
        exit(1);
    }
    int new_static_priority = atoi(argv[1]);
    int pid = atoi(argv[2]);

    int old_static_priority = set_priority(new_static_priority, pid);
    printf("<process_pid> = %d \nold_static_priority =  %d\nnew_static_priority = %d\n", pid, old_static_priority, new_static_priority);
    exit(0);
}
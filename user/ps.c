#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/pstat.h"

int
main(void)
{
    struct pstat pstat;

    if (getpinfo(&pstat))
        exit(1);

    fprintf(1, "PID\tPPID\tPRIORITY\tSIZE\tSTATE\t\tNAME\n");

    for (uint64 i = 0; i < pstat.processes; i++)
        fprintf(1, "%d\t%d\t%d\t\t%d\t%s\t%s\n", pstat.pid[i], pstat.ppid[i], pstat.priority[i], pstat.sz[i], pstat.state[i], pstat.name[i]);

    exit(0);
}

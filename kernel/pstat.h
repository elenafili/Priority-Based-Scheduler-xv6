#ifndef _PSTAT_H_
#define _PSTAT_H_

#include "types.h"
#include "param.h"

struct pstat {
  int processes;                // Number of processes
  int pid[NPROC];               // Process ID
  int ppid[NPROC];              // Parent process
  int priority[NPROC];          // Process priority
  char state[NPROC][9];         // Process state
  char name[NPROC][16];         // Process name (debugging)
  uint64 sz[NPROC];             // Size of process memory (bytes)
};

#endif // _PSTAT_H_

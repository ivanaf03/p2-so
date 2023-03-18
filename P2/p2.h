//**********Ivan Alvarez Fernandez**********
//**********ivan.alvarez.fernandez**********
//************Marcos Gomez Tejon************
//*****************m.tejon******************
//*************Rita Pardo Lopez*************
//****************rita.pardo****************

#ifndef P2_2
#define P2_2

#define MAXDATA 4096
#define MAX 1024
#define TAMANO 2048

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <linux/types.h>
//#include <linux/ipc.h>
//#include <linux/sem.h>
#include <sys/mman.h>
#include <sys/shm.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <time.h>
#include <sys/wait.h>
#include "mem.h"

/*
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <sys/utsname.h>
#include <sys/stat.h>
#include <errno.h>
#include <ctype.h>
#include <fcntl.h>
#include <stdbool.h>
#include <dirent.h>
#include <grp.h>
#include <pwd.h>
*/



void comAllocate(char *trozos[], tListM *list_mem);

void comDeallocate(char *trozos[], tListM *list_mem);

void comIo(char *trozos[], char *comando);

void comMemdump(char *trozos[], char *comando);

void comMemfill(char *trozos[], char *comando);

void comMemory(char *trozos[], tListM list_mem);

void comRecurse(char *trozos[]);

#endif
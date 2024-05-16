#include <stdio.h>
#include <pthread.h>

pthread_t stressTest;
char buffer[100];
int a = 0, b = 1, c;
int cpuClock;
FILE *cpuCurrentFreq;

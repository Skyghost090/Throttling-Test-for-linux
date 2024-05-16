#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

int clockSpeed(){
    FILE *cpuCurrentFreq = fopen("/sys/devices/system/cpu/cpu0/cpufreq/scaling_cur_freq", "r");
    fread(buffer,sizeof(char) * 2,1,cpuCurrentFreq);
    int cpuClock = atoi(buffer);
    return cpuClock;
}

void thermalEvent(){
    if(clockSpeed() == int(clockSpeed() - 10)){
        printf("thermal detected\n");
        system("killall main");
    }
}

int main(){
    int initClock = clockSpeed();
    while(1){
        sleep(1);
        cpuCurrentFreq = fopen("/sys/devices/system/cpu/cpu0/cpufreq/scaling_cur_freq", "r");
        fread(buffer,sizeof(char) * 2,1,cpuCurrentFreq);
        cpuClock = atoi(buffer);
        if(int(initClock - 10) == cpuClock){
            printf("thermal detected\n");
            exit(0);
        }
    }
}

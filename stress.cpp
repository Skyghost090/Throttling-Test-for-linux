#define _POSIX_SOURCE
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include <stdio.h>
#include <sys/wait.h>
#include "main.h"

void stress(){
    pid_t pid = fork();
    if(pid == 0) {
        system("killall stress > /dev/null");
        exit(0);
    } else if(pid < 0) { // Erro ao criar o processo filho
        perror("Error creating child process\n");
        exit(1);
    } else { // Processo pai
    // Espera o processo filho terminar para evitar zumbis
        fork();
    }
}

int main(){
    printf("please before this test put cpu governor on performance...\n");
    nice(15);
    while(1){
        stress();
    }
}

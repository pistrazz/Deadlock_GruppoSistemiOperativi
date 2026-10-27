#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {

    
    int n=0;

    printf("\n\n========== Esercizio Rifornimento Gruppo 4 ==========\n\n");
    sleep(1);
    printf("\n\nInserisci quante auto devono fare rifornimento: ");
    scanf("%d", &n);

    pid_t pid[n];

    for(int i=0; i<n; i++){

            pid[i]= fork();

            if(pid[i]<0){
                perror("\n\nFork Fallita!\n\n");
                exit(0);
            }


            else if(pid[i] == 0){
                //figlio();
                exit(0);
            }

            else {
                //Padre
                sleep(1);
            }
    }

    printf("\n\nTutte le macchine sono state rifornite con successo!!\n\n");
    exit(0);





}

//Aula: Disciplina de Programação Concorrente 2020/1- Processos
#include<bits/stdc++.h>
#include<unistd.h>
// #include<errno.h>
#include<sys/wait.h>
using namespace std;

int main(){
    int i = 0;
    int valor = 10;

    for(i=0;i<2;i++){
        pid_t pid = fork();

        if(pid ==0)
            valor++;
        else{
            valor--;
            waitpid(pid,NULL,0);
        }
    }
    cout<<"Valor: "<<valor<<endl;

    return 0;
}
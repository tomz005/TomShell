#include <bits/stdc++.h>
#include <unistd.h>
#include <sys/wait.h>
#include "functions.h"
using namespace std;
void sycmd(char command[],char *arg[])
{
    int status;
    if(fork()!=0)
        {
            //Parent process
            wait(NULL);
        }
        else
        {
            //fflush(stdout);
            status=execvp(command,(char* const *)arg);
           // fflush(stdout);
            //cout<<"Done"<<endl;
            if(status<0)
            {
                cout<<"Command doesn't exist"<<endl;
                exit(0);
            }
            //not working
            //cout<<"Done"<<endl;
        }
}
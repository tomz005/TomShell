#include <bits/stdc++.h>
#include <unistd.h>
#include <sys/wait.h>
#include "functions.h"
using namespace std;
int main()
{
    //Initialization
    char command[100];
    char *param[20];
    int status;
    //Loop

    while(1)
    {
        display();
        //cout<<*param<<endl;
        read_inp(command,param);
       // cout<<*param<<endl;
        //if command is exit -> break the loop
        if(strcmp(command,"exit")==0)
        {
            break;
        }
        //cout<<*param<<endl;
        if(fork()!=0)
        {
            //Parent process
            wait(NULL);
        }
        else
        {
            status=execvp(command,(char* const *)param);
            if(status<0)
            {
                cout<<"Command doesn't exist"<<endl;
            }
        }
        
    }
    //End

    return 0;
}
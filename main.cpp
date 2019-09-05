#include <bits/stdc++.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "functions.h"
using namespace std;

int main()
{
    //Initialization
    char *command[100];
    char *param[20];
    char *arg[20];
    int status;
   bool pip=0,red=0;
   int pip_count=0;
    //Loop

    while(1)
    {
        red=0;
        display();
        //cout<<*param<<endl;
        read_inp(command,param,arg,red);
       // cout<<*param<<endl;
        //if command is exit -> break the loop
        if(strcmp(arg[0],"exit")==0)
        {
            break;
        }
        //cout<<*param<<endl;
        if(strcmp(arg[0],"cd")==0)
        {
           bicmd(arg[0],param);
           //cout<<param[0]<<endl;
        //    if(chdir((const char *)param)<0)
        // {
        //     perror("cd");
        //     cout<<"error"<<endl;
        // }
        // if(chdir((const char *)param[0])>0)
        // cout<<"Changed";
        }
        if(red)
        {
            int saved=dup(1);
            int fd = open(command[1], O_WRONLY|O_TRUNC|O_CREAT, 0644);
            close(1);
            dup2(fd,1);
            sycmd(arg[0],arg);
            dup2(saved,1);
        }
        else
        {
            //cout<<arg[0]<<endl;
            sycmd(arg[0],arg);
        }
        /*if(fork()!=0)
        {
            //Parent process
            wait(NULL);
        }
        else
        {
            //cout<<*param<<endl;
            //cout<<*arg<<endl;
           //strcpy(arg,command);
            //arg.append(param);
            status=execvp(command,(char* const *)arg);
            if(status<0)
            {
               cout<<"Command doesn't exist"<<endl;
               exit(0);
            }
        }*/
        
    }
    //End

    return 0;
}
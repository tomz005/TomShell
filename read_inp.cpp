#include "functions.h"
#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

void parse_str(char *command[],char *param[],char *arg[],char line[])
{
    int i=0,j=0,t=0;
    stringstream ss(line);
    string word;
    ss>>word;
    command[i]=(char *)malloc(word.length()*sizeof(char *));
    strcpy(command[t++],word.c_str());
    arg[0]=(char *)malloc(word.length()*sizeof(char *));
    strcpy(arg[0],word.c_str());
    int k=1;
    while(ss>>word)
    {
        param[i]=(char *)malloc(word.length()*sizeof(char *));
        strcpy(param[i++],word.c_str());
        arg[k]=(char *)malloc(word.length()*sizeof(char *));
        strcpy(arg[k++],word.c_str());
    }
      
    param[i]=(char *)NULL;
    arg[k]=(char *)NULL;
}
void read_inp(char *command[],char *param[],char *arg[],bool &red,bool &pip,bool &rred,char *command2[],char *param2[],char *arg2[])
{
    char line[1024];
    int count=0,i=0,j=0;
    //bool pip,red;
    char  *str,*out_file;
    char prev;
    while(1)
    {
       
       
        char ch;
        ch=getchar();
        //cerr<<"111";

        if(ch=='|')
        {
            pip=1;
            prev = ch;
           // pip_count++;
        }
        if(ch=='>')
        {
            prev=ch;
            red=1;
        }
        if(prev=='|' && ch ==' ')
         {
             prev='\0';
             continue;
         }
        if(prev=='>' && ch ==' ')
        {
            prev='\0';
            continue;
        }
         if(prev=='>' && ch =='>')
        {
            //prev='>';
            red=0;
            rred=1;
            prev='\0';
        }
        if(ch=='\n')
        break;
        line[count++]=ch;
        

    }
     prev='\0';
    line[count]='\0';

     if(pip==1)
    {
        str=strtok(line,"|");
        parse_str(command,param,arg,str);
        str=strtok(NULL,"|");
        parse_str(command2,param2,arg2,str);

    }
    if(red==1)
    {
        str=strtok(line,">");
        //cout<<str<<endl;
        parse_str(command,param,arg,str);
        //cout<<str<<endl;
        command[1]=strtok(NULL,">");
        //cout<<str<<endl;

    }
      else if(rred==1)
    {
        str=strtok(line,">>");
        //cout<<str<<endl;
        parse_str(command,param,arg,str);
        //cout<<str<<endl;
        command[1]=strtok(NULL,">>");
        //cout<<str<<endl;

    }
    else
    {
        //cout<<line<<endl;
        parse_str(command,param,arg,line);
    }

}
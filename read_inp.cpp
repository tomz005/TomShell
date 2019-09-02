#include "functions.h"
#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
void read_inp(char cmd[],char *arr[])
{
    char line[1024];
    int count=0,i=0,j=0;
    char  *str;
    while(1)
    {
        char ch;
        ch=getchar();
        if(ch=='\n')
        break;
        line[count++]=ch;
        
    }
    line[count]='\0';
    //str=strtok(line," ");
    stringstream ss(line);
    string word;
    while(ss>>word)
    {
        arr[i]=(char *)malloc(word.length()*sizeof(char *));
        strcpy(arr[i++],word.c_str());
    }
    //cout<<str<<endl;
   
    strcpy(cmd,arr[0]);
      
    arr[i]=(char *)NULL;
    //cout<<*par[0]<<endl;
}
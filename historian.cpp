#include "functions.h"
#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void historian(char *arg1[], char *arg2[])
{
    FILE *fp;
    char* str = (char *)malloc(20);
    fp=fopen("hist.txt","a+");
    if(fp == NULL)
    cout<<"File Doesnt exist";
    else
    {
        //cout<<"yes"<<endl;
        int i=0;
       while(arg1[i]!=(char *)NULL)
       {
          char *s=arg1[i++];
            strcat(str, s);
            strcat(str," ");
       }
       i=0;
       //cerr<<"arg1"<<endl;
       //cerr<<":"<<endl;
       //cerr<<"arg2"<<endl;
       //cout<<str<<endl;
       fprintf(fp,"%s\n",str);
       fclose(fp);
    }
}
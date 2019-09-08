#include "functions.h"
#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>
#include <unordered_map>
#include <iostream>
using namespace std;

void init(std::unordered_map<std::string,std::string> &m)
{
    fstream f;
    string word,key,value;
    f.open(".myrc");
    while(f>>word)
    {
       //cout<<word;
        //char *v=word;
        key=word;
        f>>word;
        value=word;
        m[key]=value;
        //cout<<word<<endl;
        
    }
    // FILE *fp;
    // string key,value;
    // fp = fopen(".myrc","r");
    // if(fp!=NULL)
    // {
    //     //cout<<"Success"<<endl;
    //     string s[5]={"PATH","HOME","USER","HOSTNAME","PS1"};
    //     for(int i=0;i<5;i++)
    //     {
    //         key="$";
    //         if(getenv(s[i].c_str())!=NULL)
    //         {
    //             key.append(s[i]);
    //             value=getenv(s[i].c_str());
    //             //cout<<key<<" "<<value<<endl;
    //             m[key]=value;
    //             string st=key+" "+value+"\n";
    //             fputs(st.c_str(),fp);
    //         }
    //     }
        
    // }
  
}
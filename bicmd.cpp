#include <unistd.h>
#include <bits/stdc++.h>
#include <wordexp.h>
using namespace std;
void bicmd(char cmd[],char *par[])
{
    //cout<<*par<<endl;
       wordexp_t p;
    char **w;
    int i;
    //cout<<par[0][0]<<endl;
    if(par[0][0]=='~')
    {
        wordexp(par[0], &p, 0);
        w = p.we_wordv;
        //cout<<*w<<endl;
        par=w;
    }
    
    if(chdir((const char *)par[0])<0)
    {
        perror("cd");
        cout<<"error";
    }
}
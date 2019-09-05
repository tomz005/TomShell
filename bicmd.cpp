#include <unistd.h>
#include <bits/stdc++.h>
using namespace std;
void bicmd(char cmd[],char *par[])
{
    //cout<<*par<<endl;
    if(chdir((const char *)par[0])<0)
    {
        perror("cd");
        cout<<"error";
    }
}
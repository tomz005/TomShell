#include "functions.h"
#include <iostream>
#include <unistd.h>
#include <pwd.h>
#include <sys/types.h>
using namespace std;
void display()
{
    //cout<<getuid()<<":";
    struct passwd *pws;
    pws=getpwuid(getuid());
    cout<<pws->pw_name<<"@tomshell:~";
    if(getuid()>0)
    printf("$ ");
    else
    printf("# ");
}
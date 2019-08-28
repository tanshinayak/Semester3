#include <unistd.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
    int msize = 20;
    char msg[] = "Message Passing";
    char buf[msize];
    int p[2];
    int a = pipe(p);
    if (a < 0)
        exit(1);
    write(p[1], msg, msize);
    read(p[0], msg, msize);
    cout << buf << endl;
    return 0;
}
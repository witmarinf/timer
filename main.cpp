#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;

struct tm;

int main() {


    //cout<<now<<endl;
    int i=0;

    for(int i=0;;i++) {
       //static
        time_t now = time(NULL);
        tm *dt = localtime(&now);
        cout << 1900 + dt->tm_year << ":" << 1 + dt->tm_mon << ":" << dt->tm_mday
             << ":" << dt->tm_hour << ":" << dt->tm_min << ":" << dt->tm_sec << endl;
        Sleep(1000);
    }
    return 0;
}

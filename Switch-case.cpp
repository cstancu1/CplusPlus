#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"n="; cin>>n;
    if(n > 3 || n<1){
        cout<<"n trebuie sa fie intre 1 si 3";
        return 0;
    }
    switch(n){
    case 3:
        cout<<"ati introdus 3";
        break;
    case 2:
        cout<<"ati introdus 2";
        break;
    case 1:
        cout<<"ati introdus 1";
        break;
    }
}

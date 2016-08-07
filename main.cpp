#include <iostream>

using namespace std;




int factorial(int x)
{
    int y=1;
    for (int i = 1; i <=x ; i++) {
        y*=i;
    }
    return y;
}

int main() {
    int a=5,b=0;
    b = factorial(a);
    cout<<b<<endl;
    return b;
}

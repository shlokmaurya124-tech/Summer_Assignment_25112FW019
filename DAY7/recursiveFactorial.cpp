#include <iostream>
using namespace std;

int recurFact(int num)
{
    if(num==0 ||  num==1) {
        return 1;
    } 
    else {
        return  num * (recurFact(num - 1));
}
}

int main()
{
    int n, fac;
    cout << "Enter the number : ";
    cin >> n;
    fac = recurFact(n);
    cout << fac << endl;
    return 0;
}
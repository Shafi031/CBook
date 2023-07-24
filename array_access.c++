#include <iostream>
using namespace std;
int main()

{
    int a[5] = {3,2,9,4,6};

    cout << a[1] << " " << a[0] << " " << a[3] ;
    cout << a[4] << " " << a[2]<< endl;

    int sum = 0;
    for (int i = 4; i>= 0; --i)
     sum = sum + a[i];
     cout << "Sum is ::::: " << sum << endl;

     return 0;




}
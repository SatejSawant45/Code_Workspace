#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x=4;
    int *p_x = &x;//pointer.
    int **p_p_x=&p_x;//Double pointer.
    cout<<"&x - "<<&x<<endl;           
    cout<<"p_x - "<<p_x<<endl;
    cout<<"*p_x - "<<*p_x<<endl;
    *p_x=5;//Changing value through pointer.
    cout<<"x - "<<*p_x<<endl;
    cout<<"p_x +1  - "<<p_x +1<<endl;
    p_p_x=&p_x;
    cout<<"**p_p_x  -  "<<**p_p_x<<endl;
    cout<<"*p_p_x  - "<<*p_p_x<<endl;
    return 0;
}
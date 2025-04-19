#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include "secrypt.h"

using namespace std;

void main()
{
    ofstream outRegister( "useraccount.dat", ios::out );
    if ( !outRegister    ) {
    cerr << "File could not be opened" << endl;
    exit( 1 );}
    string a,b,c,d;
    cout<<"enter your username :";
    cin>>a;
    cout<<"enter your password :";
    cin>>b;
    outRegister<<a<<' '<<b<<endl;
    cout<<"your account has been created";

}
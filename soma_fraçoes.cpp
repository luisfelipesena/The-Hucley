#include <iostream>
using namespace std;

int main()
{

int a, b, c, d;
char b1, b2, soma;

//b1 e b2 -> barras

cin >> a >> b1 >> b >> soma >> c >> b2 >> d;

if(b == 0 || d == 0)
{
    cout << "entrada invalida!" << endl;
    return 0;
}

//a*d+c*b/bd

int n1 = a * d + b * c;
int d1 = b * d;

int n2 = n1;
int d2 = d1;

int resto = n2 % d2;
while(resto != 0)
{
    n2 = d2;
    d2 = resto;
    resto = n2 % d2;
}
int mdc = d2;

if(mdc == 1)
{
    cout << n1 << "/" << d1 << endl;
}
else if((n1 / mdc) / (d1 / mdc) == 1)
{
    cout << 1 << endl;
}
else
{
    cout << n1 / mdc << "/" << d1 / mdc << endl;
}
return 0;
}

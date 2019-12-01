//5.1
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{   double S,V,k,m,n;
    printf("Enter m= ");
    cin>>m;
    printf("\nEnter n= ");
    cin>>n;
    printf("\nEnter k= ");
    cin>>k;
    k=6;
    while(k<=18){
        S+=(pow(k,4)+2)/(2*k*k-1);
        k++;
    }
    cout<<"S="<<S<<endl;
    V=(k+3)/(k*k+10*k+24);
    k=m;
    while(k<=n){
        V*=(k+3)/(k*k+10*k+24);
        k++;
    }
    cout<<"V="<<V;
    return 0;
}
//5.2
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{   double a,k;
    k=13;
    a=12;
    while(k<=20)
    {  
       a=a*k;
       k++;
    }
    cout<<"Добуток натуральних чисел від 12 до 20 = "<<a;
    return 0;
}
//5.3
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{   double i,y,d,c,x;
    x=1.12;
    d=sin(x)+cos(x);
    c=x*x;
    y=fabs(d-c);
    for(i=2; i<=20; i++)
    {   d=d+atan(d);
        c=c+log10(c);
        y+=fabs(d-c);
    }
    cout<<"y= "<<y;
    return 0;
}
//5.4
#include <iostream>
#include <cmath>
using namespace std;
int main()
{   double i,y,d,c;
    const double x=1.12;
    d=sin(x)+cos(x);
    c=x*x;
    y=fabs(d-c);
    for(i=2; i<=20; i++)
    {   d=d+atan(d);
        c=c+log10(c);
        y+=fabs(d-c);
    }
    cout<<"y= "<<y<<"\n------------";
    d=sin(x)+cos(x);
    c=x*x;
    y=fabs(d-c);
    i=2;
    do {
        d=d+atan(d);
        c=c+log10(c);
        y+=fabs(d-c);
        i++;
    }
        while(i<=20);
    cout<<"\ny= "<<y<<"\n------------";
    d=sin(x)+cos(x);
    c=x*x;
    y=fabs(d-c);
    i=2;
    while(i<=20){
        d=d+atan(d);
        c=c+log10(c);
        y+=fabs(d-c);
        i++;
    }
     cout<<"\ny= "<<y;
    return 0;
}





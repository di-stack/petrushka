//6.2
#include <iostream>
#include <math.h>
using namespace std;
int main()
{   
    float y,x,n,y1,i;
    x=3.15;
    n=2;
    y=exp(x)-20;
    const float eps=0.001;
    while(true){
        ++i;
        if(fabs(y-x)<eps)
        break;
        x=y;
    y=exp(x)-20;
    cout<<y;
    }
    cout<<y<<endl;
    cout<<pow(x,i)<<endl<<(pow(exp(x)-20,i));
    return 0;
}
//6.3
#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    float i=0,n=0,x,f,fact=2;
    const float eps=0.01;
    x=M_PI/3;
    f=1-pow(x,2)/2;
    while(fabs(f)>=eps){
        i+=2;  
        for(;n<=i;n++)
            fact*=2+n;
        f+=pow(-1,2*n-1)*(pow(x,2+n)/fact);
        cout<<f<<" number= "<<n<<endl;
    }
    return 0;
}
//6.4
#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    float N=100,f,f1,M=1000,x=0,i=0;
    const float eps=10e-4;
    x=1/pow(2,N);
    f1=(pow(x,2)-1)/(pow(x,3)-2*x*x+2*x-1);
    do{
        N++;
        f=f1;
        
        x=1/pow(2,N);
        f1=(pow(x,2)-1)/(pow(x,3)-2*x*x+2*x-1);
        cout<<f1<<endl;
    if(fabs(f1-f)<=eps){
        cout<<"mae skincheny granutsya";
        break;
    }
    if(fabs(f1-f)>M){
        cout<<"ne mae w tochki skinchenoi granutzi";
        break;
    }
    if(N<100){
        cout<<"a=const";
        break;
    }
    }
    while(true);
    return 0;
}



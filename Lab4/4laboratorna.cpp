//4.1
#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main ()
{   setlocale(LC_ALL,"ukr");
    double x,y;
    cout<<"x1=  "<<"  y1="<<endl;
    x=-1;
    while(x<=2.3){
        cout<<x<<"  "<<y<<endl;
        y=(exp(2*x)-8)/(x+3);
        x=x+0.7;
    }
    
    cout<<"----------";
    x=1.5;
    cout<<"\nx2=  "<<"  y2="<<endl;
    for(int i=0; i<6; i++,x+=0.3){
        y=(exp(2*x)-8)/(x+3);
    cout<<x<<"  "<<y<<endl;
    }
    
   return 0;
}
//4.2
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <math.h>
using namespace std;
int main(){
 double f,y;
 y=-2;
 cout<<"x=  "<<"  y="<<endl;
 while(y<=0.5){
  f=y+0.1*cos(y);
  cout<<y<<"  "<<f<<"\n";
  y+=0.5;
 
 }
 cout<<"----------\n";
 cout<<"x=  "<<"  y="<<endl;
 while(y<=3){
  f=log(y+sqrt(y+0.6));
  cout<<y<<"  "<<f<<"\n";
  y+=0.5;
 }
 return(0);
}
//4.3
#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main ()
{   setlocale(LC_ALL,"ukr");
    double z,x,y;
    y=2;
    cout<<"y=\t"<<"x=\t"<<"z=\t"<<endl;
    while(y<=10){
        x=2.1;
        while(x<=4.6){
            z=pow(cos((x+3)/(y+1)),2);
            cout<<y<<"\t"<<x<<"\t"<<z<<endl;
            x+=0.2;
        }
        cout<<"---------------\n";
        y+=1;
    }
   return 0;
}

//7.1
#include<iostream>
#include <cmath>
using namespace std;
int main()
{   float t=0,n=0;
    float A[6]={
        6.3,-2.1,4.2,5.3,-7.2,-4.5
    };
    for(int i=0; i<6;i++)
    {
        if(A[i]<0){
           t+=A[i];
           n++;
        }
    }
        cout<<t/n;
    return 0;
}
//7.2
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
{
	int num=0, s=0;
	float y, x = -2.2, t;
	double array[23] ={};
	while (x <= 2.4) {
		x += 0.2;
		num++;
		y = 1.5*x*x*cos(pow(x, 3)) - 38*pow(sin(x), 3);
		array[num] = y;
		cout << array[num] << "   " << x << endl;
		
	}
	cout<<num;
	num=s;
	num=0;
 	for (int k = 0; k < s; k++){
 	    int i=0;    
 	    num=0;
 		for (; i < s ; i++){    
 			if (array[num+1] < array[num]) {
     				t = array[num +1];
   				array[num +1] = array[num];
    				array[num] = t;
 				}
 				num++;
			cout<<num<<endl;
 		}}
 	for (int i = 0; i < num; i++) 
 	cout<<endl<<array[i];
	cout << "\n Result sortirovki massiva " << endl;
	return 0;
}
//7.3
#include <iostream>
#include <cstdio>
#include <cmath>
#include <ctime>
using namespace std;
int main()
{   
    setlocale(LC_ALL,"ukr");
    int t=0,i=0,y=0;
    srand(time(0));
    int array[9]={};
    t= array[0]=rand()%9;
    cout<<array[0]<<" | ";
    for(i=1;i<9;i++){
        array[i]=rand()%9;
        cout<<array[i]<<" | ";
        if(t>array[i]){
        t= array[i];
        y=i;
        }
    }
    cout<<endl<<"Найменше число масиву= "<<t<<" ,а його порядковий номер= "<<y;
    return 0;
}
//7.4
#include <iostream>
#include <cstdio>
#include <cmath>
#include <ctime>
using namespace std;
int main()
{   
    srand(time(0));
    setlocale(LC_ALL,"ukr");
    int i=0,sum=0;
    const int N=5;
    int Z[N]={};
    do{
        Z[i]=5000+rand()%5001;
        sum+=Z[i];
        cout<<Z[i]<<" | ";
        i++;
    }while(i<5);
    cout<<endl<<"Сума заробітньої плати усіх працівників складе= "<<sum;
    return 0;
}


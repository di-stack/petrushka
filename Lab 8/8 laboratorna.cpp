//8.1
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	setlocale(LC_ALL, "ukr");
	float t;
	float z[5][3]={};
	float x[5]={2.1,0.5,-1.3,4.2,0.1};
	float y[3]={0,-0.2,1.5};
	for(int i=0;i<5;i++){
		for(int j=0;j<3;j++){
			z[i][j]=x[i]*y[j];
			z[0][0]=t;
			cout<<z[i][j]<<" | ";
			if(t<z[i][j]){
				t=z[i][j];
			}
		}
		cout<<endl;
	}
	cout<<"Найбільше число= "<<t;
	return (0);
}
//8.2
#include <iostream>
#include <cstdio>
#include <cmath>
#include <ctime>
using namespace std;
int main()
{   
    srand(time(0));
    const int m=5;
    int j=0,max1=0,max2,max3,max4,o,x,v,b,h,f,z,d;
    const int n=4;
    int A[m][n]={};
    for(int k=0;k<5;k++){
        
        for(j=0;j<4;j++)
        {   
            A[k][j]=rand()%10;
            if((k==0)&&(j==0))
            max1=A[0][0];
            if((k==0)&&(j==1))
            max2=A[0][1];
            if((k==0)&&(j==2))
            max3=A[0][2];
            if((k==0)&&(j==3))
            max4=A[0][3];
            cout<<A[k][j]<<" | ";
        }
        j=0;
        if(max1<A[k][j])
        {
            max1=A[k][j];
            o=k;
            h=j;
        }
        if(max2<A[k][j+1])
        {
            max2=A[k][j+1];
            f=k;
            d=j+1;
        }
        if(max3<A[k][j+2])
        {
            max3=A[k][j+2];
            z=k;
            x=j+2;
        }
        if(max4<A[k][j+3])
        {
            max4=A[k][j+3];
            v=k;
            b=j+3;
        }
        cout<<endl;
    }
    cout<<endl<<max1<<" | "<<max2<<" | "<<max3<<" | "<<max4<<" | ";
    cout<<endl<<o<<" "<<h<<" | "<<f<<" "<<d<<" | "<<z<<" "<<x<<" | "<<v<<" "<<b<<" | ";
    return 0;
}
//8.3
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	setlocale(LC_ALL, "ukr");
	float t,a=0,b1,b2,b3,b4,b5;
	float array[5][5]={};
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			array[i][j]=-20+rand()%57; 
			cout<<array[i][j]<<" | ";
			if(array[i][j]>0 && a<1 && i==0){
				b1=array[i][j];
				a++;
				//cout<<"/"<<array[i][j]<<"\\";
			}
			if(array[i][j]>0 && a<2 && i==1){
				b2=array[i][j];
				a++;
				//cout<<"/"<<array[i][j]<<"\\";
			}
			if(array[i][j]>0 && a<3 && i==2){
				b3=array[i][j];
				a++;
				//cout<<"/"<<array[i][j]<<"\\";
			}
			if(array[i][j]>0 && a<4 && i==3){
				b4=array[i][j];
				a++;
				//cout<<"/"<<array[i][j]<<"\\";
			}
			if(array[i][j]>0 && a<5 && i==4){
				b5=array[i][j];
				a++;
				//cout<<"/"<<array[i][j]<<"\\";
			}
		}
		cout<<endl;
	}
	cout<<b1<<endl<<b2<<endl<<b3<<endl<<b4<<endl<<b5;
	return (0);
}



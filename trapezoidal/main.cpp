#include <iostream>
#include<math.h>
#define Size 10
//#define F(X) (1/(1+pow(X,2))
using namespace std;

float F(float X){
    return (1/(1+pow(X,2)));
}

int ul=6,ll=0;
float interval=1;
int N=(ul-ll)/interval;     //for number of iteration

float X[Size],Y[Size];

/*float X[]={};
float Y[]={};*/

void AssignXY(){
    float tmp1;
    tmp1=ll;
    for(int i=0;i<=N;i++){
        //cout<<F(i)<<"\n";
        X[i]=i;
        Y[i]=F(tmp1);
        tmp1+=interval;
    }
}

void DisplayXY(){
    cout<<" "<<"X"<<"   "<<"Y"<<endl;
    for(int i=0;i<=N;i++){
        cout<<" "<<X[i]<<"   "<<Y[i]<<endl;
    }
}

float Trapezoidal(){
    float sum=0;
    for(int i=1;i<=(N-1);i++){
        sum=sum+Y[i];
    }
    sum=interval*(((Y[0]+Y[N])+(2*sum))/2);
    return sum;
}

float Simpson13(){
    float sum=0;
    for(int i=1;i<=(N-1);i++){
        if(i%2==0){
            sum=sum+(2*Y[i]);
        }
        else{
            sum=sum+(4*Y[i]);
        }

    }
    sum=interval*(((Y[0]+Y[N])+sum)/3);
    return sum;
}

float Simpson38(){
    float sum=0;
    for(int i=1;i<=(N-1);i++){
        if(i%3==0){
            sum=sum+(2*Y[i]);
        }
        else{
            sum=sum+(3*Y[i]);
        }
    }
    sum=3*interval*(((Y[0]+Y[N])+sum)/8);
    return sum;
}

int main()
{

    AssignXY();
    DisplayXY();
    cout<<"\nBy Trapezoidal rule,\n\t\t= "<<Trapezoidal();
    cout<<"\nBy Simpson's 1/3 rule,\n\t\t= "<<Simpson13();
    cout<<"\nBy Simpson's 3/8 rule,\n\t\t= "<<Simpson38();
    return 0;
}

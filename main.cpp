#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
using namespace std;
int fact (int ch);
int main(){
    ofstream file;
    file.open("c:\\Qt\\Projects\\1\\example4.txt");
    double x,y=0;
    int ch,i=1;
    cout<< "Enter x: ";
    cin>>x;
    cout<< "Enter ch: ";
    cin>>ch;
    double sum=1;
    for (i=1;i<=ch;i++){
        if (i%2==1){
           y=pow(x,2*i)/fact(i*2);
           sum=sum-y;
           }
        else {
             y=pow(x,2*i)/fact(i*2);
             sum=sum+y;
             }
         }
    cout<<sum<<endl;
    file<<y;
    file.close();

    return 0;
}

int fact(int n){
    if(n < 0)
            return 0;
    if (n == 0)
            return 1;
    else
            return n * fact(n - 1);
}







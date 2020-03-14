#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    ofstream file;
    file.open("c:\\Qt\\Projects\\1\\example4.txt");
    double x,y;
    cout<<"Enter x: ";
    cin>>x;
    if(x>2){
      y=2*x-15;
      cout<<y;
      file<<y;
    }
    if(x==2.0){
        y=5;
        cout<<y;
        file<<y;
    }
    if(x<2){
        y=3*fabs(x-1)-8;
        cout<<y;
        file<<y;
    }

    return 0;
}








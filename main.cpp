#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    ofstream file;
    file.open("c:\\Qt\\Projects\\1\\example3.txt");
    file<<"\tx\t\ty"<<endl;
    double shag,npredel,vpredel;
    cout<<"Enter (npredel and vpredel): ";
    cin>>npredel>>vpredel;
    cout<<"Enter shag: ";
    cin>>shag;
    cout<<"\tx\t\ty"<<endl;
    cout.precision(5);
    for (double x=npredel;x<=vpredel;x+=shag) {
        double y=sqrt(5*x+4*(pow(x,3)))+4*x+3/sin(9*x+71);
        cout<<"\t"<<x<<"\t\t"<<y<<endl;
        file<<"\t"<<x<<"\t\t"<<y<<endl;
    }
    file.close();

    return 0;
}









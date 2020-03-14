#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    ofstream file;
    file.open("c:\\Qt\\Projects\\1\\example2.txt");
    double shag,npredel,vpredel;
    cout<<"Enter (npredel and vpredel): ";
    cin>>npredel>>vpredel;
    cout<<"Enter shag: ";
    cin>>shag;
    cout<<"\tx\t\ty"<<endl;
    cout.precision(5);

    for (double x=npredel;x<=vpredel;x+=shag) {
        double y=pow((2+x),2)+3*x;
        cout<<"\t"<<x<<"\t\t"<<y<<endl;
        file<<"\tx\t\ty"<<endl;
        file<<"\t"<<x<<"\t\t"<<y<<endl;
    }
    file.close();

    return 0;
}









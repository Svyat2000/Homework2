#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    ofstream file;
    file.open("c:\\Qt\\Projects\\1\\example4.txt");
    int ch;
    double x;
    int chislitel=1;
    cout<<"Enter Ch: ";
    cin>>ch;
    cout<<"Enter x: ";
    cin>>x;
    int znamenatel=7;//znamenatel - chislo vozle x
    double l=(chislitel/(znamenatel*x))*(-1);
    while(znamenatel<ch){
         chislitel++;
         znamenatel++;
         if(chislitel%2==0){
           l=l+(chislitel/(znamenatel*x));
         }
         else{
             l=l+(chislitel/(znamenatel*x))*(-1);
         }

     }
    cout<<l<<endl;
    file<<l;
    file.close();

    return 0;
}








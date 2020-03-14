#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    ofstream file;
    file.open("c:\\Qt\\Projects\\1\\example4.txt");
   double d,stsharov;
   int kolvosharov;
   cout<<"Vvedite vnutrennii diametr vnutrennego shara(sm),  tolsh'inu stenok sharov(mm), kolichestvo sharov: "<<endl;
   cin>>d>>stsharov>>kolvosharov;
   double V=(4/3*3.14*pow((d+kolvosharov*stsharov/10),3))/1000;
   cout<<V;
   file<<V;



   file.close();

    return 0;
}








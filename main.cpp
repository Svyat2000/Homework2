#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
using namespace std;
int fact (int ch);

int main(){
    ofstream file;
    file.open("c:\\Qt\\Projects\\1\\example4.txt");
     cout<<"Enter x: "<<endl;
     double x;
     cin>>x;
     double y=1-(pow(x,2)/fact(2))+(pow(x,4)/fact(4));
     cout<<y<<endl;
     file<<y;
     file.close();

    return 0;
}
int fact(int ch){

    if(ch < 0)
            return 0;
        if (ch == 0)
            return 1;
        else
            return ch * fact(ch - 1);
}







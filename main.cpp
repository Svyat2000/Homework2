#include <iostream>
#include <fstream>
using namespace std;


int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    ofstream file;
    file.open("c:\\Qt\\Projects\\1\\example.txt");
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=i;j++) {
            cout<<0;
            file <<"0";
        }
        cout<<endl;
        file <<endl;
        }
    file.close();
    getchar();
    getchar();
    return 0;
}

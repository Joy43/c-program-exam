#include<iostream>
#include <fstream>
using namespace std;
int main(){

    string name;
    ofstream file;
    file.open("joy.pdf");
    getline(cin,name);
    file << "welcome" <<name <<endl ;
    file.close();
}
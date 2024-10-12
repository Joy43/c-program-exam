#include<iostream>
#include <fstream>
using namespace std;
int main(){

    string name; // vcriable declire
    ofstream file;
    file.open("joy.pdf");  //file name add
    cout << "enter your name"; 
    getline(cin,name);
    file << "welcome" <<name <<endl ;
    file.close();
}
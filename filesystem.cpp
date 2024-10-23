#include <iostream>
#include <fstream>
using namespace std;
int main (){
    string name;
   ofstream file;
   file.open("world.pdf", ios::app | ios::ate);
   cout << "ENTER the senter how to make pdf file";
    getline(cin, name);
   file << "welcome to " <<name << endl ;
    file.close();
   return 0;

}
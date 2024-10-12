#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string edit;
    ofstream file;
    file.open("joy.pdf",ios::out | ios::app);
    cout <<"enter your edit Line: ";
    getline(cin,edit);
    file << "welcome " << edit <<endl ;
    file.close();
    cout << "data fetching is stored now ";
   

}

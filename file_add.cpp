#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream file;
file.open("student.txt");
file<< "welcome to my mentors spoken class . now i read proucntion of english letter for better way wrilte ";
file.close();
return 0;

}
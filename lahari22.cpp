#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout("data.txt");
    fout<<"Hello,File Handling in c++!";
    fout.close();
    ifstream fln("data.txt");
    string text;
    getline(fln,text);
    cout<<"File Content:"<<text<<endl;
    fln.close();
    return 0;
}

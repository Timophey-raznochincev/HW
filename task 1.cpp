#include <iostream>

using namespace std;
int main()
{
    cout<<"Enter tekst"<<endl;
string t;
 
 getline(cin,t);
 
 
 
  int g = t.length()*23;
  cout<< g/100 <<"rub"<<" "<< g%100 <<"kop"<<endl;


 
 return 0;
}

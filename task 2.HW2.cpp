#include <iostream>
#include <string>
#include <clocale>

using namespace std;
int main()
{
    setlocale(LC_CTYPE, "rus");
  float a,b,s;
  string c;
  cin>>a>>b;
  cin>>c;
  if (c == "+"){
      s=a+b;
       cout<<s<<endl;
      }else if (c == "-"){
          s=a-b;
           cout<<s<<endl;
          }else if (c == "*"){
          s=a*b;
           cout<<s<<endl;
          }else if (c == "/"){
          s=a/b;
          cout<<s<<endl;
          }else {
              cout<<"\n������"<<endl;
              }


 
 return 0;
}

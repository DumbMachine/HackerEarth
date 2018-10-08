#include <iostream>
#include <vector>
using namespace std;

bool isvowel(char s){
    return s=='a' || s=='e' || s=='i' || s=='o'|| s=='u';
}

int main() {
  int i;
	string str;
  cin>>str;
  int len_temp;
  int len_perm;
  int k=0;
  for(i=0;i<str.size();i++)
  {
    k=i;
    if(isvowel(str[i]))
    {
        len_temp=0;
      while(isvowel(str[i]) && i<str.size())
      {
        i++;
        len_temp++;
      }
    
    if(len_perm<len_temp){len_perm=len_temp;}

    }
   i=k;
  }

cout<<"\n"<<len_perm;
return 0;
}

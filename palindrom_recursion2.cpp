
#include<bits/stdc++.h>
using namespace std;
bool is_palindrome(string str)
{
    if(str==""||str.size()==1)
    {
        return true;
    }
    else
    {
        int n=str.size();
        string small_string=str.substr(1,n-2);
        return is_palindrome(small_string)&&str[0]==str.back();
    }
}
int main()
{
    string str;
    cin>>str;
    if( is_palindrome(str))
    {
        cout<<"palindrome";
    }
   else
   {
       cout<<"not palindrome";
   }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s="eonvceiwns";

   s = s.substr(3,2);

   cout<<s<<endl;

    string my_str = "ABAABACCABA";

   cout << "Initial string: " << my_str << endl;

   my_str.erase(remove(my_str.begin(), my_str.end(), 'A'), my_str.end()); //remove A from string
   cout << "Final string: " << my_str;



}
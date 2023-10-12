/*Given a string S. Your task is to remove all duplicates characters from the string S

NOTE:
1.) Order of characters in output string should be same as given in input string.
2.) String S contains only lowercase characters ['a'-'z'].

input:
Input contain a single string S.

Output:
Print the string S with no any duplicate characters.

Constraints:
Test Files 1 to 5:
1<=|S|<=100
Test Files 6 to 10:
1<=|S|<=100000

Sample Output #1
hacker

Sample Output #1
hacker

Sample Input #2
hackerearth

Sample Output #2
hackert

Sample Input #3
programming

Sample Output #3
progamin*/



#include <iostream>
using namespace std;
int main() 
{
   string s,str="";
   cin>>s;
   int freq[26];
   for(int i=0;i<26;i++)
   {
	freq[i]=0;
   }
   for(int i=0;i<s.size();i++)
   {
	freq[(int)s[i]-'a']++;
   }
   for(int i=0;i<s.size();i++)
   {
	if(freq[(int)s[i]-'a'] == 1)
	{
		str=str+s[i];
	}
	if(freq[(int)s[i]-'a'] > 1)
	{
		str=str+s[i];
		freq[(int)s[i]-'a'] = 0;
	}
   }
   cout<<str<<endl;

}
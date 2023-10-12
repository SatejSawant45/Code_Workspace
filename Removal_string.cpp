
/*Given two strings string1 and string2, remove those characters from first string(string1) which are present in second string(string2). Both the strings are different and contain only lowercase characters.
NOTE: Size of  first string is always greater than the size of  second string( |string1| > |string2|).
 

Example 1:

Input:
string1 = "computer"
string2 = "cat"
Output: "ompuer"
Explanation: After removing characters(c, a, t)
from string1 we get "ompuer".
Example 2:

Input:
string1 = "occurrence"
string2 = "car"
Output: "ouene"
Explanation: After removing characters
(c, a, r) from string1 we get "ouene".
 

Your Task:  
You dont need to read input or print anything. Complete the function removeChars() which takes string1 and string2 as input parameter and returns the result string after removing characters from string2  from string1.


Expected Time Complexity:O( |String1| + |String2| )
Expected Auxiliary Space: O(K),Where K = Constant   


Constraints:
1 <= |String1| , |String2| <= 50*/

#include<bits/stdc++.h>
using namespace std;

/*int main()
{
    string string1,string2;

    cout<<"enter two strings"<<endl;
    cin>>string1>>string2;
    
   int count=0;
        string str="";
        for(int i=0;i<string1.size();i++)
        {
            count=0;
            for(int j=0;j<string2.size();j++)
            {
                if(string1[i]==string2[j])
                {
                   count=0;
                   break;
                   
                }
                else
                {
                    count++;
                }
                
            }
            if(count!=0)
            {
                str = str+string1[i];
            }
            
        }
        cout<< str;  //Time complexity 0(mn)

}
*/
int main()
{ 
     int freq[26];
    string str2,str1,string="";  //time complexity : 0(m)+0(n)
    cin>>str1;
    cin>>str2;
    
    for(int i=0;i<26;i++)
    {
        freq[i]=0;
    }
    for(int i=0;i<str2.length();i++)
    {
        freq[(int)(str2[i])-97]++;
    }
    
    /*for(int i=0;i<25;i++)
    {
        cout<<char(i+'a')<<" "<<freq[i]<<endl;
    }*/
   
   for(int i=0;i<str1.size();i++)
   {
    if(freq[str1[i]-97]!=0)
    {
       string=string+"";
    }
    else{
        string.push_back(str1[i]);
    }
   }
   cout<<string<<endl;


}

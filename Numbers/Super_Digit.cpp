/*We define super digit of an integer  using the following rules:

Given an integer, we need to find the super digit of the integer.

If  has only  digit, then its super digit is .
Otherwise, the super digit of  is equal to the super digit of the sum of the digits of .
For example, the super digit of  will be calculated as:

	super_digit(9875)   	9+8+7+5 = 29 
	super_digit(29) 	2 + 9 = 11
	super_digit(11)		1 + 1 = 2
	super_digit(2)		= 2  
Example


The number  is created by concatenating the string   times so the initial .

    superDigit(p) = superDigit(9875987598759875)
                  9+8+7+5+9+8+7+5+9+8+7+5+9+8+7+5 = 116
    superDigit(p) = superDigit(116)
                  1+1+6 = 8
    superDigit(p) = superDigit(8)
All of the digits of  sum to . The digits of  sum to .  is only one digit, so it is the super digit.

Function Description

Complete the function superDigit in the editor below. It must return the calculated super digit as an integer.

superDigit has the following parameter(s):

string n: a string representation of an integer
int k: the times to concatenate  to make 
Returns

int: the super digit of  repeated  times
Input Format

The first line contains two space separated integers,  and .

Constraints

Sample Input 0

148 3
Sample Output 0

3
Explanation 0

Here  and , so .

super_digit(P) = super_digit(148148148) 
               = super_digit(1+4+8+1+4+8+1+4+8)
               = super_digit(39)
               = super_digit(3+9)
               = super_digit(12)
               = super_digit(1+2)
               = super_digit(3)
               = 3
Sample Input 1

9875 4
Sample Output 1

8
Sample Input 2

123 3
Sample Output 2

9
Explanation 2

Here  and , so .

super_digit(P) = super_digit(123123123) 
               = super_digit(1+2+3+1+2+3+1+2+3)
               = super_digit(18)
               = super_digit(1+8)
               = super_digit(9)
               = 9
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,str="";
    int k,rev=0; int rem=0,rev1=0,num;int sum=0,rem1=0;
    int n;
    cin>>s>>k;

    for(int i=0;i<k;i++)
    {
        str=str+s;
       
    }
    cout<<str<<endl;
    for(int i=str.size()-1;i>=0;i--)
    {
        n = str[i]-'0';
        rev = rev*10 + n;

    }
    cout<<rev<<endl;
    num=rev;

    while(num>0)
    {
        rem=num%10;
        rev1=rev1*10+rem;
        num=num/10;
    }
    cout<<rev1<<endl;
    


while(rev1>9)
    {
        sum=0;rem1=0;
    while(rev1>0)
    {
        rem1=rev1%10;
        sum=sum+rem1;
        rev1=rev1/10;
    }
     rev1=sum;
    }

    cout<<sum<<endl;
}
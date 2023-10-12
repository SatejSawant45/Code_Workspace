  /*A left rotation operation on an array of size  shifts each of the array's elements  unit to the left. Given an integer, , rotate the array that many steps left and return the result.

Example


After  rotations, .

Function Description

Complete the rotateLeft function in the editor below.

rotateLeft has the following parameters:

int d: the amount to rotate by
int arr[n]: the array to rotate
Returns

int[n]: the rotated array
Input Format

The first line contains two space-separated integers that denote , the number of integers, and , the number of left rotations to perform.
The second line contains  space-separated integers that describe .

Constraints

Sample Input

5 4
1 2 3 4 5
Sample Output

5 1 2 3 4
Explanation

To perform  left rotations, the array undergoes the following sequence of changes:

*/
  
  
  #include<bits/stdc++.h>
  using namespace std;

  
  
  int main()
 { 
    int d=4;
    
    vector<int> arr={1 ,2, 3, 4, 5};
  int n;
    n=arr.size();
    
    vector<int> rotate(n);
    vector<int>temp(n);
    temp=arr;
    
    for(int j=1;j<=d;j++)
    {
        rotate.clear();
    
    for(int i=0;i<arr.size()-1;i++)
    {
        rotate.push_back(temp[i+1]);
    }
    rotate.push_back(temp[0]);
        temp.clear();
    temp=rotate;
    }
    // vector<int> v;
    // for(int i=0;i<rotate.size();i++)
    // {
    //     if(i!=1)
    //     {
    //         v.push_back(rotate[i]);
    //     }
    // }
     for(int i=0;i<rotate.size();i++)
     {
        cout<<rotate[i]<<" ";
     }
    }
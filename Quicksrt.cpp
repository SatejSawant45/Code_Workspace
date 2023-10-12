#include<bits/stdc++.h>
using namespace std;

 

void PrintVect(vector<int> &v)
{
   for(int p=0;p<v.size();p++)
   {
    cout<<v[p]<<" ";
   }
   cout<<endl;
}


//Partition function

int partition(vector<int> &v, int low, int high)
  {
    int pivot = v[low];
    
    int  i=low+1,j=high;


    while(j>=i)
    {
      if(v[i]>pivot && v[j]<=pivot)
      {
          swap(v[i],v[j]);
          i++;j--;
      }
      else if(v[i]<=pivot )
      {
        i++;
      }
      else if(v[i]>pivot)
      {
        j--;
      }
    }
    swap(v[low],v[j]);
    return j;
  }
 
void quickSort(vector<int> &v , int low , int high)
{
      int partitionIndex; // Index of pivot after partition

    if (low < high)
    {
        partitionIndex = partition(v, low, high); 
        quickSort(v, low, partitionIndex-1);  // sort left subarray 
        quickSort(v, partitionIndex + 1, high); // sort right subarray
    }
}
  



int main()
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

      // Function call
      PrintVect(v);
      
      quickSort(v,0,n-1);
      cout<<endl;

      PrintVect(v);
     
}  
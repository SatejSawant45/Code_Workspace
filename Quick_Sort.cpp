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
   
    return j;
  }
    // what is incorrect in partition code?
//         int pivot = v[low];
//     int i = low + 1;
//     int j = high;
//     int temp;

//     do
//     {
//         while (v[i] <= pivot)
//         {
//             i++;
//         }

//         while (v[j] > pivot)
//         {
//             j--;
//         }

//         if (i < j)
//         {
//             temp = v[i];
//             v[i] = v[j];
//             v[j] = temp;
//         }
//     } while (i < j);

//     // Swap A[low] and A[j]
//     temp = v[low];
//     v[low] = v[j];
//     v[j] = temp;
//     return j;
//   }

 

  //Quick Sort Function

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
  



   



// #include<bits/stdc++.h>
// using namespace std;
// void printArray(int *A, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", A[i]);
//     }
//     printf("\n");
// }
// int partition(int A[], int low, int high)
// {
//     int pivot = A[low];
//     int i = low + 1;
//     int j = high;
//     int temp;

//     do
//     {
//         while (A[i] <= pivot)
//         {
//             i++;
//         }

//         while (A[j] > pivot)
//         {
//             j--;
//         }

//         if (i < j)
//         {
//             temp = A[i];
//             A[i] = A[j];
//             A[j] = temp;
//         }
//     } while (i < j);

//     // Swap A[low] and A[j]
//     temp = A[low];
//     A[low] = A[j];
//     A[j] = temp;
//     return j;
// }

// void quickSort(int A[], int low, int high)
// {
//     int partitionIndex; // Index of pivot after partition

//     if (low < high)
//     {
//         partitionIndex = partition(A, low, high); 
//         quickSort(A, low, partitionIndex - 1);  // sort left subarray 
//         quickSort(A, partitionIndex + 1, high); // sort right subarray
//     }
// }

// int main()
// {
//    int A[] = {9, 4, 4, 8, 7, 5, 6};
//     int n = 9;
//     n =7;
//     printArray(A, n);
//     quickSort(A, 0, n - 1);
//     printArray(A, n);
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;

// // last element is taken as pivot
// int Partition(vector<int> &v, int start, int end){
	
// 	int pivot = end;
// 	int j = start;
// 	for(int i=start;i<end;++i){
// 		if(v[i]<v[pivot]){
// 			swap(v[i],v[j]);
// 			++j;
// 		}
// 	}
// 	swap(v[j],v[pivot]);
// 	return j;
	
// }

// void Quicksort(vector<int> &v, int start, int end ){

// 	if(start<end){
// 		int p = Partition(v,start,end);
// 		Quicksort(v,start,p-1);
// 		Quicksort(v,p+1,end);
// 	}
	
// }

// void PrintVector(vector<int> v){
// 	for(int i=0;i<v.size();++i)
// 		cout<<v[i]<<" ";
// 	cout<<"\n\n";
// }

// int main() {
	
// 	vector<int> v = { 1 , 10 , 11 , 9 , 14 , 3 , 2 , 20 , 19 };
	
// 	cout<<"Vector Before Sorting: "<<endl;
// 	PrintVector(v);
	
// 	Quicksort(v,0,v.size()-1);
	
// 	cout<<"Vector After Sorting: "<<endl;
// 	PrintVector(v);
		
// }

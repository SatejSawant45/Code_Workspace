// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {


//      vector<int> v;
//     int n;
//     cin>>n;                  // ps = shortcut for pushback  pb = sohrtcut for popback

//     for(int i=0;i<n;i++)
//     {
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }



//     int pivot = v[0];
//     int i=1;
//     int j=n-1;
    
//     while(j>=i)
//     {
//       if(v[i]>pivot && v[j]<=pivot)
//       {
//           swap(v[i],v[j]);
//           i++;j--;
//       }
//       else if(v[i]<=pivot && v[j]<=pivot)
//       {
//         i++;
//       }
//       else if(v[i]>pivot && v[j]>pivot)
//       {
//         j--;
//       }
//     }
//     swap(v[j],v[0]);

//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"The value of patritionIndex is "<<j<<endl;










// }

// 9
// 10 16 8 12 15 6 3 9 5
// 6 5 8 9 3 10 15 12 16



#include<bits/stdc++.h>
using namespace std;
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }

        while (A[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    // Swap A[low] and A[j]
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    printf("%d",j);
    printf("\n");
    return j;
}

void quickSort(int A[], int low, int high)
{
    int partitionIndex; // Index of pivot after partition

    if (low < high)
    {
        partitionIndex = partition(A, low, high); 
        quickSort(A, low, partitionIndex - 1);  // sort left subarray 
        quickSort(A, partitionIndex + 1, high); // sort right subarray
    }
}

int main()
{
   int A[] = {10, 16, 8, 12, 15, 6, 3, 9, 5};
   int n = 9;
    
    printArray(A, n);
    partition(A, 0, n - 1);
    printArray(A, n);
   
    return 0;
}
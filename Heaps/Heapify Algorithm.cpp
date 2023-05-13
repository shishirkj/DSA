// Time Complexity--> O(log n)

// VVIP if zeroth index then left = 2*i+1 and right = 2*i+2


void heapify(int arr[],int n ,int i)
{
    int largest = i;
    int left_index = 2*i;
    int right_index = 2*i+1;

    if(left_index<n && arr[largest]<ar[left_index])
    { 
        largest = left_index;
    }
    else if(right_index<n && arr[largest]<arr[right_index])
    {
        largest = right_index;
    }

    if(largest!=i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}



// we are traversing array from right to left and from n/2 cauz lea nodes are already in their right position
// as there are no sub nodes for leaf nodes tp compare


for(int i = n/2;i>0;i--)
{ 
    heapify(arr,n,i);
}
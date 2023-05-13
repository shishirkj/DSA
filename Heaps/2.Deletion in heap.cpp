

// We are starting from 1st index




void delete()
{ 
    if(size==0)
    { return ;}

    arr[1] = arr[size];
    size--;int i =1; // deleting the node
    int left_index = 2*i;int right_index = 2*i+1;

        while(i<size)
        { 
            if(left_index <size && arr[i]<arr[left_index])
            { 
                swap(arr[left_index],arr[i]);
                i = left_index;
            } 
            else if (right_index<size && arr[i]<arr[right_index])
            {
                swap(arr[right_index],arr[i]);
                i = right_index;
            } 
            else
            {
                return;
            }
        }

     

}

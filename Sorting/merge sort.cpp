void merge(int arr[], int l, int m, int r)
    {
       
        int len1 = m-l+1;
        int len2 = r-m;
        int *first = new int[len1];
        int *second = new int[len2];
        
        int mainIndex = l;
        
        //copied the first sorted part in new array 1(first) 
        for(int i =0;i<len1;i++)
        {
              first[i]=arr[mainIndex++];
        }
        
        //copied the second sorted part in new array 2(second) 
        mainIndex = m+1;
        for(int j =0;j<len2;j++ )
        {
            second[j]=arr[mainIndex++];
        }
        
        //putting back the  sorted elements back to original array
        
        int i =0;int j =0; mainIndex = l;
        
        while(i<len1 && j<len2)
        {
            if(first[i]<second[j])
            {
                arr[mainIndex++] = first[i++];
            }
            else
            {
                arr[mainIndex++] = second[j++];
            }
        }
        
        //if j pointer finishes but not i
        
        
        while(i<len1)
        {
            arr[mainIndex++] = first[i++];
        
        }
        
        //if i pointer finishes but not j
        while(j<len2)
        {
            arr[mainIndex++] = second[j++];
        }
        
        
        //deleting the dynamic created array to free up the space
        delete []first;delete []second;
       
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        int m = l+(r-l)/2;
        
        //base case
        if(l>=r)
        {return;
            
        }
        
        //left side sort karo
        mergeSort(arr,l,m);
        
        //right side sort karo
        mergeSort(arr,m+1,r);
        
        //then merge the sorted array
        merge(arr,l,m,r);
        
    }
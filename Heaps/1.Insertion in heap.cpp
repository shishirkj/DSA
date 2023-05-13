


// We are starting from 1st index


Time complexity--> O(log n)

//MAX HEAP
void insertion(int data)
{ 
        int arr[100]; int size =0;


            size = size+1;
            int index = size;
             arr[index] = data;
            while(index>1)
            { 
                parent  = index/2;
                if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                 index = parent;
                                          }

                else
                { 
                    return;
                }                           
            }


}

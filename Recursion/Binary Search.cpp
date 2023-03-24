bool BS(int arr*,int s,int e,int key)
{
    //base case
    if(s>e)
        {
            return false;
        }
    int mid = s+(e-s)/2;

    if(arr[mid]==key)
    {   return true;
    }

        if(key<arr[mid])
      return  BS(arr,mid+1,e,key);
        else{
         return  BS(arr,s,mid-1,key);
        }

}
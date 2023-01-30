/*
Question-
Map Operations -->(Basic_Insert_Delete_Display_IfPresent)


You are given an array A of size N. you need to insert the elements of A into a map(element as key and index as value) and display the results.
Also, you need to erase a given element x from the map and print "erased x" if successfully erased, else print "not found".


Example 1:
Input:
N = 10
A[] = 9 8 7 4 4 2 1 1 9 8
x = 1
Output: 
1 7
2 5
4 4
7 2
8 9
9 8
erased 1
2 5
4 4
7 2
8 9
9 8

problem link--.> https://practice.geeksforgeeks.org/problems/map-operations/1?page=1&category%5B%5D=Map&sortBy=accuracy&utm_source=youtube&utm_medium=collab_codein10_description&utm_campaign=MapandsortBy

*/




//CODE


map<int,int> mapInsert(int arr[],int n)
{
    map<int,int>mp;
   //Insert arr[i] as key and i as value
   for(int i=0;i<n;i++){
       mp[arr[i]] = i;
   }
    
    
    return mp;
    
}


void mapDisplay(map<int,int>mp)
{
    //Print every key and value pair in a new line
    
  
    for(auto it = mp.begin();it!=mp.end();it++){
        
        cout<<it->first<<" "<<it->second<<endl;   
                                               }
    
    /* we can write the above thing like this too
    
     for(auto it:mp){
     
        cout<<it.first<<" "<<it.second<<endl;   
        
    }
    */
}


void mapErase(map<int,int>&mp,int x)
{
   //Write the if and else condition to erase x from map
   auto it = mp.find(x);
   if(it!= mp.end()){
       mp.erase(it);
    cout<<"erased "<<x;
                    }
    else{
    
    //else condition
    cout<<"not found";
    
    }
    cout<<endl;
    
    /*
    if x/key is present or not (to check)
    
                mp.count(x);  
                
    to erase the key
                    mp.erse(x);
    
    */
}
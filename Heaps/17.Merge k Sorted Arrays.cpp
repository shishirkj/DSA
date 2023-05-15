Given K sorted arrays arranged in the form of a matrix of size K*K. The task is to merge them into one sorted array.
Example 1:

Input:
K = 3
arr[][] = {{1,2,3},{4,5,6},{7,8,9}}
Output: 1 2 3 4 5 6 7 8 9
Explanation:Above test case has 3 sorted
arrays of size 3, 3, 3
arr[][] = [[1, 2, 3],[4, 5, 6], 
[7, 8, 9]]
The merged list will be 
[1, 2, 3, 4, 5, 6, 7, 8, 9].
Example 2:

Input:
K = 4
arr[][]={{1,2,3,4},{2,2,3,4},
         {5,5,6,6},{7,8,9,9}}
Output:
1 2 2 2 3 3 4 4 5 5 6 6 7 8 9 9 
Explanation: Above test case has 4 sorted
arrays of size 4, 4, 4, 4
arr[][] = [[1, 2, 2, 2], [3, 3, 4, 4],
[5, 5, 6, 6], [7, 8, 9, 9 ]]
The merged list will be 
[1, 2, 2, 2, 3, 3, 4, 4, 5, 5, 
6, 6, 7, 8, 9, 9].


problem link --> https://practice.geeksforgeeks.org/problems/merge-k-sorted-arrays/1





Time comlexity:

O(N*log(K)), where N is the total number of elements in all K arrays and log(K)


The space complexity is O(K) because the heap can contain at most one element from each of the K arrays at a given time.


//CODE


  vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
 priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>>minHeap;
 
            // step 1: Saare arrays ke first element insert kardo heap mein
            
            
            for(int i =0;i<K;i++)
            { 
                // yaha doosre pair mein pehla hai array ka number(konsa array) aur doosra element ka index
                minHeap.push({arr[i][0],{i,0}});
            }
            
            vector<int>ans;
            
            // step 2 heap ke top ka array ka second element and also if it exists or not byt(element index<size of that array)
                while(!minHeap.empty())
                { 
                    ans.push_back(minHeap.top().first);
                    int arrayIndex = minHeap.top().second.first;
                    int elementIndex = minHeap.top().second.second;
                    
                    minHeap.pop();
                    
                    if(elementIndex+1<arr[arrayIndex].size())
                    { 
                        minHeap.push({arr[arrayIndex][elementIndex+1],{arrayIndex,elementIndex+1}});
                    }
                }
                return ans;
 
    }
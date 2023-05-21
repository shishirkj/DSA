Given the adjacency list of a bidirectional graph. Your task is to copy/clone the adjacency list for each vertex and return a new list.


Example 1:

Input:

Output: 
0-> 1-> 4 
1-> 0-> 2-> 3-> 4 
2-> 1-> 3 
3-> 1-> 2-> 4 
4-> 0-> 1-> 3
Explanation:
As 0,1 and 3 is connected to 4 so 4th row
of the list containing 4 and its connected
nodes 0,1 and 3 and we have to add those in
sorted order and same for every row.


Example 2:

Input:


Output: 
0-> 2-> 3 
1-> 2 
2-> 0-> 1 
3-> 0
Explanation:
As 2 and 3 is connected to 0 so 0th row
of the list containing 0 and its connected 
nodes 2 and 3 and we have to add those in
sorted order and same for every row. 


problem link --> https://practice.geeksforgeeks.org/problems/print-adjacency-list-1587115620/0



Expected Time Complexity: O(V + E)
Expected Auxiliary Space: O(V + E)




//CODE

 vector<vector<int>> printGraph(int V, vector<int> adj[]) {
        vector<vector<int>>v(V);
        
        for(int i =0;i<V;i++)
        { 
            // as we can see in output the in 1st example 0,1,2,3,4 is printed thats why
            v[i].push_back(i);
            for(auto it: adj[i])
            {
                v[i].push_back(it);
            }
        }
        return v;
    }
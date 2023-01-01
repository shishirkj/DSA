//First negative integer in every window of size k 


/*
EXAMPLE -

Input : 
N = 5
A[] = {-8, 2, 3, -6, 10}
K = 2
Output : 
-8 0 -6 -6
Explanation :
First negative integer for each window of size k
{-8, 2} = -8
{2, 3} = 0 (does not contain a negative integer)
{3, -6} = -6
{-6, 10} = -6
*/



//CODE


vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K) {
    
    
    int i=0;int j=0; deque<long long>ans; vector<long long>res;
  
    while(j<N){
        if(A[j]<0){
            ans.push_back(A[j]);
            
        }
        if(j-i+1<K){
            j++;
        }
        else if(j-i+1==K){
            if(ans.size()==0){
                res.push_back(0);
            }
            else{
                res.push_back(ans.front());
                if(A[i]<0)
                  ans.pop_front();
            }
            i++;j++;
        }
        
        
    }
    return res;
                                                 
 }
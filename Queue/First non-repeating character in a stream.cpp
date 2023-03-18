/*
Question-
First non-repeating character in a stream
Given an input stream of A of n characters consisting only of lower case alphabets. The task is to find the first non repeating character, each time a character is inserted to the stream. If there is no such character then append '#' to the answer.
 

Example 1:

Input: A = "aabc"
Output: "a#bb"
Explanation: For every character first non
repeating character is as follow-
"a" - first non-repeating character is 'a'
"aa" - no non-repeating character so '#'
"aab" - first non-repeating character is 'b'
"aabc" - first non-repeating character is 'b'
Example 2:

Input: A = "zz"
Output: "z#"
Explanation: For every character first non
repeating character is as follow-
"z" - first non-repeating character is 'z'
"zz" - no non-repeating character so '#'


example -->   i/p-->abcbbac

              o/p--> aaaac#

problem link --> https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1
*/



//CODE

 //  mark the number of occurences of not all the characters but only A[i]
		   //one by one and after marking push one by one in queue
		   
		   unordered_map<char,int>count;   queue<int>q; string ans = "";
		   
		   for(int i=0;i<A.length();i++)
		    {   char ch = A[i];
		    
		            //increase the count
		          count[ch]++;
		          
		          //queue mein push kardo bas A[i] element
		          q.push(ch);
		          
		          while(!q.empty())
		          {
		              // repeating character
		              if(count[q.front()]>1)
		              {
		                  q.pop();
		              }
		              //non repeating character
		              else if(count[q.front()]==1)
		              {
		                 ans.push_back(q.front());
		                 break;
		              }
		          }
		          
		          //loop ke bahar do kaaran se bahar aye
		          //  q empty hai ya break
	                
	                if(q.empty())
	                {
	                    ans.push_back('#');
	                }
		      
		    }
	
		    return ans;
		 
		}
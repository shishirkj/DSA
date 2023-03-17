/*
Question-
 Majority Element

 Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:
Input: nums = [3,2,3]
Output: 3

Example 2:
Input: nums = [2,2,1,1,1,2,2]
Output: 2


problem link --> https://leetcode.com/problems/majority-element/description/


*/

// BEST APPROACH


BOYERS MOOORE ALGORITHM
 int majorityElement(int a[], int size)
    {
        
       // Using Boyles Moore Algorithm
       
       //step1: Consider 1st element majority element 
       
       //step2: if count==0 ,that index becomes majority element
       
       int res = 0;int count =1;
       for(int i=1;i<size;i++)
       {
           if(a[res]==a[i])
           { 
               count++;
           }
           else
           {
               count--;
           }
           
           if(count==0)
           {
               res =i;
               count=1;
           }
       }
       
       
       //step3: take the index res and actual check it by traversing again also intialize count to zero
       
       count =0;
       
       for(int i=0;i<size;i++)
       {
           if(a[res] == a[i]){count++;}
       }
       
       if(count<=size/2){return -1;}
     
       return a[res];
       
          
    }

//ANOTHER APPROACH 

SORT THE ARAY AND IF COUNT MORE THAN N/2 RETURN THE ELEMET

//CODE

class Solution {
public:
    int majorityElement(vector<int>& nums) { 
            unordered_map<int,int>mp;
            for(int i=0;i<nums.size();i++){ 
                mp[nums[i]]++;
            }

            for(auto it:mp){ 
                if(it.second>(nums.size()/2)){ 
                    return it.first;
                }
            }
            return -1;





    }
};

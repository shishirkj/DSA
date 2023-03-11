/*
Question-
Vaibhav likes to play with numbers and he has N numbers.
One day he was placing the numbers on the playing board just to count that how many numbers he has.
He was placing the numbers in increasing order i.e. from 1 to N.
But when he was putting the numbers back into his bag, some numbers fell down onto the floor.
He picked up all the numbers but one number, he couldn't find. Now he has to go somewhere urgently, so he asks you to find the missing number.
NOTE: Don't use Sorting

Example 1:

Input:                                                       
N = 4                                        
A[] = {1, 4, 3}
Output:
2     
Explanation:
Vaibhav placed 4 integers but he picked
up only 3 numbers. So missing number
will be 2 as it will become 1,2,3,4.
 
problem link --> https://practice.geeksforgeeks.org/problems/missing-number4257/0

*/

//CODE
int missingNumber(int A[], int N)
{
    int sum=0;
        for(int i=0;i<n-1;i++)
        {
            sum^=((i+1)^array[i]);
            
        }
        return sum^n;
    

    
    
    
}

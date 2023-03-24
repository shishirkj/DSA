	int check(string&S,int i,int j)
	{
	    
	    if(i>j) return 1;
	    
	    if(S[i]!=S[j]){return 0;}
	    i++;j--;
	    check(S,i,j);
	}
	int isPalindrome(string S)
	{
	 return  check(S,0,S.length()-1);
	 
	}
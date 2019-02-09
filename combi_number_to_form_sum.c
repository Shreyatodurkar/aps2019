#include<stdio.h>
#include<string.h>
int main()
{
	int a[16];
	memset(a,0,16*sizeof(int));
	int i;
	a[0]=1;
	int n=15;
	int j;
	int b[3]={3,5,10};
	printf("%d",a[j-1]);
	/*
	int countWays(int arr[], int m, int N) 
{ 
    int count[N + 1]; 
    memset(count, 0, sizeof(count)); 
      
    // base case 
    count[0] = 1; 
      
    // count ways for all values up  
    // to 'N' and store the result 
    for (int i = 1; i <= N; i++) 
        for (int j = 0; j < m; j++) 
  
            // if i >= arr[j] then 
            // accumulate count for value 'i' as 
            // ways to form value 'i-arr[j]' 
            if (i >= arr[j]) 
                count[i] += count[i - arr[j]]; 
      
    // required number of ways  
    return count[N];  
      
}*/int count[n + 1]; 
    memset(count, 0, sizeof(count)); 
      
    // base case 
    count[0] = 1; 
      
    // count ways for all values up  
    // to 'N' and store the result 
    for (i = 1; i <= n; i++) 
        for (j = 0; j < 3; j++) 
  
            // if i >= arr[j] then 
            // accumulate count for value 'i' as 
            // ways to form value 'i-arr[j]' 
            if (i >= b[j]) 
                count[i] += count[i - b[j]]; 
      
    
}

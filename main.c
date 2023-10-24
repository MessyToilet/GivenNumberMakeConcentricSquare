#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
      
    int squareLen = (n * 2) - 1;
    
    
    for (int i = n; i > 1; i--){//upper   
        int counter = 0;  
        for (int k = n; k >= i; k--){//count down from n to i 
            printf("%d ", k);
            counter++;
        }        
        for (int k = squareLen - (counter * 2); k >= 1; k--){//from end of count down to count up
            printf("%d ", i);
        }
        for (int k = i; k <= n; k++){//count up from i to n
            printf("%d ", k);
        }
        printf("\n");
    }
    
    {//mid
        for (int k = n; k > 1; k--){
            printf("%d ", k);
        }
        for (int k = 1; k <= n; k++){
            printf("%d ", k);
        }
        printf("\n");
    }
    
    for (int i = 2; i <= n; i++){//upper   
        int counter = 0;  
        
        for (int k = n; k >= i; k--){//count down from n to i 
            printf("%d ", k);
            counter++;
        }  
        
        for (int k = squareLen - (2 * counter); k >= 1; k--){//from end of count down to count up
            printf("%d ", i);
        }
        
        for (int k = i; k <= n; k++){//count up from i to n
            printf("%d ", k);
          
        }
        printf("\n");
    }
    
    return 0;
}

#include <stdio.h>
int main() {
   
   int i =5, j =5 ,k=10; int ans;
   
   //for first condition
   if(i ==j || k >j){ ans =1;
   }else{
       ans = 0;
       
   }
   printf("i is equal to j or k greater than j is %d \n",ans);
   //for sec condition
   if(i == j || k < j){ ans =1;
   }else{
       ans = 0;
   }
   printf("i is equal to j or k less than j is %d \n",ans);
    // condtion third
    if(i != j || k < j){ ans =1;
        
    }else{
        ans =0;
    }
    printf("i not equal to j or k less than j is %d \n",ans);
}

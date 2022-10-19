#include <stdio.h>
int main() {
   
   int j =6, t =4; int ans;
   // condition first
   if(j ==t){ ans = 1;
   }else{
       ans = 0;
   }
   printf("%d == %d is %d \n",j,t,ans);
   // condition sec
   if(j>t){ ans =1;
   }else{
       ans =0;
   }
   printf("%d > %d is %d \n",j,t,ans);
  //condition thired
  if(j <t){ ans =1;
      
  }else{
      ans =0;
  }
  printf("%d < %d is %d \n",j,t,ans);
  //condition fourth
  
  if(j!=t){ ans =1;
  }else{
      ans =0;
  }
  printf("%d != %d is %d \n",j,t,ans);
  
  //condition fifth
  
  if(j >=t){ ans =1;
  }else{
      ans = 0;
  }
  printf("%d >= %d is %d \n",j,t,ans);
  //condition six
  if(j <= t){ ans = 1;
  }else{
      ans = 0;
  }
  printf("%d <= %d is %d \n",j,t,ans);
  
}

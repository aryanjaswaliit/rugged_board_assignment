/*********************************************************************************************
 *  2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 
 * Brief: 
 * Author: Aryan Jaswal  ( aryanjaswaliit@gmail.com)
 * Title: Learner
 * Last Modified Date: 14.10.2022
 *
/*********************************************************************************************/

#include <stdio.h>

int main()
{
   
   int a, b, c, d;
   int ans;
   printf("Enter the values of a,b,c,d: ");
   scanf("%d %d %d %d",&a,&b,&c,&d);
   
   if(a >b && a >c && a>d){
       ans = a;
   }else if(b >a && b >c && b >d){
       ans =b;
   }else if(c >a && c >b && c> d){
       ans =c;
   }else if(d >a && d>b && d >c){
       ans =d;
   }
   printf("%d is the largest",ans);
  
}

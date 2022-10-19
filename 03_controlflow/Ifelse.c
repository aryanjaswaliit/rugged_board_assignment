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
   
   int num_a =20;
   int num_b;
   
   //for taking input
   
   printf("Enter a number :");
   scanf("%d",&num_b);
   if(num_b > num_a){
       printf("The number is Greater than %d",num_a);
   }else if (num_b < num_a){
       printf("The number is Lesser than %d ",num_a);
   }
    
   
   
  
}


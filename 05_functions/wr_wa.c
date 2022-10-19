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
 * Last Modified Date: 15.10.2022
 *
/*********************************************************************************************/


#include <stdio.h>
int a ,b;
int sum_t;
int sum(int x,int y){
    return x+y;
}
int main()
{
    
    printf("Enter a number : ");
    scanf("%d",&a);
    scanf("%d",&b);
    sum_t = sum(a,b);
    printf("sum = %d",sum_t);
   
}


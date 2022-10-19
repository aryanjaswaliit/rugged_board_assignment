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
    //declare the varibale
    int a = 50;
    int b = 10;
    int sum = a +b;
    int sub = a-b;
    int multi = a*b;
    int div_a = a/b;
    int modl = a%b;
    int inc_a = a + 1;
    int dec_b = a -1;
    
    //print all the stuff hmm...
    printf("Addition : a+b = %d \n",sum);
    printf("Subtraction : a -b = %d \n",sub);
    printf("Multiplication : a*b = %d \n",multi);
    printf("Division : a/b = %d \n",div_a);
    printf("Modulo Division : %d \n",modl);
    printf("Increment the value of a by 1 : %d \n",inc_a);
    printf("Decremented teh value of b by 1 : %d \n",dec_b);
    
}

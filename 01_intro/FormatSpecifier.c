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
 * Last Modified Date: 13.10.2022
 *
/*********************************************************************************************/

#include <stdio.h>

int main(){
	//define the variable	
	int num = 123456;
	char char_var[] = "A";
	float float_var = 3.2;
	float float_sec_var =  987.123456;
	char string_var[] = "RuggedBoard";
	
	//print the all variable
	printf("integer is : %d \n",num);
	printf("character is : %c \n",*char_var);
	printf("float is : %.1f \n",float_var);
	printf("double is : %lf \n",float_sec_var);
	printf("string is : %s \n",string_var);
}

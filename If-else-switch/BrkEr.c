/*******************************************************
 Statement - Switch case (Resolve Error)
 Programmer - Vineet Choudhary
 Written For - https://developerinsider.co
 *******************************************************/
 
 /**
 This program contains some error due to current output of this program is
 Two
 Three

 Which is wrong. Correct output is
 Two
 
 So, find out the error. 
 **/

#include <stdio.h>
#include <conio.h>

void main()
{
    int x = 2;
    clrscr();
    
    switch(x) {
        case 2:
            printf("Two\n");
        case 3:
            printf("Three\n");
    }
    
    getch();
}

/*Correct Output
 ----------------
 Two
 */

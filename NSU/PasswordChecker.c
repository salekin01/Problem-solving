#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void mainPasswordChecker()
{
    bool has_lower = false;
    bool has_upper = false;
    bool has_space = false;
    bool has_number = false;
    bool strong_pass = false;

    char password[25];
    printf("Enter the password: ");

    while(strong_pass == false){
        gets(password);
        if(strlen(password) >= 8){
            for(int i=0; i<strlen(password); i++){
                if(password[i] >= 'a' && password[i] <= 'z'){
                    has_lower = true;
                }
                if(password[i] >= 'A' && password[i] <= 'Z'){
                    has_upper = true;
                }
                if(password[i] == ' '){
                    has_space = true;
                }
                if(password[i] >= '0' && password[i] <= '9'){
                    has_number = true;
                }
            }
            if(has_lower && has_upper && !has_space && has_number){
                strong_pass = true;
            }
        }

        if(strong_pass == true){
            printf("\nStrong Password! ");
        }
        else{
            printf("\nWeak Password! Please enter again: ");
        }
    }
}


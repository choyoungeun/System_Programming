/*
file: play_again0.c
author:2019117779_choyoungeun
datetime:2021-10-13 19:46
description: ask if user wants another transaction.
*/

#include <stdio.h>

#define QUESTION "Do you want another transaction?"
int get_response(char *);

int main(void){
    int response;
    response = get_response(QUESTION);
    return response;
}

int get_response(char *question){

    printf("%s (y/n)?",question);
    while(1){
	switch(getchar()){
	    case 'y':
	    case 'Y':return 0;
	    case 'n':
	    case 'N':
	    case EOF: return 1;
	}
    }
}

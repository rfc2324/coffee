/*
 * coffee
 * main.c
 * 
 * Copyright 2014 Lukas Fülling <lukas@k40s.net>
 * Copyright 2014 Nils Rohde
 * 
 * LICENSED UNDER THE TERMS OF THE KELLAGROUP OS SOFTWARE LICENSE v1.4
 * 
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define AE (unsigned char)142		/* Definition for Ä */
#define ae (unsigned char)132		/* Definition for ä */
#define OE (unsigned char)153		/* Definition for Ö */
#define oe (unsigned char)148		/* Definition for ö */
#define UE (unsigned char)154		/* Definition for Ü */
#define ue (unsigned char)129		/* Definition for ü */

void help() {
	printf("coffee version 0.1\n");
	printf("Made by Lukas F%clling and Nils Rohde\n\n", ue);
	printf("The following arguments are possible (only one):\n");
	printf("--help\tPrint this help and exit.\n");
}

int main(int argc, char *argv[]){


	char version[]="0.1";				/* The Version of the program */

	if(argc==1){					/* If there is only one argument (which is the program's name) */
		help();
	}
	else {						/* If there are more arguments (or less, which is barely possible) */
		if(strcmp(argv[1], "--help")==0){
			help();
		}
		else {					/* If the first Argument is something else, print help */
			help();
		}
	}	
return 0;
}

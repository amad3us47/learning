#include <netinet/in.h>
#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>


#define PORT 1818


int main()
{
	int s,c;  // s for server and c for client
	socklen_t addrlen; // address length
	struct sockaddr_in srv,cli;
	addrlen=0;
	char buf[512];
	char *data;

	memset(&srv,0,sizeof(srv));
	memset(&cli,0,sizeof(cli));


	s=socker(AF_INET,SOCK_STREAM,0); // initialize socket
	
	if(s<0)
	{
		printf("socket()\n");
		return -1;
	}

	srv.sin_family=AF_INET; 
	srv.sin_addr.s_addr=0; // accept all ip addresses
	srv.sin_port=htons(PORT);


	if (bind(s,(struct sockaddr*)&srv ,sizeof(srv)))
	{
		printf("bind()\n");
		return -1;
	}

	if (listen(s,5 )) // 5 simulateous connection
	{
		printf("listen()\n");
		close(s);
		return -1;
	}

	c=accept(s,(struct sockaddr *)&srv,&addrlen);

	if (c<0)
	{
		print("accept()\n");
		close(s);
		return -1;
	}

	printf("client connected\n");

        read(c,buf,512);
	data="httpd v1.0\n";
	write(c,data,strlen(data));
	close(c);
	close(s);
	return 0;
}

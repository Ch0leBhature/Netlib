#include"simpleSocket.hpp"
#include <cstdio>
#include <cstdlib>
#include <netinet/in.h>

//default constructor
HDE::simpleSocket::simpleSocket(int domain,int service,int protocol,int port,u_long interface)
{
  //define address structure
  address.sin_family=domain;
  address.sin_port=htons(port);
  address.sin_addr.s_addr=htons(interface);
  //establish socket
  sock=socket(domain,service,protocol);
  test_connection(sock);
  //establish Network Connection
  }

//test_connection virtual function
void HDE::simpleSocket::test_connection(int item_to_test)
{
  //confirms that the socket or connection has been properly established
  if(item_to_test<0){
    perror("failed to connect ..");
    exit(EXIT_FAILURE);
  }
}
//getter  fucntions
struct sockaddr_in HDE::simpleSocket::get_address(){
  return address;
}

int HDE::simpleSocket::get_sock(){
  return sock;
}
int HDE::simpleSocket::get_connection(){
  return connection;
} 


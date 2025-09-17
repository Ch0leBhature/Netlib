#ifndef simpleSocket_hpp
#define simpleSocket_hpp

#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>
//defining namespace to save conflicting namespaces
namespace HDE
{
class simpleSocket
{
private:
  //won't make sense for user to manipulate the connection after its created as it is a Transport layer connection(TCP)

  int sock;
  struct sockaddr_in address;
  int connection;
public:
  //constructor
  simpleSocket(int domain,int service,int protocol,int port,u_long interface);
  
  //virtual function to connect to network
  
  virtual int connect_to_network(int sock,struct sockaddr_in address) = 0;
  
  //function to test socket and connections
  void test_connection(int connection_to_be_defined);
  //getter functions
  struct sockaddr_in get_address();
  int get_sock();
  int get_connection();
};

}

#endif


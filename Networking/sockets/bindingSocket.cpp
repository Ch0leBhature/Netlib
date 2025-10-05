#include "bindingSocket.hpp"

//constructor
HDE::bindingSocket::bindingSocket(int domain,int service,int protocol,int port,u_long interface):simpleSocket(domain,service,protocol,port,interface)
{
  set_connection(connect_to_network(get_sock(), get_address()));
  test_connection(get_connection());
}

//definition of connect_to_network virtual function
//Binding the socket to a port and an IP or interface
int HDE::bindingSocket::connect_to_network(int sock,struct sockaddr_in address)
{
  binding= bind(sock, (struct sockaddr *)&address,sizeof(address));
}

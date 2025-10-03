#include "connectingSocket.hpp"
#include <netinet/in.h>
#include <sys/socket.h>

//constructor
HDE::connectingSocket::connectingSocket(int domain,int service,int protocol, int port, u_long interface):simpleSocket(domain,service,protocol,port,interface)
{
  set_connection(connect_to_network(get_sock(), get_address()));
  test_connection(get_connection());
}


int HDE::connectingSocket::connect_to_network(int sock,struct sockaddr_in address)
{
  return connect(sock, (struct sockaddr *)&address, sizeof(address));
}

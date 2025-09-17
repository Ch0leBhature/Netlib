#include "bindingSocket.hpp"
#include <netinet/in.h>

int HDE::bindingSocket::connect_to_network(int sock,struct sockaddr_in address)
{
  return bind(sock, (struct sockaddr *)&address,sizeof(address));
}

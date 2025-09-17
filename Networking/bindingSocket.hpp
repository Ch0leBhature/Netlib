#ifndef bindingSocket_hpp
#define bindingSocket_hpp

#include "simpleSocket.hpp"
#include <netinet/in.h>
namespace HDE
{
  class bindingSocket:public simpleSocket
  {
    public:
      bindingSocket(int domain,int service,int protocol, int port, u_long interface) : simpleSocket(domain,service,protocol,port,interface){}
      int connect_to_network(int sock,struct sockaddr_in address);

  };
}

#endif // !bindingSocket_hpp
#define bindingSocket_hpp

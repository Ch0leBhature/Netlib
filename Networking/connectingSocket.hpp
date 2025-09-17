#ifndef connectingSocket_hpp
#define connectingSocket_hpp

#include "simpleSocket.hpp"

namespace HDE
{
  class connectingSocket:public simpleSocket
  {
    public:
      //constructor
      connectingSocket(int domain,int service,int protocol, int port, u_long interface);
      int connect_to_network(int sock,struct sockaddr_in address);

  };
}
#endif // !connectingSocket_hpp


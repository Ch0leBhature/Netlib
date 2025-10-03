#ifndef listeningSocket_hpp
#define listeningSocket_hpp

#include <stdio.h>

#include "bindingSocket.hpp"
namespace HDE
{
  class listeningSocket:bindingSocket
  {
    private:
      int backlog;
      int listening;
    public:
      listeningSocket(int domain,int service,int protocol,int port, u_long interface,int bklog);
      void start_Listening();

  };
      
}
#endif

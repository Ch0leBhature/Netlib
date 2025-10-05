#include "listeningSocket.hpp"
#include "bindingSocket.hpp"

HDE::listeningSocket::listeningSocket(int domain,int service,int protocol,int port,u_long interface,int bklog):bindingSocket(domain,service,protocol,port,interface){
  backlog=bklog;
 start_Listening();
  test_connection(listening);
}
void HDE::listeningSocket::start_Listening(){
  listening=listen(get_sock(),backlog);
}

//getters
int HDE::listeningSocket::get_listening(){
  return listening;
}
int HDE::listeningSocket::get_backlog(){
  return backlog;
}


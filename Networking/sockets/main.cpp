#include "bindingSocket.hpp"
#include "listeningSocket.hpp"
#include <netinet/in.h>
#include <sys/socket.h>
int main(){
  std::cout<<"starting..."<<std::endl;
  std::cout<<"Binding socket...."<<std::endl;
  HDE::bindingSocket bs=HDE::bindingSocket(AF_INET, SOCK_STREAM, 0, 8080, INADDR_ANY);
  std::cout<<"listeningSocket...."<<std::endl;
  
  HDE::listeningSocket ls=HDE::listeningSocket(AF_INET, SOCK_STREAM, 0, 8081, INADDR_ANY,10);
  std::cout<<"Success!"<<std::endl;

}

#include "list.h"
int main(int argc, char* argv[]){
  struct Node* list = buildOneTwoThree();
  deleteList(0);
  return 0;
}


#include "list.h"
int main(int argc, char* argv[]){
  struct Node* list = buildOneTwoThree();
  int v = pop(&list);
  deleteList(0);
  return 0;
}


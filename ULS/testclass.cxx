#include <fstream>
#include <iostream>
#include <string>

class NODE{
public:
  NODE(){msg="default";}
  NODE(std::string m, int i, NODE *n = NULL): msg(m), id(i), next(n) {}
  void printMSG(){std::cout<<msg<<std::endl;}
  
private:
  std::string msg; //data
  int id; //data

public:
  NODE *next;
  
};

class SLL{
public:
  SLL(){Nn=0; head = new NODE((std::string)"head",0);}
  int insertNode(NODE n, int pos = -1);
  NODE *getNode(int pos=0);
  //add printList() method
  
private:
  int Nn;
  NODE *head;
};

int SLL::insertNode(NODE n, int pos){
  NODE *pn;
  pn = head;
  if (pos==-1){ // append
    for (int k = 0; k<Nn; k++){//homework 1.0, replace for by while loop.
      pn=pn->next;
    }
    n.next=NULL;//end of list. just to be sure is the end (helpful for the while loop.)
    pn->next = &n;
    Nn++;
  }
  else
    std::cout<<"position insert not implemented"<<std::endl;
  
  return 0;
}

NODE* SLL::getNode(int pos){
  if (pos>Nn) {
    std::cout<<"ERROR:the list only have "<<Nn<<" nodes\ntrying to access node: "<<pos<<"!!!!!\n";
    return NULL;  
  }
  NODE *pn;
  pn = head;

  for (int k=0; k<pos; k++){
    pn = pn->next;
  }
  return pn;
}

int main(){
  SLL *sll = new SLL();
  NODE n0((std::string)"first node", 121);
  NODE n1((std::string)"second node", 325);
  NODE *pn;

  sll->insertNode(n0);
  sll->insertNode(n1);
  
  pn = sll->getNode(1);
  if (pn!=NULL) pn->printMSG();

  pn = sll->getNode(2);
  if (pn!=NULL) pn->printMSG();

  pn = sll->getNode(3);
  if (pn!=NULL) pn->printMSG();

}

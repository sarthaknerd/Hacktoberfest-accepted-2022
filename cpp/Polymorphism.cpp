//sarthak

#include <iostream>

using namespace std;

class animal{
  public:
  void animalsound(){
    cout<<"animal that make sound"<<endl;
  }
};


class cat : animal{
 public:
  void animalsound(){
    cout<<"the car meows"<<endl;
  }
};



class dog : animal{
 public:
  void animalsound(){
    cout<<"the dog barks"<<endl;
  }
};

int main(){
  animal myanimal;
  cat mycat;
  dog mydog;

  myanimal.animalsound();
  mycat.animalsound();
  mydog.animalsound();

}
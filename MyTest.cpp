#include "MyTest.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

MyTest::MyTest()
{
  cout<<"Constructor"<<endl;
}

MyTest::~MyTest()
{
  cout<<"Destructor"<<endl;
}

int main(){

   MyTest Test;




   return 0;

}

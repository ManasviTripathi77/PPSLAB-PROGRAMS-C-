#include <iostream>
using namespace std;

class vehicle{
  public:
  void Vehicle (){
    cout<<"I am a vehicle"<<endl;
  }
};
class fourWheeler: public vehicle {
  public:
  void FourWheeler(){
    cout<<"I have four Wheels"<<endl;
  }
};
class car:public fourWheeler{
  public:
  void Car(){
    cout<<"I am car"<<endl;
  }
};
int main(){
  car myCar;
  myCar.Car();
  myCar.FourWheeler();
  myCar.Vehicle();
  return 0;
}
#include<iostream>
#include<cmath>
using namespace std;


double adiff(int x, int y){
  double sum = abs(x-y)%360;
  if(sum>180){
    sum = 360-sum;
  }

}
int main(){
  cout << adiff(180,270);
 
 return 0;
}

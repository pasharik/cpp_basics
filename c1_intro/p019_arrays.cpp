//=============================================
// C++ Programming in easy steps 6ed. [1:19]
//=============================================

#include <iostream>
using namespace std ;

int main()
{
  float nums[3] ; // Declared then initialized.
  nums[0] = 1.5 ; nums[1] = 2.75 ; nums[2] = 3.25 ;

  // Declared and initialized.
  char name[5] = { 'm', 'i', 'k', 'e', '\0' } ;
  int coords[2] [3] = { { 1, 2, 3 } , { 4, 5, 6 } } ;

  cout << "nums[0]: " << nums[0] << endl ;
  cout << "nums[1]: " << nums[1] << endl ;
  cout << "nums[2]: " << nums[2] << endl ;
  cout << "name[0]: " << name[0] << endl ;
  cout << "Text string: " << name << endl ;
  cout << "coords[0][2]: " << coords[0][2] << endl ;
  cout << "coords[1][2]: " << coords[1][2] << endl ;

  return 0 ;
}

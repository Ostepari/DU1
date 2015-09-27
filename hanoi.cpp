#include <iostream>

using namespace std;

void hanoiske_veze(int n, int pociatok, int ciel, int odkladacia)
{
  if(n == 0) std::cout << "Presunieme kotuc "  << n << " z veze " << pociatok << " do veze " << ciel << endl;

  else {
     hanoiske_veze(n - 1, pociatok, odkladacia, ciel);
     std::cout << "Presunieme kotuc "  << n << " z veze " << pociatok << " do veze " << ciel << endl;
     hanoiske_veze(n - 1, odkladacia, ciel, pociatok);
  }
}

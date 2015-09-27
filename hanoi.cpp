#include <iostream>

using namespace std;


// n - pocet diskov kt. chceme presunut (napr. 3) z veze "pociatok" do veze "ciel"
void hanoiske_veze(int n, int pociatok, int ciel, int odkladacia)
{
  // Algoritmus funkcie hanojske veze s rekurziou
  // Presunujem posledny disk (n = 0) z veze "pociatok " do veze "ciel" a vypisem o tom spravu
  if(n == 0) std::cout << "Presunieme kotuc "  << n << " z veze " << pociatok << " do veze " << ciel << endl;

  else {
     hanoiske_veze(n - 1, pociatok, odkladacia, ciel);
     std::cout << "Presunieme kotuc "  << n << " z veze " << pociatok << " do veze " << ciel << endl;
     hanoiske_veze(n - 1, odkladacia, ciel, pociatok);
  }
}

int main ()
{
  hanoiske_veze(4, 1, 2 ,3);
}

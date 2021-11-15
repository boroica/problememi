#include <iostream>
using namespace std;

int n, nr;
int main()
{
cout << "Introduceti numarul n: ";
cin >> n;

		while (n!=0){
			nr++;
			n = n / 10;
		}
cout << "Numarul are " << nr << " cifre.";
return 0;
}
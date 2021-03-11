#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int x,n,p,k,g;
	int y;
	int z;
	int t;
	cin >> x >> n >> y;
	t = 0;
	p = -1;
	g = x;
		if ((g % 10) >= n) {
			{
				cout << "ne suchestvuet";
			}
			g = g / 10;
		}
		else{
			while (x > 0) {
				t += (x % 10) * pow(n, (p + 1));
				p = p + 1;
				x = x / 10;
			}
			cout << t << " 10" << endl;
			z = 0;
			k = 1;
			while (t > 0) {
				z = z + ((t % y)) * k;

				k = k * 10;
				t = t / y;
			}
			cout << z;
		}
	return 0;
}
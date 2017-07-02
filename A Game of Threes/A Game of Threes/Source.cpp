#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {

	int number;
	
	cout << "Insert a number: ";
	cin >> number;
	map<int, int> x;
	map<int, int> :: reverse_iterator r_it;
	while (number > 1) {
		
			if (number % 3 == 0) {
				x.insert({ number, 0 });
				number /= 3;
			}
			else if (number % 3 == 1) {
				x.insert({ number, -1 });
				number--;
			}
			else if (number % 3 == 2) {
				x.insert({ number, 1 });
				number++;
		}
	}
	for (r_it = x.rbegin(); r_it != x.rend(); r_it++)
		cout << r_it->first << " " << r_it->second << std::endl;
	cout << "1";
	system("PAUSE");return 0;
	}

		
// range based loop
#include <iostream>
int main() {
	using namespace std;
	int arr[] = { 1,2,3,4,5 };// normal for loop
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
    cout<<endl;
	for (const auto & x : arr) { // range based for loop. here range is given by arr
// you does not need any indexing and increment and dcrement.		
		cout << x << " ";
	}
    cout<<endl;
	for (auto x : { 1,2,3,4 }) { // we can also write like this in range based loop. here we have written arr in range.
    cout << x << " ";
	}
		cout<<endl;

	return 0;
}
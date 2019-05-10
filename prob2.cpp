#include <iostream>
using namespace std;

class FloatArray {


private:
	int size;
	float farray[];



public:
	FloatArray() {
		size = 4;
		farray[0] = 0;
	}

	FloatArray(int it) {
		size = it;
		for (int i = 0; i < size; i++) {
			farray[i] = 0;
		}
	}
	~FloatArray() {
		delete[]farray;
	}

	float getLow() {
		float low = farray[0];
		for (int i = 0; i < size; i++) {
			if (farray[0] > farray[i]) {
				low = farray[i];
			}
		}
		return low;
	}

	float getHigh() {
		float hi = farray[0];

		for (int i = 0; i < size; i++) {
			if (farray[0] < farray[i]) { hi = farray[i]; }
		} return hi;
	}
	void setArraySize(int size) {
		farray[size];
	}
	void setValue(int index, float numb) {
		farray[index] = numb;
	}
	float getValue(int index) {
		return farray[index];
	}

};

int main() {
	FloatArray test(10);
	test.setValue(0,2);
	test.setValue(1, 3);
	test.setValue(2, 5);

	cout << "Get Value: " << test.getValue(2) << endl;
	cout << "Lowest: " << test.getLow() << endl;
	cout << "Highest: " << test.getHigh() << endl;
	return 0;
}
#include <iostream>
#include <Vectors.h>

using namespace std;
using namespace lmt;

int main()
{
	Vector2 vec(1, 1);
	Vector2 vec2(5, 5);

	//Tests
	cout << "Vector2 test:" << endl;
	cout << "Test Vector2: " << vec << endl << endl;
	cout << "Basic math operations:" << endl;
	cout << "Vector2(1, 1) + Vector2(5, 5): " << vec + vec2 << endl;
	cout << "Vector2(1, 1) - Vector2(5, 5): " << vec - vec2 << endl;
	cout << "Vector2(1, 1) * Vector2(5, 5): " << vec * vec2 << endl;
	cout << "Vector2(1, 1) / Vector2(5, 5): " << vec / vec2 << endl << endl;

	cout << "Comparison test(0 - false, 1 - true):" << endl;
	bool test1 = false;
	bool test2 = false;
	bool test3 = false;
	bool test4 = false;

	if (vec == vec2) test1 = true;
	if (vec != vec2) test2 = true;
	if (vec > vec2) test3 = true;
	if (vec < vec2) test4 = true;

	cout << "Vector2(1, 1) == Vector2(5, 5): " << test1 << endl;
	cout << "Vector2(1, 1) != Vector2(5, 5): " << test2 << endl;
	cout << "Vector2(1, 1) > Vector2(5, 5):  " << test3 << endl;
	cout << "Vector2(1, 1) < Vector2(5, 5):  " << test4 << endl << endl;

	cout << "Assignment test:" << endl << endl;

	Vector2 veca = Vector2(4, 4);
	Vector2 vecm = Vector2(4, 4);
	Vector2 vecmu = Vector2(4, 4);
	Vector2 vecd = Vector2(4, 4);

	veca += Vector2(2, 2);
	vecm -= Vector2(2, 2);
	vecmu *= Vector2(2, 2);
	vecd /= Vector2(2, 2);

	cout << "Vector2(4, 4) += Vector2(2, 2): " << veca << endl;
	cout << "Vector2(4, 4) -= Vector2(2, 2): " << vecm << endl;
	cout << "Vector2(4, 4) *= Vector2(2, 2): " << vecmu << endl;
	cout << "Vector2(4, 4) /= Vector2(2, 2): " << vecd << endl << endl;

	cout << "Vector(1, 1) unary test: " << -vec << endl << endl;

	cout << "Postfix test:" << endl << endl;
	
	cout << "++Vector(1,1): " << ++vec << endl;
	cout << "--Vector(2,2): " << --vec << endl;

	cout << "End of Vector2 test." << endl;

	system("pause");
}
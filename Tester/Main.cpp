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

	cout << "Vector2(1, 1) unary test: " << -vec << endl << endl;

	cout << "Postfix test:" << endl << endl;
	
	cout << "++Vector2(1, 1): " << ++vec << endl;
	cout << "--Vector2(2, 2): " << --vec << endl;

	cout << "End of Vector2 test." << endl;

	system("pause");



	Vector3 vec_3(1, 1, 1);
	Vector3 vec_32(5, 5, 5);

	//Tests
	cout << "Vector3 test:" << endl;
	cout << "Test Vector3: " << vec_3 << endl << endl;
	cout << "Basic math operations:" << endl;
	cout << "Vector3(1, 1, 1) + Vector3(5, 5, 5): " << vec_3 + vec_32 << endl;
	cout << "Vector3(1, 1, 1) - Vector3(5, 5, 5): " << vec_3 - vec_32 << endl;
	cout << "Vector3(1, 1, 1) * Vector3(5, 5, 5): " << vec_3 * vec_32 << endl;
	cout << "Vector3(1, 1, 1) / Vector3(5, 5, 5): " << vec_3 / vec_32 << endl << endl;

	cout << "Comparison test(0 - false, 1 - true):" << endl;
	bool test_31 = false;
	bool test_32 = false;
	bool test_33 = false;
	bool test_34 = false;

	if (vec_3 == vec_32) test_31 = true;
	if (vec_3 != vec_32) test_32 = true;
	if (vec_3 > vec_32) test_33 = true;
	if (vec_3 < vec_32) test_34 = true;

	cout << "Vector3(1, 1, 1) == Vector3(5, 5, 5): " << test1 << endl;
	cout << "Vector3(1, 1, 1) != Vector3(5, 5, 5): " << test2 << endl;
	cout << "Vector3(1, 1, 1) > Vector3(5, 5, 5):  " << test3 << endl;
	cout << "Vector3(1, 1, 1) < Vector3(5, 5, 5):  " << test4 << endl << endl;

	cout << "Assignment test:" << endl << endl;

	Vector3 veca_3 = Vector3(4, 4, 4);
	Vector3 vecm_3 = Vector3(4, 4, 4);
	Vector3 vecmu_3 = Vector3(4, 4, 4);
	Vector3 vecd_3 = Vector3(4, 4, 4);

	veca_3 += Vector3(2, 2, 2);
	vecm_3 -= Vector3(2, 2, 2);
	vecmu_3 *= Vector3(2, 2, 2);
	vecd_3 /= Vector3(2, 2, 2);

	cout << "Vector3(4, 4, 4) += Vector3(2, 2, 2): " << veca_3 << endl;
	cout << "Vector3(4, 4, 4) -= Vector3(2, 2, 2): " << vecm_3 << endl;
	cout << "Vector3(4, 4, 4) *= Vector3(2, 2, 2): " << vecmu_3 << endl;
	cout << "Vector3(4, 4, 4) /= Vector3(2, 2, 2): " << vecd_3 << endl << endl;

	cout << "Vector3(1, 1, 1) unary test: " << -vec_3 << endl << endl;

	cout << "Postfix test:" << endl << endl;

	cout << "++Vector3(1, 1, 1): " << ++vec_3 << endl;
	cout << "--Vector3(2, 2, 2): " << --vec_3 << endl;

	cout << "End of Vector2 test." << endl;

	system("pause");



	Vector4 vec_4(1, 1, 1, 1);
	Vector4 vec2_4(5, 5, 5, 5);

	//Tests
	cout << "Vector4 test:" << endl;
	cout << "Test Vector4: " << vec_4 << endl << endl;
	cout << "Basic math operations:" << endl;
	cout << "Vector4(1, 1, 1, 1) + Vector4(5, 5, 5, 5): " << vec_4 + vec2_4 << endl;
	cout << "Vector4(1, 1, 1, 1) - Vector4(5, 5, 5, 5): " << vec_4 - vec2_4 << endl;
	cout << "Vector4(1, 1, 1, 1) * Vector4(5, 5, 5, 5): " << vec_4 * vec2_4 << endl;
	cout << "Vector4(1, 1, 1, 1) / Vector4(5, 5, 5, 5): " << vec_4 / vec2_4 << endl << endl;

	cout << "Comparison test(0 - false, 1 - true):" << endl;
	bool test_41 = false;
	bool test_42 = false;
	bool test_43 = false;
	bool test_44 = false;

	if (vec_4 == vec2_4) test_41 = true;
	if (vec_4 != vec2_4) test_42 = true;
	if (vec_4 > vec2_4) test_43 = true;
	if (vec_4 < vec2_4) test_44 = true;

	cout << "Vector4(1, 1, 1, 1) == Vector4(5, 5, 5 ,5): " << test_41 << endl;
	cout << "Vector4(1, 1, 1, 1) != Vector4(5, 5, 5, 5): " << test_42 << endl;
	cout << "Vector4(1, 1, 1, 1) > Vector4(5, 5, 5, 5):  " << test_43 << endl;
	cout << "Vector4(1, 1, 1, 1) < Vector4(5, 5, 5, 5):  " << test_44 << endl << endl;

	cout << "Assignment test:" << endl << endl;

	Vector4 veca_4 = Vector4(4, 4, 4, 4);
	Vector4 vecm_4 = Vector4(4, 4, 4, 4);
	Vector4 vecmu_4 = Vector4(4, 4, 4, 4);
	Vector4 vecd_4 = Vector4(4, 4, 4, 4);

	veca_4 += Vector4(2, 2, 2, 2);
	vecm_4 -= Vector4(2, 2, 2, 2);
	vecmu_4 *= Vector4(2, 2, 2, 2);
	vecd_4 /= Vector4(2, 2, 2, 2);

	cout << "Vector4(4, 4, 4, 4) += Vector4(2, 2, 2, 2): " << veca << endl;
	cout << "Vector4(4, 4, 4, 4) -= Vector4(2, 2, 2, 2): " << vecm << endl;
	cout << "Vector4(4, 4, 4, 4) *= Vector4(2, 2, 2, 2): " << vecmu << endl;
	cout << "Vector4(4, 4, 4, 4) /= Vector4(2, 2, 2, 2): " << vecd << endl << endl;

	cout << "Vector4(1, 1, 1, 1) unary test: " << -vec_4 << endl << endl;

	cout << "Postfix test:" << endl << endl;

	cout << "++Vector4(1, 1, 1, 1): " << ++vec_4 << endl;
	cout << "--Vector4(2, 2, 2, 2): " << --vec_4 << endl;

	cout << "End of Vector2 test." << endl;

	system("pause");
}
#include <iostream>
#include <math.h>
using namespace std;
int main()
{	float first_quizz,second_quizz,third_quizz,Total1,Total2,mid_term,final;
	cout << "=======QUIZZES===========" << endl;
	cout << "Enter first  quizz (10) : " ;
	cin  >> first_quizz;
	cout << "Enter second  quizz (10) : " ;
	cin  >> second_quizz;
	cout << "Enter third  quizz (10) : " ;
	cin  >> third_quizz;
	cout << "=======QUIZZES==========" << endl;
	cout << "Enter mid-term (40) : ";
	cin >> mid_term;
	cout << "=======FINAL=========="   << endl;
	cout << "Enter final (50) : ";
	cin >> final;
	Total1 = (first_quizz+second_quizz+third_quizz)/3 ;
	cout << "Quizz Total : "<< Total1 <<endl;
	cout << "Mid term : "<< mid_term << endl;
	cout << "Final : " << final << endl;
	Total2 = Total1+mid_term+final;
	cout << "Total : "<< Total2 << endl; 
	cout << "Tour score is "<< ((Total2)>=60 ?"PASS":"FAIL") << endl;




	//burapa janthong 6306021621022 sec B
	return (0);

}
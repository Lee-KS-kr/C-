#include <iostream>
#include <climits>
#include <cstring>
#define SIZE 20
#pragma warning (disable:4996)

using namespace std;
//윗줄이 없으면 std::cout... sod::endl등으로 코드를 짜야 함

int main()
{
	//cout << "Hello, World!" << endl;
	// cout 뒤에 나오는 문장을 콘솔창에 출력 endl 줄바꿈\n
	// <<데이터의 방향. Hello라는 문자를 cout이 출력
	//1. 변수란 변할 수 있는 수
	//cf) 상수 : 변할 수 없는 수
	/*
	1. 변수의 자료형
	2. 변수의 이름
	3. 변수가 어디에 저장되는가?(메모리영역)
	*/
	/*
	1. 숫자로 시작할 수 없다 int 77aaa;
	2. c++에서 사용하고 있는 키워드는 사용할 수 없다 int return;
	3. white space를 사용할 수 없다 int aa a;
	*/
	//int a; //선언
	//a = 7; //대입
	//int b = 5; //초기화
	//cout << "a = " << a << ", b =" << b << endl;
	//a = 5;
	//b = 10;
	//cout << "a = " << &a << ", b = " << &b << endl;
	//정수형 : 소수부가 없는 수 음의 정수, 0, 양의 정수
	//short, int, long, long long
	/*int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int는 " << sizeof n_int << "바이트이다. " << endl;
	cout << "이 바이트의 최대값은 " << n_int << " 이다." << endl;

	cout << "short는 " << sizeof n_short << "바이트이다. " << endl;
	cout << "이 바이트의 최대값은 " << n_short << " 이다." << endl;

	cout << "long은 " << sizeof n_long << "바이트이다. " << endl;
	cout << "이 바이트의 최대값은 " << n_long << " 이다." << endl;

	cout << "long long은 " << sizeof n_llong << "바이트이다. " << endl;
	cout << "이 바이트의 최대값은 " << n_llong << " 이다." << endl;
	*/
	//실수형 : 소수부가 있는 수
	/*float a = 3.14;
	int b = 3.14;
	cout << a << " " << b << endl;*/
	//char 작은 문자형
	/*int a = 77;
	char b = a;
	cout << b << endl;*/
	//bool : 0(false) 혹은 1(true)
	/*bool a = 0;
	bool b = 1;
	bool c = 10;
	cout << a << " " << b << " " << c << endl;*/
	//상수 : 바뀔 필요가 없는 수, 바뀌어서는 안되는 수
	//원의 넓이를 구하는 프로그램
	//반지름 * 반지름 * 파이
	/*const float PI = 3.1415926535;
	int r = 3;
	float s = r * r * PI;

	int r2 = 5;
	float s2 = r2 * r2 * PI;

	cout << s << endl;
	cout << s2 << endl;*/
	//데이터형 변활
	//강제적으로 데이터형 변환
	//typeName(a) (typeName)a
	//c++
	//static_cast<typeName>
	/*
	1. 특정 데이터형의 변수에 다른 데이터형의 값을 대입했을 떄
	2. 수식에 데이터형을 혼합하여 사용했을 떄
	3. 함수에 매개변수를 전달할 때
	*/
	/*int a = 3.141592;
	cout << a << endl;
	char ch = 'M';
	cout << (int)ch << " " << int(ch) << endl;
	cout << static_cast<float>(ch) << endl;*/
	//auto 초기화하는 데이터를 보고 데이터형을 결정함
	/*auto ch = 100;
	auto x = 1.5;
	auto y = 1.3e12L;
	auto name = "Lee";
	cout << name << endl;*/
	//c++는 복합데이터형을 제공한다
	// >>사용자 정의대로 새로운 데이터형을 만들 수 있다.
	//복합데이터형 : 기본 정수형과 부동소수점형의 조합
	//배열 : 같은 데이터형의 집합
	//typeName arrayName[arraySize]
	/*short month[12] = { 1,2,3 };
	cout << month[4] << endl;
	char a[6] = { 'h','e','l','l','o','\0'};
	cout << a << endl;
	char b[] = "Hello";
	cout << b << endl;*/
	//간단한 예제
	/*const int size=15;
	char name1[size];
	char name2[size] = "Mizue Lee";

	cout << "안녕하세요! 저는 " << name2 << "입니다." << endl;
	cout << "성함이 어떻게 되시나요?\n";
	cin.getline(name1, size);
	cout << "음, " << name1 << "님." << endl;
	cout << "당신의 이름은 " << strlen(name1) << "자 입니다만\n";
	cout << sizeof(name1) << " 바이트 크기의 배열에 저장되었습니다.\n";
	cout << "성함이 " << name1[0] << "자로 시작하시는군요." << endl;
	name2[3] = '\0';
	cout << "제 이름의 첫 세 글자는 다음과 같습니다 : ";
	cout << name2 << endl;*/
	/*
	C++에서 문자열을 다루는 방법인 string
	c스타일로 string 객체를 초기화할 수 있따
	cin을 사용하여 string 객체에 키보드 입력을 저장할 수 있다.
	cout을 사용하여 string 객체를 디스플레이 할 수 있다.
	배열 표기를 사용하여 string 객체에 저장되어 있는 개별적인 문자들에 접근할 수 있다.

	배열을 다른 배열에 통째로 대입할 수 없다.
	>>string에서는 이것이 가능하다.
	*/
	/*char char1[20];
	char char2[20] = "JAGUAR";
	string str1;
	string str2 = "TIGER";
	str1 = str2;
	cout << str1 << endl;
	cout << str1[0] << endl;*/
	//구조체 : 다른 데이터형이 허용되는 데이터의 집합
	//배열 : 같은 데이터형의 집합
	/*struct runner 
		{
			string name;
			string position;
			float height;
			float weight;
		} run3;
	runner run1, run2 = { "Diluc Ragnvindr", "Striker",185,89 };
	run1.name = "Mizue Lee";
	run1.position = "Goll Keeper";
	run1.height = 167.7;
	run1.weight = 59.0;
	

	cout << "선수 소개" << endl;
	cout << "첫 번째 선수\n이름 : " << run1.name << "\n포지션 : " << run1.position << "\n키 : " << run1.height << "\n몸무게 : " << run1.weight << endl;
	cout << "두 번째 선수\n이름 : " << run2.name << "\n포지션 : " << run2.position << "\n키 : " << run2.height << "\n몸무게 : " << run2.weight << endl;


	runner run[2] = {
		{"Zhongli","Adepti",189,90},
		{"Childe","Fatus",187,95}
	};
	cout << run[0].name << endl;*/
	/*
		//구조체 : 다른 데이터형이 허용되는 데이터의 집합
		//cf) 배열 : 같은 데이터형의 집합
		//축구선수
		struct runner
		{
			string name;
			string position;
			int height;
			int weight;
			//멤버라는 구조체의 구성정보
		} B;


		runner A = {
			"Son",
			"Striker",
			183,
			77
		};

		cout << A.name << endl;
		cout << A.position << endl;
		cout << A.height << endl;
		cout << A.weight << endl;
		//cout << A << endl; 는 안되나? -> 에러남

		B = {}; //배열처럼 아무것도 안넣으면 0으로 초기화됨.

		cout << B.name << endl;
		cout << B.position << endl;
		cout << B.height << endl;
		cout << B.weight << endl;

		//이 데이터들 모두 한 사람의 정보


		runner A[2] = {
			{"A", "A", 1, 1},
			{"B","B",2,2}
		};
		cout << A[0].height << endl;
	*/
	//공용체와 열거체
//공용체(union)
//설로 다른 데이터형을 한 번에 한 가지만 보관할 수 있음.
//union MyUnion
//{
//	int intVal;
//	long longVal;
//	float floatVal;
//};
//
//MyUnion test;
//test.intVal = 3;
//cout << test.intVal << endl;
//
//test.longVal = 33;
//cout << test.intVal << endl;
//cout << test.longVal << endl;
//
//test.floatVal = 3.3;
//cout << test.intVal << endl;
//cout << test.longVal << endl;
//cout << test.floatVal << endl;
//열거체(enum)
//기호 상수를 만드는 것에 대한 또다른 방법.
//spectrum을 새로운 데이터형 이름으로 만듬
//0부터 +1하여 정수 값을 각각 나타내는 기호 상수로 만듬
//초기화 시에 정수로 지정 가능
//enum spectrum {red=0, orange=1, yellow=2, green=3, blue=5, indigo=8, violet=13};
//
//spectrum a = red;
//cout << a << endl;
//
//int b;
//b = blue;
//cout << b << endl;
//b = blue + 3;
//cout << b << endl;
// 
	//포인터.........
	//int val = 3;
	//cout << &val << endl;
	////C++ ; 객체지향 프로그래밍
	////컴파일 시간이 아닌 실행 시간에 어떠한 결정을 내릴 수 있다.
	////그때그때 상황에 맞게 융통성 있게
	////ex. 배열 생성
	////재래적 절차적 프로그래밍 : 배열의 크기가 미리 결정됨
	////객체지향 프로그래밍 : 배열의 크기를 실행 시간에 결정할 수 있음
	////포인터 : 사용할 주소에 이름을 붙인다.
	////즉, 포인터는 포인터의 이름이 주소를 나타냄
	////간접값 연삱, 간접 참조 연산자 * 
	//int *a; //c style
	//int* b; //c++ style
	//int* c, d; //c는 포인터 변수, d는 int형 변수
	//int a = 6;
	//int* b;
	//b = &a;
	//cout << "a의 값 " << a << endl;
	//cout << "*b의 값 " << *b << endl;
	//cout << "a의 주소 " << &a << endl;
	//cout << "*b의 주소 " << b << endl;
	//*b = *b + 1;
	//cout << "이제 a의 값은 " << a << endl;
	////new 연산자
	////어떤 데이터형을 원하는지 new연산자에게 알려주면
	////new 연산자는 그에 알맞은 크기의 메모리 블록을 찾아내고 그 블록의 주소를 리턴함
	//int* pointer = new int;
	////이 경우 포인터는 메모리 객체를 가리키고
	////메모리 사용권을 사용자에게 줄 수 있다
	//delete pointer;
	////delete 연산자
	////사용한 메모리를 다시 메모리 풀로 환수
	////환수된 메모리는 프로그램의 다른 부분이 다시 사용
	////사용 이후 반드시 delete를 해줘야함
	//int* ps = new int;
	////메모리 사용
	//delete ps;
	////new로 대입하지 않은 메모리를 delete로 해제할 수 없다
	////같은 메모리 블록을 연달아 두 번 delete로 해제할 수 없다
	////new[]로 메모리를 대입할 경우 delete[]로 해제한다
	////대괄호를 사용하지 않았다면 delete도 대괄호를 사용하지 않아야 한다.
	//
	//double* p3 = new double[3];
	//p3[0] = 1.2;
	//p3[1] = 2.5;
	//p3[2] = 7.8;
	//cout << "p[3] is " << p3[1] << ".\n";
	//p3 = p3 + 1;
	//cout << "Now p3[0] is " << p3[0] << " and ";
	//cout << "p3[1] is " << p3[1] << ".\n";
	//p3 = p3 - 1;
	//delete[] p3;

	//char animal[SIZE];
	//char* ps;
	//cout << "동물 이름을 입력하십시오\n";
	//cin >> animal;
	//ps = new char[strlen(animal) + 1]; //한칸 더 넉넉하게
	//strcpy(ps, animal);
	//cout << "입력하신 동물 이름을 복사하였습니다." << endl;
	//cout << "입력하신 동물 이름은 " << animal << "이고, ";
	//cout << "그 주소는 " << (int*)animal << "입니다." << endl;
	//cout << "복사된 동물 이름은 " << ps << "이고, ";
	//cout << "복사된 주소는 " << (int*)ps << "입니다." << endl;

	//동적 메모리 dynamic memory
	/*
	컴파일을 할 때 배열의 크기를 결정하는 것 보다
	실행할 때 배열의 크기를 결정하는 것이 메모리 관리에서 훨씬 유리
	메모리 생성시 new를 사용하여 동적 구조체를 생성 가능
	컴파일 시간이 아닌 실행 시간에 메모리를 대입 받는것
	*/

	//동적 구조체 생성
	//temp* 변수명 = new temp;
	//멤버 연산자 : ->
	struct MyStruct
	{
		char name[20];
		int age;
	};

	MyStruct* temp = new MyStruct;

	cout << "당신의 이름을 입력하십시오" << endl;
	cin >> temp->name;

	cout << "당신의 나이를 입력하십시오" << endl;
	cin >> (*temp).age; //롸?

	cout << temp->name << "씨, 안녕하세요!" << endl;
	cout << "당신은 " << temp->age << "살 이군요!";

	return 0;
}
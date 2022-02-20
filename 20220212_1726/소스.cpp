#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	int _age;
	int _classNum;
	int _grade;

public:
	string _name;
	static int count;

	Student(string name) : _name(name)
	{
		cout << _name << " 持失切" << endl;
		_age = 0;
		_classNum = 0;
		_grade = 0;
		count++;
	}

	~Student()
	{
		cout << _name << " 社瑚切" << endl;
		count--;
	}

	static int GetCount()
	{
		return count;
	}

	void info() {
		cout << _age << endl;
		cout << _classNum << endl;
		cout << _grade << endl;
	}
};

int Student::count = 0;

int main()
{
	Student st("st");
	st.info();
	cout << "count = " << Student::GetCount() << endl;
	cout << "count = " << st.GetCount() << endl;

	{
		Student st1("st1");
		cout << "count = " << st.count << endl;
	}
	
	Student st2("st2");
	cout << "count = " << st.count << endl;

	return 0;
}
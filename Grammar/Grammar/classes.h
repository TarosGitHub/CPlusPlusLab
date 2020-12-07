#pragma once

#include <string>

class Person {
	static int s;
	std::string name;
	int age;

public:
	// コンストラクタ
	Person() {}
	Person(std::string name, int age) : name(name), age(age) {}

	// コピーコンストラクタ
	Person(const Person& src) : name(src.name), age(src.age) {}

	// 代入演算子
	Person& operator=(const Person& src)
	{
		this->name = src.name;
		this->age = src.age;

		return *this;
	}

	// デストラクタ
	virtual ~Person() {}

	static int get_s()
	{
		return Person::s;
	}

	std::string get_name() const;

	int get_age() const;

	void show() const;

protected:
	void set_name(std::string name);

	void set_age(int age);
};

class Student : public Person {
	int id;

public:
	Student(std::string name, int age, int id) : Person(name, age), id(id) {}
};

// 抽象クラス
class Shape {
public:
	virtual std::string draw() = 0; // 純粋仮想関数
};

class Square : public Shape {
public:
	// override
	std::string draw();
};

class Circle : public Shape {
public:
	// override
	std::string draw();
};

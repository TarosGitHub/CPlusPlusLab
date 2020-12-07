#pragma once

#include <string>

class Person {
	static int s;
	std::string name;
	int age;

public:
	// �R���X�g���N�^
	Person() {}
	Person(std::string name, int age) : name(name), age(age) {}

	// �R�s�[�R���X�g���N�^
	Person(const Person& src) : name(src.name), age(src.age) {}

	// ������Z�q
	Person& operator=(const Person& src)
	{
		this->name = src.name;
		this->age = src.age;

		return *this;
	}

	// �f�X�g���N�^
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

// ���ۃN���X
class Shape {
public:
	virtual std::string draw() = 0; // �������z�֐�
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


#ifndef _NONOVERLOADEDMEMBEROPERATORS_H_
#define _NONOVERLOADEDMEMBEROPERATORS_H_

class Mystring2 {
	friend Mystring2 operator+(const Mystring2& lhs, const Mystring2& rhs);
	friend Mystring2 operator-(const Mystring2& Obj);
	friend bool operator==(const Mystring2& lhs, const Mystring2& rhs);
	friend bool operator<(const Mystring2& lhs, const Mystring2& rhs);
private:
	char* str;
public:
	Mystring2();
	Mystring2(const char* s);
	Mystring2(const Mystring2& source);
	~Mystring2();
	void display() const;
	int get_length() const;
	const char* get_str() const;

	Mystring2& operator=(const Mystring2& rhs);
	Mystring2& operator=(Mystring2&& rhs);
};
#endif // !_NONOVERLOADEDMEMBEROPERATORS_H_
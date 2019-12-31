#include <vector>
#include <iostream>
#include <algorithm>



class A {
	int m_id = 0;
	static inline size_t generator = 505;
public:
	A(int id) : m_id(id) {
		std::cout << "Normal constructor with ID: " << m_id << ".\n";
	}

	A() : m_id(generator++) {
		std::cout << "Default constructor " << m_id << ".\n";
	}

	A(const A& source) {
		m_id = source.m_id;
		std::cout << "Copy constructor " << m_id << ".\n";
	}

	A& operator=(const A& source) {
		m_id = source.m_id;
		std::cout << "Assignment operator for source value " << source.m_id << ".\n";
		return *this;
	}
	~A() {
		std::cout << "Destructor of class " << m_id << ".\n";
	};

};


int main() {

	//Dokaz da se klicejo assignment operatorji in sicer tolikokrat, kolikor je ostalo elementov zadaj
	//za zadnjim izbrisanim
	std::vector <A> v1(30);
	v1[0] = 2000;
	v1[1] = 2001;
	v1[2] = 2002;
	v1[3] = 2003;
	v1[4] = 2004;
	v1[5] = 2005;
	v1[6] = 2006;
	v1[7] = 2007;
	v1[8] = 2008;
	v1[9] = 2009;
	v1[10] = 2010;
	v1[11] = 2011;
	v1[12] = 2012;

	v1.erase(v1.begin() + 3, v1.begin() + 7);

	std::cout << "--------------Separator------------------\n";
	return 0;
}
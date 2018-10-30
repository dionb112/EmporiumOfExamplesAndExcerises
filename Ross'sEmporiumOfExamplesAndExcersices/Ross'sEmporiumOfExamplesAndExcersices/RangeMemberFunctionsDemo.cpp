#include <iostream>
#include <vector>
#include <memory>
#include <string>
using namespace std;

class Particle {
public:
	Particle(int ttl = 0) : m_ttl(ttl) {
		std::cout << "Constructor called " << m_ttl << std::endl;
	}
	// other member functions...
	Particle(Particle const & particle) : m_ttl(particle.m_ttl) {
		std::cout << "Copy constructor called " << m_ttl << std::endl;
	}

	Particle & operator=(Particle const & particle) {
		m_ttl = particle.m_ttl;
		std::cout << "Assignment operator called " << particle.m_ttl << std::endl;
		return *this;
	}

	~Particle() {
		std::cout << " ~Particle() " << m_ttl << std::endl;
	}

private:
	int m_ttl;
};

// Define a node in a list
template<typename T>
class SListNode
{
public:
	SListNode(T data) : m_data(data) {}
	void setNext(std::unique_ptr<SListNode<T>> & next)
	{
		std::swap(m_next, next);
	}
	T data()
	{
		return m_data;
	}
	SListNode<T> *next()
	{
		return m_next.get();
	}
private:
	T m_data;
	std::unique_ptr<SListNode<T>> m_next;
};

int main6() {

	std::unique_ptr<SListNode<std::string>> node1 =
		std::make_unique<SListNode<std::string>>("Hi");
	std::unique_ptr<SListNode<std::string>> node2 =
		std::make_unique<SListNode<std::string>>("Dude");
	std::unique_ptr<SListNode<std::string>> node3 =
		std::make_unique<SListNode<std::string>>("wadup");
	node1->setNext(node2);
	node1->next()->setNext(node3);
	// iterate through the list
	SListNode<std::string> *current = node1.get();
	while (current != nullptr)
	{
		std::cout << "Data: " << current->data() << std::endl;
		current = current->next();
	}


	int numValues = 3;
	Particle data[] = { Particle(1),Particle(2),Particle(3) };
	std::vector<Particle> v;

	v.reserve(10);
	v.push_back(Particle(4));
	v.push_back(Particle(5));
	v.push_back(Particle(6));
	std::cout << "-------------------------------------" << std::endl;

	std::vector<Particle>::iterator insertLoc(v.begin());
	for (int i = 0; i < numValues; ++i) {
		insertLoc = v.insert(insertLoc, data[i]);
		std::cout << "-------------------------------------" << std::endl;
	}
	// v.insert(v.begin(), data, data + numValues);	
	system("PAUSE");
	return 6;
}
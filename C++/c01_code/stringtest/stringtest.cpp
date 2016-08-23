#include <string>
#include <iostream>

using namespace std;


class Apple
{
public:
	const string &getColor() const;

	void setColor(const string &color);

	const string &getType() const;

	void setType(const string &type);

	void printApples();

private:
	std::string color;
public:
	int getQuanity() const;

	void setQuanity(int quanity);

	Apple operator+(Apple &a);

private:
	std::string type;
	int quanity;
public:
	Apple();

	Apple(Apple &a);

	virtual ~Apple();
};

Apple::Apple()
{
	cout << "Hello Apple" << endl;
	cout << "Apple Color " << this->color << endl;
	cout << "Apple type " << this->type << endl << endl;

}

Apple::~Apple()
{
	cout << "Good Bye Apple" << endl;
	cout << "Apple Color " << this->color << endl;
	cout << "Apple type " << this->type << endl;
}

Apple::Apple(Apple &a)
{
	a.type = this->type;
	a.color = this->color;
	a.quanity = this->quanity;
}

const string &Apple::getColor() const
{
	return color;
}

void Apple::setColor(const string &color)
{
	Apple::color = color;
}

const string &Apple::getType() const
{
	return type;
}

void Apple::setType(const string &type)
{
	Apple::type = type;
}

void Apple::printApples()
{

	cout << "Apple Color " << this->color << endl;
	cout << "Apple type " << this->type << endl << endl;
	cout << "# of Apples   " << this->quanity << endl << endl;
}

int Apple::getQuanity() const
{
	return quanity;
}

void Apple::setQuanity(int quanity)
{
	Apple::quanity = quanity;
}

Apple Apple::operator+(Apple &a)
{
	this->quanity = this->quanity + a.quanity;
	return a;
}


int main()
{

	Apple a;
	a.setColor("Green");
	a.setType("Mustang");
	a.setQuanity(100);
	a.printApples();

	Apple b;

	b.printApples();
	b + a;
	b.printApples();






	return 0;
}

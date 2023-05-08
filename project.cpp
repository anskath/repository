#include <iostream>
using namespace std;
class Shape // base class
{
public:
	int x, y;
	float scale;
	Shape(int cx, int cy, float _scale)
	{
		x = cx;
		y = cy;
		scale = _scale;
	};
	virtual void showShape() = 0;
	virtual void moveShape(int mx, int my) = 0;
	virtual void eraseShape() = 0;
};
class Circle : public Shape // derived class
{
public:
	Circle(int cx, int cy, float _scale) :Shape(cx, cy, _scale) {}
	void showShape()
	{
		cout << "Circle with center in coordinates " << "(" << x << "; " << y << ")" << " and a scale fact in the " << scale << endl;
	}
	void moveShape(int mx, int my)
	{
		cout << "Now the circle is located at the coordinates " << "(" << mx << "; " << my << ")" << endl;
	}
	void eraseShape()
	{
		cout << "The circle is erased" << endl;
	}
};
int main()
{
	int x, y;
	cout << "Enter the initial coordinates of the center of the circle(x; y):" << endl;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	float scale;
	cout << "Enter the scale factor: ";
	cin >> scale;
	Shape *ptr;
	Circle circle(x, y, scale);
	ptr = &circle;
	ptr->showShape();
	int mx, my;
	cout << "Enter coordinates to move the circle(x; y):" << endl;
	cout << "x = ";
	cin >> mx;
	cout << "y = ";
	cin >> my;
	ptr->moveShape(mx, my);
	char choice;
	cout << "Do you want to erase the circle?(y/n) ";
	cin >> choice;
	if (choice == 'y' || choice == 'Y')
	{
		ptr->eraseShape();
	}
	return 0;
}
#include <iostream>
using namespace std;
class Shape
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
class Circle : public Shape
{
public:
	Circle(int cx, int cy, float _scale) :Shape(cx, cy, _scale) {}
	void showShape()
	{
		cout << "���� � ������� � ����������� " << "(" << x << "; " << y << ")" << " �� ���������� ������ � " << scale << endl;
	}
	void moveShape(int mx, int my)
	{
		cout << "����� ���� ����������� �� ����������� " << "(" << mx << "; " << my << ")" << endl;
	}
	void eraseShape()
	{
		cout << "���� ������" << endl;
	}
};
int main()
{
	int x, y;
	cout << "������ �������� ���������� ������ ����(x; y):" << endl;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	float scale;
	cout << "������ ���������� ������: ";
	cin >> scale;
	Shape *ptr;
	Circle circle(x, y, scale);
	ptr = &circle;
	ptr->showShape();
	int mx, my;
	cout << "������ ����������, ��� ���������� ����(x; y):" << endl;
	cout << "x = ";
	cin >> mx;
	cout << "y = ";
	cin >> my;
	ptr->moveShape(mx, my);
	char choice;
	cout << "�� ������ �� ������ ����?(y/n): ";
	cin >> choice;
	if (choice == 'y' || choice == 'Y')
	{
		ptr->eraseShape();
	}
	return 0;
}
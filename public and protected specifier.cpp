#include <iostream>
using namespace std;
class Circle{
	private:
	float radius;
	public:
	void setRadius(float radius){
		this->radius=radius;
	}
	double getArea(){
		return 3.14*radius*radius;
	}
};

int main() {
	Circle circle;
	circle.setRadius(5);
	double Area=circle.getArea();
	cout<<"area of circle is:"<<Area<<endl;
	


	return 0;
}
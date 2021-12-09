#include <iostream>
using namespace std;
class Shape
{
protected:
  float l, h;
public:
  Shape(float largeur, float hauteur)
  {
    l = largeur;
    h = hauteur;
  }
};
class Rectangle: public Shape
{
public:
  Rectangle(float largeur, float hauteur) : Shape(largeur, hauteur) {}
  float area()
  {
    return (l * h);
  }
};
class Triangle: public Shape
{
public:
  Triangle(float largeur, float hauteur) : Shape(largeur, hauteur) {}
  float area()
  {
    return (l * h / 2);
  }
};
int main (){
  Rectangle rectangle(5,4);
  Triangle triangle(2,3);
  cout <<"la surface du rectangle est :" <<rectangle.area() << endl;   
  cout <<"la surface de triangle est :" <<triangle.area() << endl;    
  return 0;
}

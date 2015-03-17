#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

//Square
class Square
{
	public:
		float base;
		string shape;
  		Square(const string& xshape = "", const float& xbase = 0);
		float getbase() const;
		string getshape() const;
		void setbase(const float& xbase = 0);
		void setshape(const string& xshape = "");
		float embadon();
};

Square::Square(const string& xshape, const float& xbase)
{
	base = xbase;
	shape = xshape;
}

float Square::getbase() const
{
	return base;
}

string Square::getshape() const
{
	return shape;
}

void Square::setbase(const float& xbase)
{
	base = xbase;
}

void Square::setshape(const string& xshape)
{
	shape = xshape;
}

float Square::embadon()
{
    return base*base;
}

//Rectangular
class Rectangular:public Square
{
    public:
	float height;
  	Rectangular(const float& xheight = 0);
	float getheight() const;
	void setheight(const float& xheight = 0);
	float embadon();
};

Rectangular::Rectangular(const float& xheight)
{
	height = xheight;
}

float Rectangular::getheight() const
{
	return height;
}

void Rectangular::setheight(const float& xheight)
{
	height = xheight;
}

float Rectangular::embadon()
{
	return (base*height);
}

//Triangle
class Triangle:public Rectangular
{
    public:
  	Triangle();
	float embadon();
};

Triangle::Triangle()
{
}

float Triangle::embadon()
{
	return (Rectangular::embadon()/2);
}

//Trapeze
class Trapeze:public Rectangular
{
    public:
      	float longbase;
  	Trapeze(const float& xlongbase = 0);
  	float getlongbase() const;
  	void setlongbase(const float& xlongbase);
	float embadon();
};

Trapeze::Trapeze(const float& xlongbase)
{
	longbase = xlongbase;
}

float Trapeze::getlongbase() const
{
	return longbase;
}

void Trapeze::setlongbase(const float& xlongbase)
{
	longbase = xlongbase;
}

float Trapeze::embadon()
{
	return (base+longbase)*height/2;
}

void menu();
float shape1();
float shape2();
float shape3();
float shape4();

int main()
{
    system("color f1");
    
    float final = 0;
    
    while(true)
    {
        
        	    menu();
		    int choice;
		    cin>>choice;
		    cout<<" ************************************* "<<endl;

		    if (choice==1)
		    {
			final+=shape1();
		    }

		    if (choice==2)
		    {
        		final+=shape2();
		    }

		    if (choice==3)
		    {
        		final+=shape3();
		    }

		    if (choice==4)
		    {
        		final+=shape4();
		    }

		    if (choice==0)
		    {
			    break;
		    }

		    if ((choice!=1)&&(choice!=2)&&(choice!=3)&&(choice!=4)&&(choice!=0))
		    {
			cout<<" ERROR: Invalid Choice"<<endl<<endl;
		    }else{
        		cout<<" *************************************"<<endl;
			cout<<"        SUNOLIKO EMBADON: "<<final<<endl;
			cout<<" *************************************"<<endl;
    		    }
		
	system("pause");
    }
}

void menu()
{
	system("cls");
 	cout<<" ************************************* "<<endl;
	cout<<" Add Square ------------------------ 1"<<endl;
	cout<<" Add Rectangule -------------------- 2"<<endl;
	cout<<" Add Triangle ---------------------- 3"<<endl;
	cout<<" Add Trapeze ----------------------- 4"<<endl;
	cout<<" Close ----------------------------- 0"<<endl;
	cout<<"              Choice: ";
}

float shape1()
{
	Square newshape;

	string shape = "Square";
	newshape.setshape(shape);

	float base;
	cout<<" Base: ";
	cin>>base;
	newshape.setbase(base);

  	cout<<" ------------------------------------- "<<endl;
	cout<<" Embadon Square: "<<newshape.embadon()<<endl<<endl;
	
	return newshape.embadon();
}

float shape2()
{
	Rectangular newshape;

	string shape = " Rectangular";
	newshape.setshape(shape);

	float base;
	cout<<" Base: ";
	cin>>base;
	newshape.setbase(base);

  	float height;
	cout<<" Height: ";
	cin>>height;
	newshape.setheight(height);

  	cout<<" ------------------------------------- "<<endl;
	cout<<" Embadon Rectangule: "<<newshape.embadon()<<endl<<endl;

	return newshape.embadon();
}

float shape3()
{
	Triangle newshape;

	string shape = "Triangle";
	newshape.setshape(shape);

	float base;
	cout<<" Base: ";
	cin>>base;
	newshape.setbase(base);

  	float height;
	cout<<" Height: ";
	cin>>height;
	newshape.setheight(height);

  	cout<<" ------------------------------------- "<<endl;
	cout<<" Embadon Triangle: "<<newshape.embadon()<<endl<<endl;

	return newshape.embadon();
}

float shape4()
{
	Trapeze newshape;

	string shape = "Trapeze";
	newshape.setshape(shape);

	float base;
	cout<<" Base: ";
	cin>>base;
	newshape.setbase(base);

	float longbase;
	cout<<" Long Base: ";
	cin>>longbase;
	newshape.setlongbase(longbase);

  	float height;
	cout<<" Height: ";
	cin>>height;
	newshape.setheight(height);

  	cout<<" ------------------------------------- "<<endl;
	cout<<" Embadon Trapeze: "<<newshape.embadon()<<endl<<endl;

	return newshape.embadon();
}

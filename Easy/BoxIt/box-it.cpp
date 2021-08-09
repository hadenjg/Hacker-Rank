#include <sstream>
#include <iostream>
#include <string>
#include <vector>

class Box{
    int l;
    int b;
    int h;
    public:

    int getLength()
    {
        return l;
    }

    int getBreadth()
    {
        return b;
    }

    int getHeight()
    {
        return h;
    }

    long long CalculateVolume()
    {
        return (long long)l*b*h;
    }

    //default constructor
    Box(){l=0; b=0; h=0;}
    Box(int length, int breadth, int height)
    {
        l = length;
        b = breadth;
        h = height;
    }
    //copy constructor
    Box(const Box& B)
    {
        l = B.l;
        b = B.b;
        h = B.h;
    }

    bool operator<(const Box& B)
    {
        if(this->l < B.l ||
               (this->l == B.l && this->b < B.b) ||
               (this->l == B.l && this->b == B.b && this->h == B.h))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    friend std::ostream &operator<<( std::ostream &output, const Box& B );

};

std::ostream &operator<<( std::ostream &output, const Box& B ) { 
    output << B.l << " " << B.b << " " << B.h;
    return output;            
}



void check2()
{
	int n;
    std::cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
        std::cin>>type;
		if(type ==1)
		{
            std::cout<<temp<<std::endl;
		}
		if(type == 2)
		{
			int l,b,h;
            std::cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
            std::cout<<temp<<std::endl;
		}
		if(type==3)
		{
			int l,b,h;
            std::cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
                std::cout<<"Lesser\n";
			}
			else
			{
                std::cout<<"Greater\n";
			}
		}
		if(type==4)
		{
            std::cout<<temp.CalculateVolume()<<std::endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
            std::cout<<NewBox<<std::endl;
		}

	}
}

int main()
{
	check2();
}

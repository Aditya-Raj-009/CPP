#include<iostream>
#include<sstream>
using namespace std;

class Box{
    int l,b,h;
    public:
        Box():l(0),b(0),h(0){}
        Box(int ln,int br, int he):l(ln),b(br),h(he){}
        Box(Box &box){
            box.l = this->l;
            box.b = this->b;
            box.h = this->h;
        }

        int getLength() const{
            return l;
        }
        int getBreadth() const{
            return b;
        }

        int getHeight() const
        {
            return h;
        }
        long long CalculateVolume() const{
            return l*b*h;
        }
        bool operator < (const Box &box) const{
            return this->l < box.l && this->b < box.b && this->h < box.h;
        }
        
        friend ostream &operator<<(ostream &out, const Box &box) {
        out << box.l << " " << box.b << " " << box.h;
        return out;
    }

};
int main(int argc, char const *argv[])
{
    Box b1(3, 4, 5);
    Box b2(b1);  // Uses copy constructor

    cout << "Box b1: " << b1 << endl;
    cout << "Box b2: " << b2 << endl;

    cout << "Volume of b1: " << b1.CalculateVolume() << endl;

    if (b1 < Box(6, 7, 8)) {
        cout << "b1 is smaller than (6, 7, 8)" << endl;
    }
    cout<<b1<<endl;
    return 0;
}

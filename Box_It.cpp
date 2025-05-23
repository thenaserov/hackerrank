#include<iostream>

using namespace std;

class Box{
public:
    Box() : l(0), b(0), h(0) {}
    Box(int _l, int _b, int _h) : l(_l), b(_b), h(_h) {}
    Box(const Box &copyBox) : l(copyBox.l), b(copyBox.b), h(copyBox.h) {}
    
    int getLength(){return l;}
    int getBreadth(){return b;}
    int getHeight(){return h;}
    
    long long CalculateVolume() const {return static_cast<long long>(l) * b * h;}
    
    bool operator < (Box &box) const {
        if (l != box.l) return l < box.l;
        if (b != box.b) return b < box.b;
        return h < box.h;
    }
    
    friend ostream & operator << (ostream &out, const Box &B){
        out << B.l << " " << B.b << " " << B.h; return out;
    }
private:
    int l, b, h;
    
};

void check2()
{
    int n;
    cin>>n;
    Box temp;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type ==1)
        {
            cout<<temp<<endl;
        }
        if(type == 2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            temp=NewBox;
            cout<<temp<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<temp)
            {
                cout<<"Lesser\n";
            }
            else
            {
                cout<<"Greater\n";
            }
        }
        if(type==4)
        {
            cout<<temp.CalculateVolume()<<endl;
        }
        if(type==5)
        {
            Box NewBox(temp);
            cout<<NewBox<<endl;
        }

    }
}

int main()
{
    check2();
}

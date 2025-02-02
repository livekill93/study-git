#include<iostream>

using namespace std;

class Point{
private:
    /* data */
    int xpos,ypos;

public:
    Point(int x, int y): xpos(x),ypos(y)
    {}
    void ShowPointInfo() const{
        cout<<"["<<xpos<<","<<ypos<<"]"<<endl;
    }
};

class Circle{
    private:
    int rad;
    Point center;
    
    public:
       Circle(int x, int y,int r): center(x, y){
        rad = r;
    }
    void ShowCircleInfo() const{
        cout<<"radius : "<<rad<<endl;
        center.ShowPointInfo();
    }
};


class Ring{
private:
    Circle inCircle;
    Circle outCircle;
public:
    Ring(int inX,int inY,int inR,int outX,int outY,int outR)
        :inCircle(inX,inY,inR), outCircle(outX,outY,outR)
    {
       
    }
    void ShowPointInfo() const{
        cout<<"Inner Circle Info..."<<endl;
        inCircle.ShowCircleInfo();
        cout<<"Outter Circle Info..."<<endl;
        outCircle.ShowCircleInfo();
    }
};


int main(){
    Ring ring(1,2,4,2,2,9);
    ring.ShowPointInfo();
    return 0;
}

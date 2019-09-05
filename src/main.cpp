#include <iostream>
#include <cstring>

using namespace std;

class Point
{
    private:
        int xpos, ypos;
    
    public:
        Point(int x=0, int y=0)
            : xpos(x), ypos(y)
        {
        }
        void ShowPosition() const
        {
            cout<<'['<<xpos<<", "<<ypos<<']'<<endl;
        }
        Point operator+=(const Point &ref)
        {
            this->xpos+=ref.xpos;
            this->ypos+=ref.ypos;
            
            return *this;
        }
        Point operator-=(const Point &ref)
        {
            this->xpos-=ref.xpos;
            this->ypos-=ref.ypos;
            
            return *this;
        }
        Point& operator++()
        {
            xpos+=1;
            ypos+=1;
            return *this;
        }
        const Point operator++(int)
        {
            const Point retobj(xpos, ypos);
            xpos+=1;
            ypos+=1;
            return retobj;
        }
        Point& operator-()
        {
            xpos=-xpos;
            ypos=-ypos;
            return *this;
        }
        
        friend Point& operator--(Point &ref);
        friend const Point operator--(Point &ref, int);
        friend bool operator==(const Point &pos1, const Point &pos2);
        friend bool operator!=(const Point &pos1, const Point &pos2);
        friend Point& operator~(Point &ref);
};

Point& operator~(Point &ref)
{
    int temp;
    
    temp=ref.xpos;
    ref.xpos=ref.ypos;
    ref.ypos=temp;
    
    return ref;
}
Point& operator--(Point &ref)
{
    ref.xpos-=1;
    ref.ypos-=1;
    return ref;
}
const Point operator--(Point &ref, int)
{
    const Point retobj(ref);
    ref.xpos-=1;
    ref.ypos-=1;
    return retobj;
}
bool operator==(const Point &pos1, const Point &pos2)
{
    if(pos1.xpos==pos2.xpos&&pos1.ypos==pos2.ypos)
        return true;
    else
        return false;
}

bool operator!=(const Point &pos1, const Point &pos2)
{
    return !(pos1==pos2);
}
int main(void)
{
    Point pos(3, 5);
    Point cpy;
    
    cpy=pos--;
    cpy.ShowPosition();
    pos.ShowPosition();
    
    cpy=pos++;
    cpy.ShowPosition();
    pos.ShowPosition();
    
    return 0;
}                                                              








#ifndef RECTANGLE_H
#define RECTANGE_H

class Vertex
{
public:
    Vertex();
    Vertex(const int x, const int y);
    void setVertex(const int x, const int y);
    void setX(const int x);
    void setY(const int y);
    int getX() const;
    int getY() const;
private:
    int _x;
    int _y;

};

class Rectangle
{
public:
    
public:
    Rectangle();
    Rectangle(const Vertex& a, const Vertex& b, const Vertex& c, const Vertex& d);
    double length() const;
    double width() const;
    double perimeter() const;
    double area() const;
    bool isSquare() const;
    void print() const;
    static double distance(const Vertex& a, const Vertex& b);

private:
    Vertex _a;
    Vertex _b;
    Vertex _c;
    Vertex _d;
};


#endif

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

struct Point {
    double x, y;
};

double distance(const Point& p1, const Point& p2) {
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    return sqrt(dx*dx + dy*dy);
}

bool isEquilateral(const Point& p1, const Point& p2, const Point& p3) {
    double d1 = distance(p1, p2);
    double d2 = distance(p1, p3);
    double d3 = distance(p2, p3);
    if((d1 == d2) && (d2 == d3)){
    	return 1;
	}
}

bool isIsosceles(const Point& p1, const Point& p2, const Point& p3) {
    double d1 = distance(p1, p2);
    double d2 = distance(p1, p3);
    double d3 = distance(p2, p3);
    return (d1 == d2) || (d1 == d3) || (d2 == d3);
}

bool isRightAngled(const Point& p1, const Point& p2, const Point& p3) {
    double d1 = distance(p1, p2);
    double d2 = distance(p1, p3);
    double d3 = distance(p2, p3);
    
    double sides[3] = { d1, d2, d3 };
    sort(sides, sides + 3);
    
    return (fabs(sides[0]*sides[0] + sides[1]*sides[1] - sides[2]*sides[2]) < 0.1);
}

bool areCollinear(const Point& p1, const Point& p2, const Point& p3) {
    double slope1 = (p2.y - p1.y) / (p2.x - p1.x);
    double slope2 = (p3.y - p2.y) / (p3.x - p2.x);
    
    return fabs(slope1 - slope2) < 0.1;
}

int main() {
    Point p1, p2, p3;
    
    cout << "Entrez les coordonnées du premier sommet (x y) : ";
    cin >> p1.x >> p1.y;
    
    cout << "Entrez les coordonnées du deuxième sommet (x y) : ";
    cin >> p2.x >> p2.y;
    
    cout << "Entrez les coordonnées du troisième sommet (x y) : ";
    cin >> p3.x >> p3.y;
    
    if (isEquilateral(p1, p2, p3)) {
        cout << "Le triangle est équilatéral." << endl;
    } else if (isIsosceles(p1, p2, p3)) {
        cout << "Le triangle est isocèle." << endl;
    } else if (isRightAngled(p1, p2, p3)) {
        cout << "Le triangle est rectangle." << endl;
    } else if (areCollinear(p1, p2, p3)) {
        cout << "Les trois points sont alignés." << endl;
    } else {
        cout << "Le triangle est quelconque." << endl;
    }
    
    return 0;
}
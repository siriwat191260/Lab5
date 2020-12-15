#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

    double deg2rad(double x){
        double r;
		r = x*(M_PI/180);
        return r;
}
    double rad2deg(double y){
        double d;
		d = y*(180/M_PI);
        return d;
}
    double findXComponent(double n1,double n2,double m1,double m2){
        double sum;
        sum = (n1*cos(m1))+(n2*cos(m2));
        return sum;
}
    double findYComponent(double N1,double N2,double M1,double M2){
        double total;
        total = (N1*sin(M1))+(N2*sin(M2));
        return total;
}
    double pythagoras(double X,double Y){
        double p;
        p = sqrt(pow(X,2)+pow(Y,2));
        return p;
}
    void showResult(double a,double b){
cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
cout<<"Length of the resultant vector = "<<a<<endl; 
cout<<"Direction of the resultant vector (deg) = "<<b<<endl;
cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}


int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
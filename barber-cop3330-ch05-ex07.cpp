#include <bits/stdc++.h>
#include <iostream>

using namespace std;

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Quinn Barber
 */

double* findRoot(double a, double b, double c)
{
    static double ret[2];
    double root1, root2;
    root1 = ((-b) + (sqrt((b*b)-(4*a*c))))/(2*a);
    root2 = ((-b) - (sqrt((b*b)-(4*a*c))))/(2*a);
    ret[0] = root1;
    ret[1] = root2;
    return ret;
}

 int main(void)
 {
    double a, b, c, x;
    cout << "Enter a, b, and c respectively to find the x in a quadratic equation:\n";
    cin >> a;
    cin >> b;
    cin >> c;
    double test = ((b*b) - (4*a*c));
    if( test < 0 ){
        cout << "No real roots\n";
        return 0;
    }
    double* print;
    print = findRoot(a, b, c);

    cout << "The first root using quadratic formula is " << print[0] << " and the second root is " << print[1] << "\n";

 }

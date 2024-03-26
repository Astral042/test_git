#include <iostream>

using namespace std;

class Distance
{
public:
    Distance() {}
    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }

    void displayDistance()
    {
        cout << "F: " << feet << " I: " << inches <<endl;
    }

    Distance operator-()
    {
        feet = -feet;
        inches = -inches;
        return Distance(feet, inches);
    }

    Distance operator+(const Distance& d)
    {
        Distance distance;
        distance.feet = feet + d.feet;
        distance.inches = inches + d.inches;
        return distance;
    }

    Distance operator-(const Distance& d)
    {
        Distance distance;
        distance.feet = feet - d.feet;
        distance.inches = inches - d.inches;
        return distance;
    }

    bool operator!=(const Distance& d)
    {
        return feet != d.feet || inches != d.inches;  
    }

    // output: outstream object, such as cout
    friend ostream &operator<<(ostream &output, const Distance &d)
    {
        output << "F : " << d.feet << " D : " << d.inches;
        return output;
    }

    friend istream &operator>>(istream &input, Distance &d)
    {
        input >> d.feet >> d.inches;
        return input;
    }

private:
    int feet = 0;
    int inches = 0; 
};

int main()
{
    Distance D1(11,10), D2(-5, 11);

    -D1;
    D1.displayDistance();

    -D2;
    D2.displayDistance();

    Distance D3 = D1 + D2;
    D3.displayDistance();

    Distance D4 = D1 - D2;
    D4.displayDistance();
    cout << (D3 != D4) << endl;

    cout << "Enter the value of object : " << endl;
    Distance D5;
    cin >> D5;
    cout << "D5: " << D5 << endl;


    return 0;
}
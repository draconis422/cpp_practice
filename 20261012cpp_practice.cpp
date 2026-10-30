#include<iostream>

using namespace std;

class Rectangle{
    private:
        int width;
        int height;

    public:
        void Set(int a, int b);
        int Area();
        void Show();
};

void Rectangle::Set(int a, int b){
    width = a;
    height = b;
}
    
int Rectangle::Area(){
    return width * height;
}

void Rectangle::Show(){
    cout << Rectangle::Area() << '\n';
}

int main(){
    Rectangle rec1;
    Rectangle rec2;
    rec1.Set(1, 2);
    rec2.Set(2, 3);
    rec1.Show();
    rec2.Show();
    return 0;
}
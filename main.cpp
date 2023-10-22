#include <iostream>
#include <windows.h>
#include <vector>
#include <conio.h>
using namespace std;

struct Product {
    string name;
    double price;
};

class ShoppingCart {
public:
    void addToCart(const string& productName, double productPrice) {
        Product product;
        product.name = productName;
        product.price = productPrice;
        cart.push_back(product);
    }

    void displayCart() {
        if (cart.empty()) {
            cout << "Your shopping cart is empty." << endl;
            return;
        }
        cout << "Your shopping cart contains:" << endl;
        for (const Product& product : cart) {
            cout << product.name << " - RM" << product.price << endl;
        }
    }

    double getTotalPrice() {
        double total = 0.0;
        for (const Product& product : cart) {
            total += product.price;
        }
        return total;
    }

private:
    vector<Product> cart;
};

void menu() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    cout << "~--------";
    SetConsoleTextAttribute(h, 4);
    cout << "SUNWAY ";
    SetConsoleTextAttribute(h, 2);
    cout << "XFARMS";
    SetConsoleTextAttribute(h, 7);
    cout << "--------~" << endl << endl;
    SetConsoleTextAttribute(h, 7);
    cout << "-----[";
    SetConsoleTextAttribute(h, 2);
    cout << "XFARMS";
    SetConsoleTextAttribute(h, 6);
    cout << " v1.0.0";
    SetConsoleTextAttribute(h, 7);
    cout << "]" << endl;
    cout << "-----[Copyright (c) DIIT Aug 2023 intake. All rights reserved]" << "\n\n";
    cout << "Get the finest quality produce at peak freshness and flavor to last \n";
    cout << "you through the weeks. -- learn more on ";
    SetConsoleTextAttribute(h, 1);
    cout << "https://sunwayxfarms.com" << endl << endl;
    SetConsoleTextAttribute(h, 7);
    cout << "Press ENTER to continue" << endl;
    while (_getch() != 13) {}
}

void products() {
    string vege[27]{"\nPRODUCTS","-----VEGETABLE SUBSCRIPTION-----","---------MONTHLY GROWNER--------","MONTHLY GROWNER 1 - Leafy","1) Salad lettuces - RM105","2) Hearty Asian greens - RM105","3) Salad & Asian Mix - RM105 \n","MONTHLY GROWNER 2 - Leafy","4) Salad lettuces - RM189","5) Hearty Asian Greens - RM189","6) Salad & Asian Mix - RM189 \n","MONTHLY GROWNER 3 - Leafy","7) Salad lettuces - RM270","8) Hearty Asian Greens - RM270","9) Salad & Asian Mix - RM270 \n","MONTHLY GROWNER - Fruity","10) MONTHLY GROWNER 1 - Fruity - RM120","11) MONTHLY GROWNER 2 -  Fruity - RM240 \n","---------ANNUAL GROWNER---------","ANNUAL GROWNER 1 - Leafy","12) Salad lettuces - RM1200","13) Hearty Asian Greens - RM1200","14) Salad & Asian Mix - RM1200 \n","----------DIY ECO KIT----------","15) Farm Kit - RM19","16) Compost Kit - RM49","17) Microgreens Kit - RM35"};
    for (int i = 0; i < 26; i++){
    cout << vege[i] << endl;
    }
}


int main() {
    menu();
    bool quit = false;
    int input;
    while ( quit != true) {
        products();
        cout << "User: ";
        cin >> input;
        switch(input) {
                
        }
    }
}
#include "common.h"

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
    cout << "Press ENTER to continue";
    while (_getch() != 13) {}
}

void products() {
    cout << "PRODUCTS" << endl;
    cout << "MONTHLY GROWNER 1" << endl;
    cout << "1) Salad lettuces - RM105" << endl;
    cout << "2) Hearty Asian greens - RM105" << endl;
    cout << "3) Salad & Asian Mix - RM105" << endl;
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
            case 1:
                
        }
    }
}
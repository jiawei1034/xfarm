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
            cout << "Your cart is empty." << endl;
            return;
        }
        cout << endl << "CART:" << endl;
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
    cout << "-----[Copyright (c) DIIT Aug 2023 intake. All rights reserved]" << endl << endl;
    cout << "Get the finest quality produce at peak freshness and flavor to last" << endl;
    cout << "you through the weeks. -- learn more on ";
    SetConsoleTextAttribute(h, 1);
    cout << "https://sunwayxfarms.com" << endl << endl;
    SetConsoleTextAttribute(h, 7);
    cout << "Press ENTER to continue";
    while (_getch() != 13) {}
}

void displayProduct(ShoppingCart& cart, const string& productName, double productPrice) {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    cout << endl << "ADD TO CART?" << endl << endl;
    cout << "TO CONFIRM, PRESS '7'" << endl;
    cout << "PRESS '8' TO CANCEL";
    while (true) {
        int input = _getch();
        if (input == '7') {
            cart.addToCart(productName, productPrice);
            SetConsoleTextAttribute(h, 2);
            cout << endl << endl << "ADDED TO CART!" << endl << endl;
            SetConsoleTextAttribute(h, 7);
            cout << "Press ENTER to continue";
            while (_getch() != 13) {}
            break;
        } 
        else if (input == '8') {
            SetConsoleTextAttribute(h, 4);
            cout << endl << endl << "CANCELED!" << endl << endl;
            SetConsoleTextAttribute(h, 7);
            cout << "Press ENTER to continue";
            while (_getch() != 13) {}
            break;
        }
        else {
            SetConsoleTextAttribute(h, 4);
            cout << endl << endl << "Invalid Input" << endl;
            SetConsoleTextAttribute(h, 7);
            cout << "TO CONFIRM, PRESS '7'" << endl;
            cout << "PRESS '8' TO CANCEL";
        }
    }
}

void products() {
    string vege[26]{"\n-----VEGETABLE SUBSCRIPTION-----", "---------MONTHLY GROWNER--------", "MONTHLY GROWNER 1 - Leafy",
    "1) Salad lettuces - RM105", "2) Hearty Asian greens - RM105","3) Salad & Asian Mix - RM105 \n",
    "MONTHLY GROWNER 2 - Leafy", "4) Salad lettuces - RM189", "5) Hearty Asian Greens - RM189", "6) Salad & Asian Mix - RM189 \n",
    "MONTHLY GROWNER 3 - Leafy", "7) Salad lettuces - RM270", "8) Hearty Asian Greens - RM270", "9) Salad & Asian Mix - RM270 \n",
    "MONTHLY GROWNER - Fruity", "10) MONTHLY GROWNER 1 - Fruity - RM120", "11) MONTHLY GROWNER 2 -  Fruity - RM240 \n",
    "---------ANNUAL GROWNER---------", "ANNUAL GROWNER 1 - Leafy", "12) Salad lettuces - RM1200", "13) Hearty Asian Greens - RM1200","14) Salad & Asian Mix - RM1200 \n",
    "----------DIY ECO KIT----------", "15) Farm Kit - RM19", "16) Compost Kit - RM49", "17) Microgreens Kit - RM35"};
    for (int i = 0; i < 26; i++){
        cout << vege[i] << endl;
    }
}

int main() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    ShoppingCart cart;
    bool quit = false;
    int input;
    menu();
    while (!quit) {
        products();
        cout << endl;
        cout << "User: ";
        cin >> input;
        switch(input) {
            case 1:
                displayProduct(cart, "Salad lettuces", 105.00);
                break;
            case 2:
                displayProduct(cart, "Hearty Asian greens", 105.00);
                break;
            case 3:
                displayProduct(cart, "Salad & Asian Mix", 105.00);
                break;
            case 4:
                displayProduct(cart, "Salad lettuces", 189.00);
                break;
            case 5:
                displayProduct(cart, "Hearty Asian greens", 189.00);
                break;
            case 6:
                displayProduct(cart, "Salad & Asian Mix", 189.00);
                break;
            case 7:
                displayProduct(cart, "Salad lettuces", 270.00);
                break;
            case 8:
                displayProduct(cart, "Hearty Asian Greens", 270.00);
                break;
            case 9:
                displayProduct(cart, "Salad & Asian Mix", 270.00);
                break;
            default:
                SetConsoleTextAttribute(h, 4);
                cout << endl << "Invalid Input" << endl;
                 SetConsoleTextAttribute(h, 7);
                cout << "Press ENTER to continue";
                while (_getch() != 13) {}
                break;
            case 0:
                cart.displayCart();
                double totalPrice = cart.getTotalPrice();
                cout << endl << "Total Price: RM" << totalPrice << endl;
                return 0;
        }
    }
}

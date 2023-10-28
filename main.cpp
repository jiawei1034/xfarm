#include <iostream>
#include <windows.h>
#include <vector>
#include <conio.h>
using namespace std;

struct Product {    // Struct to represent a product
    string name;
    double price;
};

class ShoppingCart {    // Class to manage the shopping cart
public:
    void addToCart(const string& productName, double productPrice) {
        Product product;
        product.name = productName;
        product.price = productPrice;
        cart.push_back(product);    // Add the product to the shopping cart.
    }

    void displayCart() {     // Display the items in the shopping cart.
        if (cart.empty()) {
            cout << "Your cart is empty." << endl;
            return;
        }
        cout << endl << "CART:" << endl;
        for (const Product& product : cart) {
            cout << product.name << " - RM" << product.price << endl; 
        }
    }
    double getTotalPrice() {      // Calculate and return the total price of items in the cart.
        double total = 0.0;
        for (const Product& product : cart) {
            total += product.price;     // Calculate total item price. 
        }
        return total;
    }

private:
    vector<Product> cart;   // Data structure to store shopping cart items.
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
    cout << "Press ENTER to continue";  // Wait for the Enter key to be pressed.
    while (_getch() != 13) {}
}

//function to comfirm adding product to cart and display
void addProduct(ShoppingCart& cart, const string& productName, double productPrice) {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 10);
    cout << endl << "ADD TO CART?" << endl << endl;
    SetConsoleTextAttribute(h, 7);
    cout << "TO CONFIRM, PRESS '7'" << endl;
    cout << "PRESS '8' TO CANCEL";
    while (true) {
        int input = _getch();
        if (input == '7') {
            int z;
            cout << endl << endl << "Quantity: ";
            cin >> z;
            if (z > 0) {
                for(int i = 0; i < z; i++) {
                    cart.addToCart(productName, productPrice);
                }}
            else {
                 system("cls");
                 SetConsoleTextAttribute(h, 4);
                 cout << endl << "Invalid Input" << endl;
                 SetConsoleTextAttribute(h, 7);
                 cout << "Press ENTER to continue";
                 while (_getch() != 13) {}
                 break;
            }
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

int main() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    ShoppingCart cart;
    bool quit = false;
    int input;
    system("cls");
    menu();    // main menu
    while (!quit) {     // Program will quit if '0' is pressed.
        system("cls");
        SetConsoleTextAttribute(h, 2);
        cout << "Vegetable Subscription" << endl;
        SetConsoleTextAttribute(h, 7);
        cout << "1) Monthly Growner" << endl;
        cout << "2) Annual Growner" << endl;
        cout << "-----------------------" << endl;
        SetConsoleTextAttribute(h, 14);
        cout << "DIY eco-kits" << endl;
        SetConsoleTextAttribute(h, 7);
        cout << "3) Farm Kit" << endl;
        cout << "4) Compost Kit" << endl;
        cout << "5) Microgreen Kit" << endl << endl;
        cout << "Enter number (1-5) to proceed." << endl;
        cout << "Type '0' to checkout." << endl << endl;
        cout << "User: ";
        cin >> input;
        switch(input) {
            //Monthly Growner
            case 1:
                system("cls"); // to clear the previous console output.
                SetConsoleTextAttribute(h, 10);
                cout << "MONTHLY GROWNER 1 - LEAFY" << endl;
                SetConsoleTextAttribute(h, 7);
                cout << "1) Salad lettuces - RM105.00" << endl;
                cout << "2) Hearty asian greens - RM105.00" << endl;
                cout << "3) Salad & Asian Mix - RM105.00" << endl << endl;
                SetConsoleTextAttribute(h, 10);
                cout << "MONTHLY GROWNER 2 - LEAFY" << endl;
                SetConsoleTextAttribute(h, 7);
                cout << "4) Salad lettuces - RM189.00" << endl;
                cout << "5) Hearty asian greens - RM189.00" << endl;
                cout << "6) Salad & Asian Mix - RM189.00" << endl << endl;
                SetConsoleTextAttribute(h, 10);
                cout << "MONTHLY GROWNER 3 - LEAFY" << endl;
                SetConsoleTextAttribute(h, 7);
                cout << "7) Salad lettuces - RM270.00" << endl;
                cout << "8) Hearty asian greens - RM270.00" << endl;
                cout << "9) Salad & Asian Mix - RM270.00" << endl << endl;
                SetConsoleTextAttribute(h, 14);
                cout << "10) MONTHLY GROWNER 1 - FRUITY - RM120.00" << endl;
                cout << "11) MONTHLY GROWNER 2 - FRUITY - RM240.00" << endl << endl;
                SetConsoleTextAttribute(h, 7);
                cout << "Enter number (1-11) to proceed." << endl;
                cout << "Type '0' to return to main menu." << endl  << endl;
                cout << "User: ";
                cin >> input;
                // products
                switch(input) {
                    case 1: 
                        system("cls");
                        SetConsoleTextAttribute(h, 10);
                        cout << "MONTHLY GROWNER 1 - LEAFY" << endl;
                        cout << "Salad lettuces" << endl << endl;
                        SetConsoleTextAttribute(h, 7);
                        cout << "Inclusive of: " << endl;
                        cout << "Min. 0.75KG of leafy vegetables x 4 weeks/ month" << endl;
                        cout << "Suitable for 2-3 pax households" << endl << endl;
                        cout << "RM105.00" << endl << endl;
                        addProduct(cart, "Salad lettuces", 105.00);
                        break;
                    case 2:
                        system("cls");
                        SetConsoleTextAttribute(h, 10);
                        cout << "MONTHLY GROWNER 1 - LEAFY" << endl;
                        cout << "Hearty Asian greens" << endl << endl;
                        SetConsoleTextAttribute(h, 7);
                        cout << "Inclusive of: " << endl;
                        cout << "Min. 0.75KG of leafy vegetables x 4 weeks/ month" << endl;
                        cout << "Suitable for 2-3 pax households" << endl << endl;
                        cout << "RM105.00" << endl << endl;
                        addProduct(cart, "Hearty Asian greens", 105.00);
                        break;
                    case 3:
                        system("cls");
                        SetConsoleTextAttribute(h, 10);
                        cout << "MONTHLY GROWNER 1 - LEAFY" << endl;
                        cout << "Salad & Asian Mix" << endl << endl;
                        SetConsoleTextAttribute(h, 7);
                        cout << "Inclusive of: " << endl;
                        cout << "Min. 0.75KG of leafy vegetables x 4 weeks/ month" << endl;
                        cout << "Suitable for 2-3 pax households" << endl << endl;
                        cout << "RM105.00" << endl << endl;
                        addProduct(cart, "Salad & Asian Mix", 105.00);
                        break;
                    case 4:
                        system("cls");
                        SetConsoleTextAttribute(h, 10);
                        cout << "MONTHLY GROWNER 2 - LEAFY" << endl;
                        cout << "Salad lettuces" << endl << endl;
                        SetConsoleTextAttribute(h, 7);
                        cout << "Inclusive of: " << endl;
                        cout << "Min. 1.5KG of leafy vegetables x 4 weeks/ month" << endl;
                        cout << "Suitable for 4-6 pax households" << endl << endl;
                        cout << "RM189.00" << endl << endl;
                        addProduct(cart, "Salad lettuces", 189.00);
                        break;
                    case 5:
                        system("cls");
                        SetConsoleTextAttribute(h, 10);
                        cout << "MONTHLY GROWNER 2 - LEAFY" << endl;
                        cout << "Hearty Asian greens" << endl << endl;
                        SetConsoleTextAttribute(h, 7);
                        cout << "Inclusive of: " << endl;
                        cout << "Min. 1.5KG of leafy vegetables x 4 weeks/ month" << endl;
                        cout << "Suitable for 4-6 pax households" << endl << endl;
                        cout << "RM189.00" << endl << endl;
                        addProduct(cart, "Hearty Asian greens", 189.00);
                        break;
                    case 6:
                        system("cls");
                        SetConsoleTextAttribute(h, 10);
                        cout << "MONTHLY GROWNER 2 - LEAFY" << endl;
                        cout << "Salad & Asian Mix" << endl << endl;
                        SetConsoleTextAttribute(h, 7);
                        cout << "Inclusive of: " << endl;
                        cout << "Min. 1.5KG of leafy vegetables x 4 weeks/ month" << endl;
                        cout << "Suitable for 4-6 pax households" << endl << endl;
                        cout << "RM189.00" << endl << endl;
                        addProduct(cart, "Salad & Asian Mix", 189.00);
                        break;
                    case 7:
                        system("cls");
                        SetConsoleTextAttribute(h, 10);
                        cout << "MONTHLY GROWNER 3 - LEAFY" << endl;
                        cout << "Salad lettuces" << endl << endl;
                        SetConsoleTextAttribute(h, 7);
                        cout << "Inclusive of: " << endl;
                        cout << "Min. 2.2KG of leafy vegetables x 4 weeks/ month" << endl;
                        cout << "Suitable for 7-10 pax households" << endl << endl;
                        cout << "RM270.00" << endl << endl;
                        addProduct(cart, "Salad lettuces", 270.00);
                        break;
                    case 8:
                        system("cls");
                        SetConsoleTextAttribute(h, 10);
                        cout << "MONTHLY GROWNER 3 - LEAFY" << endl;
                        cout << "Hearty Asian Greens" << endl << endl;
                        SetConsoleTextAttribute(h, 7);
                        cout << "Inclusive of: " << endl;
                        cout << "Min. 2.2KG of leafy vegetables x 4 weeks/ month" << endl;
                        cout << "Suitable for 7-10 pax households" << endl << endl;
                        cout << "RM270.00" << endl << endl;
                        addProduct(cart, "Hearty Asian Greens", 270.00);
                        break;
                    case 9:
                        system("cls");
                        SetConsoleTextAttribute(h, 10);
                        cout << "MONTHLY GROWNER 3 - LEAFY" << endl;
                        cout << "Salad & Asian Mix" << endl << endl;
                        SetConsoleTextAttribute(h, 7);
                        cout << "Inclusive of: " << endl;
                        cout << "Min. 2.2KG of leafy vegetables x 4 weeks/ month" << endl;
                        cout << "Suitable for 7-10 pax households" << endl << endl;
                        cout << "RM270.00" << endl << endl;
                        addProduct(cart, "Salad & Asian Mix", 270.00);
                        break;
                    case 10:
                        system("cls");
                        SetConsoleTextAttribute(h, 14);
                        cout << "MONTHLY GROWNER 1 - FRUITY" << endl << endl;
                        SetConsoleTextAttribute(h, 7);
                        cout << "Inclusive of: " << endl;
                        cout << "Min. 1.7KG of fruity vegetables x 4 weeks/ month" << endl;
                        cout << "Suitable for 2-3 pax households" << endl << endl;
                        cout << "RM120.00" << endl << endl;
                        addProduct(cart, "MONTHLY GROWNER 1 - FRUITY", 120.00);
                        break;
                    case 11:
                        system("cls");
                        SetConsoleTextAttribute(h, 14);
                        cout << "MONTHLY GROWNER 2 - FRUITY" << endl << endl;
                        SetConsoleTextAttribute(h, 7);
                        cout << "Inclusive of: " << endl;
                        cout << "Min. 3.4KG of fruity vegetables x 4 weeks/ month" << endl;
                        cout << "Suitable for 4-6 pax households" << endl << endl;
                        cout << "RM240.00" << endl << endl;
                        addProduct(cart, "MONTHLY GROWNER 2 - FRUITY", 240.00);
                        break;
                    case 0: // return to main menu.
                    break;
                    default: 
                        system("cls");
                        SetConsoleTextAttribute(h, 4);
                        cout << endl << "Invalid Input" << endl;
                        SetConsoleTextAttribute(h, 7);
                        cout << "Press ENTER to continue";
                        while (_getch() != 13) {}
                        break;
                }
                break;
            // Annual growner
            case 2:
                system("cls");
                SetConsoleTextAttribute(h, 10);
                cout << "ANNUAL GROWNER 1 - LEAFY" << endl;
                SetConsoleTextAttribute(h, 7);
                cout << "1) Salad lettuces - RM1200.00" << endl;
                cout << "2) Hearty Asian greens - RM1200.00" << endl;
                cout << "3) Salad & Asian Mix - RM1200.00" << endl << endl;
                cout << "Enter number (1-3) to proceed." << endl;
                cout << "Type '0' to return to main menu." << endl << endl;
                cout << "User: ";
                cin >> input;
                //products
                switch(input) {
                    case 1:
                        system("cls");
                        SetConsoleTextAttribute(h, 10);
                        cout << "ANNUAL GROWNER 1 - LEAFY" << endl;
                        cout << "Salad lettuces" << endl << endl;
                        SetConsoleTextAttribute(h, 7);
                        cout << "Inclusive of: " << endl;
                        cout << "Min. 0.75KG of leafy vegetables x 4 weeks per month x 12 months" << endl;
                        cout << "Suitable for 2-3 pax households" << endl << endl;
                        cout << "RM1200.00" << endl << endl;
                        addProduct(cart, "Salad lettuces", 1200.00);
                        break;
                    case 2:
                        system("cls");
                        SetConsoleTextAttribute(h, 10);
                        cout << "ANNUAL GROWNER 1 - LEAFY" << endl;
                        cout << "Hearty Asian greens" << endl << endl;
                        SetConsoleTextAttribute(h, 7);
                        cout << "Inclusive of: " << endl;
                        cout << "Min. 0.75KG of leafy vegetables x 4 weeks per month x 12 months" << endl;
                        cout << "Suitable for 2-3 pax households" << endl << endl;
                        cout << "RM1200.00" << endl << endl;
                        addProduct(cart, "Hearty Asian greens", 1200.00);
                        break;
                    case 3:
                        system("cls");
                        SetConsoleTextAttribute(h, 10);
                        cout << "ANNUAL GROWNER 1 - LEAFY" << endl;
                        cout << "Salad & Asian Mix" << endl << endl;
                        SetConsoleTextAttribute(h, 7);
                        cout << "Inclusive of: " << endl;
                        cout << "Min. 0.75KG of leafy vegetables x 4 weeks per month x 12 months" << endl;
                        cout << "Suitable for 2-3 pax households" << endl << endl;
                        cout << "RM1200.00" << endl <<endl;
                        addProduct(cart, "Salad & Asian Mix", 1200.00);
                        break;
                    case 0:
                        break;
                    default:
                        system("cls");
                        SetConsoleTextAttribute(h, 4);
                        cout << endl << "Invalid Input" << endl;
                        SetConsoleTextAttribute(h, 7);
                        cout << "Press ENTER to continue";
                        while (_getch() != 13) {}
                        break;
                }
                break;
            //farm kit
            case 3:
                system("cls");
                SetConsoleTextAttribute(h, 12);
                cout << "FARM Kit" << endl << endl;
                SetConsoleTextAttribute(h, 7);
                cout << "Inclusive of:" << endl;
                cout << "1. 1 packet Pak Choy seeds" << endl;
                cout << "2. x2 netpot holder rings" << endl;
                cout << "3. AB nutrients (1 bottle each)" << endl;
                cout << "4. Clay pebbles" << endl;
                cout << "5. Netpot" << endl;
                cout << "6. x4 sponges" << endl << endl;
                cout << "Price: RM19.00" << endl << endl;
                addProduct(cart, "Farm Kit", 19.00);
                break;
            // compost kit
            case 4:
                system("cls");
                SetConsoleTextAttribute(h, 12);
                cout << "COMPOST KIT" << endl << endl;
                SetConsoleTextAttribute(h, 7);
                cout << "Inclusive of:" << endl;
                cout << "1. Compost bag" << endl;
                cout << "2. 1 pack of bokashi powder" << endl;
                cout << "3. 1 set of tools" << endl << endl;
                cout << "Price: RM49.00" << endl << endl;
                addProduct(cart, "Compost Kit", 49.00);
                break;
                //microgreens kit
            case 5:
                system("cls");
                SetConsoleTextAttribute(h, 12);
                cout << "MICROGREENS KIT" << endl << endl;
                SetConsoleTextAttribute(h, 7);
                cout << "Inclusive of:" << endl;
                cout << "1. x2 types of microgreen seeds" << endl;
                cout << "2. Peatmoss" << endl;
                cout << "3. Gardening tool" << endl;
                cout << "4. Grow Tray" << endl;
                cout << "5. Grow Guide" << endl << endl;
                addProduct(cart, "Microgreens Kit", 35.00);
                break;
            default:
                system("cls");
                SetConsoleTextAttribute(h, 4);
                cout << endl << "Invalid Input" << endl;
                SetConsoleTextAttribute(h, 7);
                cout << "Press ENTER to continue";
                while (_getch() != 13) {}
                break;
            // checkout 
            case 0:
                system("cls");
                cart.displayCart();     // Display the shopping cart items.
                double totalPrice = cart.getTotalPrice();
                cout << endl << "Total Price: RM" << totalPrice << endl << endl;    // Display the total price.
                SetConsoleTextAttribute(h, 2);
                cout << "THANK YOU FOR SHOPPING WITH U";
                SetConsoleTextAttribute(h, 7);
                quit = true;    // Stop the loop and exit the program.
                break;
        }
    }
    return 0;
}
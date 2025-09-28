#include <iostream>
#include <string>
using namespace std;

int main() {

    // Cashier changes
    int cashier1 = 0, cashier2 = 0, cashier3 = 100;
    // Guard greetings
    string guard1 = "Good morning!", guard2 = "Hey yo! Wazup?", guard3 = "...";
    // Chef food outputs
    string chef1 = "Filipino Spaghetti", chef2 = "American Spaghetti", chef3 = "Italian Spaghetti";
    // Food cost
    float foodCost1 = 50.00;

    // --- Customer 1 ---
    cout << "Guard 1: " << guard1 << endl;
    string customer1_order = "Spaghetti";
    cout << "Waiter 1: Order taken  - " << customer1_order << endl;
    cout << "Chef 1: Here's your " << chef1 << endl;
    float payment1 = 100;
    cashier1 += payment1 - foodCost1;
    cout << "Cashier 1 change: " << cashier1 << endl;
    cout << "------------------------" << endl;

    // --- Customer 2 ---
    cout << "Guard 2: " << guard2 << endl;
    string customer2_order = "Spaghetti";
    cout << "Waiter 2: Order taken  - " << customer2_order << endl;
    cout << "Chef 2: Here's your " << chef2 << endl;
    float payment2 = 100;
    cashier2 += payment2 + foodCost1;
    cout << "Cashier 2 change: " << cashier2 << endl;
    cout << "------------------------" << endl;

    // --- Customer 3 ---
    cout << "Guard 3: "  << guard3 << endl;
    string customer3_order = "Spaghetti";
    cout << "Waiter 3: Order taken  - " << customer3_order << endl;
    cout << "Chef 3: Here's your " << chef3 << endl;
    float payment3 = 100;
    cout << "Cashier 3 change: " << cashier3 << endl;
    cout << "------------------------" << endl;

    return 0;
}

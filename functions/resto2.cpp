#include <iostream>
#include <string>

// Guard greets and asks for name
void guardGreet() {
    std::string customerName;
    std::cout << "Guard: Good morning! Welcome to our restaurant." << std::endl << std::endl;
}

// Waiter takes the order
std::string waiterTakeOrder() {
    std::string order;
    std::cout << "Waiter: What is your order? ";
    std::getline(std::cin, order);
    std::cout << "Waiter: Writing orders...\n";
    std::cout << "Order taken - " << order << std::endl << std::endl;
    return order;
}

// Chef prepares food
std::string kitchen(const std::string& order) {
    std::cout << "Chef: Cooking your order...\n";
    return "Hot and fresh " + order;
}

// Cashier processes payment and returns change
void cashierHandlePayment(float payment, float cost) {
    float change = payment - cost;
    std::cout << "Cashier: Your change is " << change << std::endl << std::endl;
}

int main() { // resto
    float foodCost = 50.0;
    float customerPayment = 0;

    // --- Customer 1 ---
    std::cout << "--- Customer 1 ---" << std::endl;
    guardGreet();
    std::string order1 = waiterTakeOrder();
    std::string received1 = kitchen(order1);
    std::cout << "Customer received: " << received1 << std::endl << std::endl;
    std::cout << "Cashier: Please pay for your order. Enter payment: ";
    std::cin >> customerPayment;
    cashierHandlePayment(customerPayment, foodCost);
    std::cin.ignore(); // Flush leftover newline

    // --- Customer 2 ---
    std::cout << "--- Customer 2 ---" << std::endl;
    guardGreet();
    std::string order2 = waiterTakeOrder();
    std::string received2 = kitchen(order2);
    std::cout << "Customer received: " << received2 << std::endl;
    std::cout << "Cashier: Please pay for your order. Enter payment: ";
    std::cin >> customerPayment;
    cashierHandlePayment(customerPayment, foodCost);
    std::cin.ignore();

    // --- Customer 3 ---
    std::cout << "--- Customer 3 ---" << std::endl;
    guardGreet();
    std::string order3 = waiterTakeOrder();
    std::string received3 = kitchen(order3);
    std::cout << "Customer received: " << received3 << std::endl;
    std::cout << "Cashier: Please pay for your order. Enter payment: ";
    std::cin >> customerPayment;
    cashierHandlePayment(customerPayment, foodCost);
    std::cout << "------------------------\n";

    return 0;
}

//Douglas Suggestion: Create a function for the customer.
//  all staff will be in one function, customer calls "STAFF!"
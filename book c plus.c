#include <iostream>
#include <cstring>
using namespace std;

class BOOK {
private:
    int bookNo;             // Book number (integer)
    char bookTitle[21];     // Book title (20 characters max + 1 for the null terminator)
    float price;            // Price per copy (float)

    // Function: total_cost
    // Purpose: Calculate and return the total cost for 'n' copies.
    // Parameters: int n - number of copies to be purchased.
    // Returns: Total cost calculated as price * n.
    float total_cost(int n) {
        return price * n;
    }

public:
    // Function: input
    // Purpose: To read the book details from the user.
    // It reads the book number, book title, and price per copy.
    void input() {
        cout << "Enter Book Number: ";
        cin >> bookNo;
        cin.ignore(); // Clear the input buffer before reading a string

        cout << "Enter Book Title (max 20 characters): ";
        cin.getline(bookTitle, 21);  // Read up to 20 characters

        cout << "Enter Price per copy: ";
        cin >> price;
    }

    // Function: purchase
    // Purpose: To ask the user for the number of copies to purchase.
    // It then invokes total_cost() to calculate the total cost and prints the result.
    void purchase() {
        int n;
        cout << "Enter number of copies to purchase: ";
        cin >> n;

        float totalCost = total_cost(n);  // Calculate total cost using total_cost()
        cout << "Total cost for " << n << " copies is: " << totalCost << endl;
    }
};

int main() {
    BOOK myBook;
    myBook.input();      // Read book details from the user
    myBook.purchase();   // Process the purchase and display the total cost
    return 0;
}

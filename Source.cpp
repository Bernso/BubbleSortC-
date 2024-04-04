#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Clear the console
    system("CLS");

    // Make sure that it is random each time
    srand(static_cast<unsigned int>(time(nullptr)));

    // Creating the empty list
    vector<int> listToSort;

    // Creating the list with random values
    for (int i = 0; i < 10; ++i) {
        int newValue = rand() % 10 + 1; // Random number between 1 and 10
        listToSort.push_back(newValue);
    }

    // Show the unsorted list
    cout << "The list to sort is: \n";
    for (int value : listToSort) {
        cout << value << " ";
    }
    cout << "\n\nThe length of the list is: " << listToSort.size() << endl;

    // The actual bubble sort
    bool swapped;
    do {
        swapped = false;
        for (size_t i = 0; i < listToSort.size() - 1; ++i) {
            if (listToSort[i] > listToSort[i + 1]) {
                // Swap the elements
                int temp = listToSort[i];
                listToSort[i] = listToSort[i + 1];
                listToSort[i + 1] = temp;
                swapped = true;
            }
        }
    } while (swapped);

    // Show the sorted list
    cout << "\nThe sorted list is: \n";
    for (int value : listToSort) {
        cout << value << " ";
    }

    // Random addition (idk why I added this)
    cout << endl;
    int beans1;
    int beans2;
    cout << endl << "Enter a number: ";
    cin >> beans1;
    cout << "Enter another number: ";
    cin >> beans2;
    cout << endl << beans1 << " + " << beans2 << " = " << beans1 + beans2;

    // Just to keep the exe open after the program has finished running 
    // So you can actually see what it has done
    int placeholder;
    cin >> placeholder;
    return 0;
}

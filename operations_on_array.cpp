#include <iostream>
using namespace std;

void insert(int arr[], int &n, int pos, int value) {
    if(pos < 0 || pos > n) {
        cout << "Invalid!" << endl;
        return;
    }
    for(int i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = value;
    n++;
}

void deleteElement(int arr[], int &n, int pos) {
    if(pos < 0 || pos >= n) {
        cout << "Invalid!" << endl;
        return;
    }
    for(int i = pos; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--;
}

void update(int arr[], int n, int pos, int value) {
    if(pos < 0 || pos >= n) {
        cout << "Invalid!" << endl;
        return;
    }
    arr[pos] = value;
}

void display(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100], n, choice, pos, value;

    cout << "Enter size of elements: ";
    cin >> n;

    cout << "Enter elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do {
        cout<<"Which function you want to perform";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Update\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter position you want to insert: ";
                cin >> pos;
                cout << "Enter the number: ";
                cin >> value;
                insert(arr, n, pos, value);
                break;
            case 2:
                cout << "Enter position you want to delete: ";
                cin >> pos;
                deleteElement(arr, n, pos);
                break;
            case 3:
                cout << "Enter position you want to update: ";
                cin >> pos;
                cout << "Enter the number: ";
                cin >> value;
                update(arr, n, pos, value);
                break;
            case 4:
                display(arr, n);
                break;
            case 5:
                cout << "Exiting... the Program" << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while(choice != 5);

    return 0;
}


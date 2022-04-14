#include <iostream>
#include <string>

using namespace std;

class Stack
{
private:
    int top;
    int arr[5];

public:
    Stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return top == 4;
    }

    void push(int value)
    {
        if (isFull())
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = value;
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow" << endl;
            return 0;
        }
        int popValue = arr[top];
        arr[top--] = 0;
        return popValue;
    }

    int count()
    {
        return top + 1;
    }

    int peak(int position)
    {
        if (isEmpty())
        {
            cout << "Stack Underflow" << endl;
            return 0;
        }

        if (position > top)
        {
            cout << "Incorrect position" << endl;
            return 0;
        }

        return arr[position];
    }

    void change(int position, int value)
    {
        if (position > top)
        {
            cout << "Incorrect position" << endl;
        }
        arr[position] = value;
    }

    void display()
    {
        cout << "All values in the stack are" << endl;
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
        cout << endl;
    }
};

int main()
{
    Stack s1;
    int option, position, value;

    do
    {
        cout << "What operation do you want to perform? Select option number. Enter 0 to exit" << endl;
        cout << "1. push" << endl;
        cout << "2. pop" << endl;
        cout << "3. isEmpty" << endl;
        cout << "4. isFull" << endl;
        cout << "5. peek" << endl;
        cout << "6. count" << endl;
        cout << "7. change" << endl;
        cout << "8. display" << endl
             << endl;

        cin >> option;
        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "Enter an item to push into stack" << endl;
            cin >> value;
            s1.push(value);
            break;
        case 2:
            cout << "Item popped from the stack: " << s1.pop() << endl;
            break;

        case 3:
            if (s1.isEmpty())
            {
                cout << "Yes, the stack is empty" << endl;
                break;
            }
            cout << "No, the stack is not empty" << endl;
            break;

        case 4:
            if (s1.isFull())
            {
                cout << "Yes, the stack is full" << endl;
                break;
            }
            cout << "No, the stack is not full" << endl;
            break;

        case 5:
            cout << "Enter the position you want to peek into: " << endl;
            cin >> position;
            cout << s1.peak(position) << endl;
            break;

        case 6:
            cout << "Count of the stack is: " << s1.count() << endl;
            break;

        case 7:
            cout << "Enter the position you want to change:" << endl;
            cin >> position;

            cout << "Enter the value you want to update at this position:" << endl;
            cin >> value;

            s1.change(position, value);
            cout << "Value updated at the position" << endl;
            break;

        case 8:
            s1.display();
            break;

        default:
            cout << "Enter proper operation number" << endl;
            break;
        }
    } while (option != 0);

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

class Friend
{
public:
    string name;
    string mobile;
};

void sortFriends(Friend f[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (f[j].name > f[j + 1].name)
            {
                Friend temp = f[j];
                f[j] = f[j + 1];
                f[j + 1] = temp;
            }
        }
    }
}

int sentinelSearch(Friend f[], int n, string key)
{
    string lastName = f[n - 1].name;
    f[n - 1].name = key;

    int i = 0;

    while (f[i].name != key)
    {
        i++;
    }

    f[n - 1].name = lastName;

    if (i < n - 1 || lastName == key)
        return i;

    return -1;
}

void display(Friend f[], int n)
{
    cout << "\n--- Phone Book ---" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << f[i].name << " : " << f[i].mobile << endl;
    }
}

int main()
{
    Friend f[100];
    int n;

    cout << "Enter number of friends: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter name of friend " << i + 1 << ": ";
        cin >> f[i].name;

        cout << "Enter mobile number: ";
        cin >> f[i].mobile;
    }

    // Sort names alphabetically
    sortFriends(f, n);

    display(f, n);

    string searchName;

    cout << "\nEnter name to search: ";
    cin >> searchName;

    int pos = sentinelSearch(f, n, searchName);

    if (pos != -1)
    {
        cout << "\nFriend found!" << endl;
        cout << "Name: " << f[pos].name << endl;
        cout << "Mobile Number: " << f[pos].mobile << endl;
    }
    else
    {
        cout << "\nFriend not found." << endl;

        cout << "Enter mobile number of new friend: ";
        cin >> f[n].mobile;

        f[n].name = searchName;
        n++;

        // Sort again after insertion
        sortFriends(f, n);

        cout << "\nFriend inserted successfully!" << endl;
        display(f, n);
    }

    return 0;
}


#include <iostream>



int main()
{
    int ot;
    setlocale(0, "");
    using namespace std;
    cout << "Вы любите воду?\n 1 - Да\n 2- Нет\n";
    cin >> ot;
    if (ot == 1)
    {
        cout << "Вы не кот!\n";
    }
    else
    {
        cout << "Вы кот!\n У вас лапки!";
    }
    cout << "\nА может еще раз?\nВы любите воду?\n 1 - Да\n 2- Нет\n";
    cin >> ot;
    if (ot == 1)
    {
        cout << "Вы не кот!\n";
    }
    else
    {
        cout << "Вы кот!\nУ вас лапки!";
    }
}


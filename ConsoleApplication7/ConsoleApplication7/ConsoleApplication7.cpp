#include <iostream>
using namespace std;
void a(int tab4[], int tab5[], int tab6[])
{
    for (int i = 0; i < 20; i++)
    {
        if (tab4[i] == tab5[i])
        {
            cout << "Takie same indexy: " << tab4[i] << ", " << tab5[i];
        }
        else if (tab4[i] == tab6[i])
        {
            cout << "Takie same indexy: " << tab4[i] << ", " << tab6[i];
        }
        else if (tab6[i] == tab5[i])
        {
            cout << "Takie same indexy: " << tab6[i] << ", " << tab5[i];
        }
    }
}
int main()
{
    int tab1[20], tab2[20], tab3[20];
    srand(time(NULL));
    for (int i = 0; i < 20; i++)
    {
        tab1[i] = rand() % 100;
        tab2[i] = rand() % 100;
        tab3[i] = rand() % 100;
        cout << "Tab1 " << tab1[i] << endl;
        cout << "Tab2 " << tab2[i] << endl;
        cout << "Tab3 " << tab3[i] << endl;
        a(tab1, tab2, tab3);
    }
}

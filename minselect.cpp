#include <iostream>
using namespace std;

int main()
{
    int array[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int min, poz_min;

// de la primul la ultimul element
    for(int i = 0; i < 8; i++)
    {
        //consid min elem din pozitia i
        min = array[i];
        poz_min = i;

        //de la al doilea elem pana la ultimul
        for (int j = i+1; j < 9; j++)
        {
            // daca elem din pozitia i+1 e mai mic decat cel din pozitia i
            if (array[j] < min)
            {
                // elem din poz i+1 devine noul minim
                min = array[j];
                poz_min = j;
            }
        }
        // a trecut prin toate elem, cmmic elem e swapped cu elementul 
        // de pe pozitia care urma
        array[poz_min] = array[i];
        array[i] = min;        
    }

    for(int i = 0; i < 9; i++)
    cout << array[i];
    cout << "\n";
}

#include <iostream>

using namespace std;

const int WIDTH = 8;
const int HEIGHT = 8;


int main()
{
    for (int i = 0; i < WIDTH; i++)
    {
        for (int j = 0; j < HEIGHT; j++)
        {
            if ((i == 0 || j == 0) || (i == WIDTH - 1 || j == HEIGHT - 1))
            {
                cout << " 1";
            }
            else
            {
                cout << " *";
            }
        }

        cout << "\n";
    }
}

        
         
   


    

       
    




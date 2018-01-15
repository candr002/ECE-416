#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
        pid_t pid;



        while (wait() != 0)
        {
            if (pid < 0)
                {
                cout << "Fork Failed\n\n";
                return 1;
                }
            else if (pid == 0)
            {
                int number;
                cout << "\n\nNumber to perform factorial:  ";
                cin >> number;
                for (int i = (number-1); i > 0; i--)
                    number= number*i;

                cout << "\n\nNew number is " << number;
                _Exit(0);
            }
            else if (pid > 0)
                wait();
        }
return 0;
}

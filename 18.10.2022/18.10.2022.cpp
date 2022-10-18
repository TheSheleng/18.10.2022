#include <iostream>
#include <fstream>

#include "Stack.h"

using namespace std;

int main()
{
    //Открытие файла
    fstream file;
    string path;

    while (!file.is_open())
    {
        cout << "Enter path: "; cin >> path;
        file.open(path, ios::in);
    }

    string result = "Tags entered correctly";

    stck::Stack tegs;
    while (!file.eof())
        if (file.get() == '<')
        {
            //Копирование тега
            string buffer;
            for (char ch = file.get(); ch != '>' && ch != ' '; file.get(ch)) buffer += ch;

            if (buffer[0] == '/') // Закрывающий тег
            {
                if (buffer != '/' + tegs.Pop()) { result = "Inappropriate end tag"; break; }
            }
            else // Окрывающий тег (проверка по списку известных)
            {
                if (buffer == "html" || buffer == "head" || buffer == "body" || buffer == "title") tegs.Push(buffer);
            }
        }

    cout << "Result: " << result << endl;

    file.close();
}
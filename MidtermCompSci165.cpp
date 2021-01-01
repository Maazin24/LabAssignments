#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <locale>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;
struct Bio
{
    string name;
    char gender;
    int age;
    double height;
    double weight;
};

string convertUpper(string str){

    for(int i=0; i< str.length(); i++){
        toupper(str[i]);
    }
    return str;
}

bool SelectionSort (Bio* info1, Bio* info2){
    bool check;

    info1->name = convertUpper(info1->name);
    info2->name = convertUpper(info2->name);


    if(info1->name < info2->name)
        check = true;

    else
        check = false;

    return check;
}

int main ()
{

    int count = 0;
    ifstream infile("biostats.txt");
    string line;
    vector <Bio*> List;
    ofstream outputfile;
    outputfile.open("Midterm.txt");


    if (infile.fail())
    {
        cout << "Error Opening File" << endl;
    }

    getline(infile, line);

    Bio* Info = new Bio();

    while (getline(infile, line))
    {
        Bio* Info = new Bio();

        istringstream is(line);
        is >> Info->name >> Info->gender >> Info->age >> Info->height >> Info->weight;



        for (int i = 0; i < Info->name.length(); ++i)   // check if the name is valid
        {
            if (!isalpha(Info->name[i]))
            {
                cout << "The entry " << Info -> name << " was not included in the list" << endl;
                continue;
            }
        }

        if (Info->gender != 'M' && Info->gender != 'm' && Info->gender != 'F' && Info->gender !='f')
        {
            cout << "The entry " << Info -> gender << " was not included in the list" << endl;
            continue;
        }

        if (Info->age < 18 || Info -> age > 65)
        {
            cout << "The entry " << Info->age << " was not included in the list" << endl;
            continue;
        }

        if (Info->height < 0)
        {
            cout << "The entry " << Info->height << " was not included in the lsit" << endl;
            continue;
        }

        if (Info->weight < 0)
        {
            cout << "The entry " << Info->weight << " was not included in the list" << endl;
            continue;
        }

        List.push_back(Info);
    }

    sort(List.begin(), List.end(), SelectionSort);

    outputfile << "Name   Gender   Age   Height   Weight" << endl;
    for (int i = 0; i<List.size(); ++i)
    {
        outputfile << List[i]->name << "      " << List[i]->gender << "       " << List[i]->age << "      " << List[i]->height << "      " << List[i]-> weight << endl;
    }

    infile.close(); // Closed Input File
    outputfile.close(); // Closed Output File

    delete Info; // Deleted Allocated Memory

    return 0;
}

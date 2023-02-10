/*
Program Name: Homework 1, Problem 4
Programmer: Manny Fomundam
Date: 9/17/2022
*/
#include <iostream>
#include <fstream>
using namespace std;

    int main()
    {
        cout << "Enter the file name --> ";
        string name;
        cin >> name;
        ifstream fin(name.c_str());
        if (!fin) {
        cerr << "ERROR: Could not open file " << name << endl;
        exit(-1);
        }
        //rest of the code

        //sets a string and int variable
        string count;           
        int numStringConstants = 0;
        //while the eof is false and the file inputs into count
        while(!fin.eof() && fin >> count)
        {
            //if the character at the beginning and the end of a 
            //string constant are both quotes
            if(count.at(0) == '"' && count.at(count.length() - 1) == '"')
            {
                //increment numStringConstants
                numStringConstants++;
                //print out the string constants that fit the requirements
                cout << count << endl;
            }
        }
        //close file
        fin.close();
        //print out the number of string constants
        cout << "There are " << numStringConstants << " string constants.";
    }

/*
b) The would complicate the counting of strting constants
as there would have to be more if statements to check for 
backshashes, quotes and other characters in relation to the
ones named.
*/ 
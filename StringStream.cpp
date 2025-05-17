#include <sstream>
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

vector<int> parseInts(string str)
{
   // Complete this function
   vector<int>  res;
   stringstream obj_ss(str);
   string       number;

   while (getline(obj_ss, number, ','))
   {
      res.push_back(stoi(number));
   }
   return res;
}

int main()
{
   string str;

   str = "23,4,56";
   vector<int> integers = parseInts(str);
   for (int i = 0; i < integers.size(); i++)
   {
      cout << integers[i] << "\n";
   }

   return 0;
}

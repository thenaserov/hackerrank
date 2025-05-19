#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
   int n, q;

   cin >> n >> q;
   vector<string> tags(n);
   vector<string> queries(q);
   for (int i = 0; i < n; ++i)
   {
      cin >> tags[i];
   }
   for (int i = 0; i < q; ++i)
   {
      cin >> queries[i];
   }
   for (int i{ 0 }; i < queries.size(); ++i)
   {
      for (int j{ 0 }; j < queries[i].size(); j++)
      {
         if (queries[i][j] == '.')
         {

         }
         else if (queries[i][j] == '~')
         {
             
         }
      }
   }
   return 0;
}

/*
 * Enter your code here. Read input from STDIN. Print output to STDOUT
 *  input:
 *      4 3
 *      <tag1 value = "HelloWorld">
 *      <tag2 name = "Name1">
 *      </tag2>
 *      </tag1>
 *      tag1.tag2~name
 *      tag1~name
 *      tag1~value
 *  output:
 *      Name1
 *      Not Found!
 *      HelloWorld
 */

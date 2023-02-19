#include <iostream>
#include <vector>

/////////////////////////////////////////
#include <map>
#include <unordered_map>
#include <iomanip>
/////////////////////////////////////////

using namespace std;

void func_map (vector<pair<int,string>>& items)
{
  cout << endl << "=== BEGIN func_map ===" << endl;

  ////////////////////////////////////////////////
  map<int,string> m;
  ////////////////////////////////////////////////


  ////////////////////////////////////////////
  for (auto i: items)
    m.insert({i.first, i.second});
  ////////////////////////////////////////////


  //////////////////////////////////////////////
  for (auto p: m)
    cout << p.first << " " << p.second << endl;
  //////////////////////////////////////////////


  cout << endl << "=== END func_map ===" << endl;
}

void func_unordered_map (vector<pair<int,string>>& items)
{
  cout << endl << "=== BEGIN func_unordered_map ===" << endl;

  //////////////////////////////////////////////////////////
  unordered_map<int,string> um;
  //////////////////////////////////////////////////////////


  /////////////////////////////////////////////
  // USING A RANGE-BASED for(...) LOOP,      //
  // INSERT EACH ITEM IN items INTO THE MAP. //
  // AFTER EACH INSERTION, PRINT OUT:        //
  //   o  THE SIZE OF THE MAP                //
  //   o  THE NUMBER OF BUCKETS              //
  //   o  THE LOAD FACTOR                    //
  // IN THE FOLLOWING FORMAT:                //
  //   o  "[N,B,LF] = [3,10,0.4432]"         //
  for (auto i: items){
    um.insert({i.first, i.second});
    cout << "[N,B,LF] = [" << um.size() << "," << um.bucket_count() << "," << setprecision(4) << um.load_factor() << "]" << endl;
  }
  /////////////////////////////////////////////


  ///////////////////////////////////////////////
  for(auto p: um)
    cout << p.first << " " << p.second << endl;
  ///////////////////////////////////////////////


  cout << endl << "=== END func_unordered_map ===" << endl;
}

int main ()
{
  vector<pair<int,string>> items = {
    {3, "three"},
    {13, "thirteen"},
    {2, "two"},
    {7, "seven"},
    {11, "eleven"},
    {20, "twenty"},
    {5, "five"},
    {96, "ninety six"},
    {97, "ninety seven"},
    {23, "twenty three"},
    {4, "four"},
    {59, "fifty nine"},
    {17, "seventeen"},
    {1, "one"}
  };

  func_map(items);
  func_unordered_map(items);

  return 0;
}


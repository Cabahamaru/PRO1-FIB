#include <iostream>
#include <vector>
using namespace std; 


// Pre: There is a sequence of n real numbers at the input
// Post: The numbers in the sequence have been read and stored in v
void read(vector<double>& v) { // output and input-output parameters 
   int n = v.size();           // are passed by reference 
   for (int i = 0; i < n; ++i) cin >> v[i];  
}


// Pre: v is a vector whose elements are of type double
// Post: The elements in v have been written separated by 
// a blank space, and followed by an end of line character. 
void write(const vector<double>& v) { // input parameters are passed by 
  bool first = true;                  // constant reference
  int n = v.size();
  for (int i = 0; i < n; ++i) {
     if (first) first = false; 
     else cout << " "; 
     cout << v[i];
  }
  cout << endl;
}


// Pre: v is a non-empty vector of real numbers
// Post: returns the position of the maximum element in v.
// If there is a tie, it returns the first position from 
// the beginning where the maximum is reached.  
int pos_max(const vector<double>& v) {
  int pm = 0; 
  for (int i = 0; i < v.size(); ++i) if (v[pm] < v[i]) pm = i; 
  return pm;
}


int main() {
  int n; 
  cin >> n; 
  vector<double> v(n);
  read(v);
  cout << "The maximum is in position " << pos_max(v) << endl; 
  write(v);  
}


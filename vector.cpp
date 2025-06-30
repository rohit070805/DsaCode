#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> v) {
  cout << "Printing vector " << endl;
  int size = v.size();
  for (int i = 0; i < size; i++) {
    cout << v[i] << " ";
    // cout << v.at(i) << " ";
  }
  cout << endl;
}

int main(){
    vector<int> v{1,2,3,4,5};


    // testing for memory allocation
    // cout<<v.size()<<" "<<v.capacity()<<endl;
	// v.push_back(10);
    // cout<<v.size()<<" "<<v.capacity()<<endl;
	// v.push_back(20);
    // cout<<v.size()<<" "<<v.capacity()<<endl;
	// v.push_back(30);
    // cout<<v.size()<<" "<<v.capacity()<<endl;
	// v.push_back(40);
    // cout<<v.size()<<" "<<v.capacity()<<endl;
    // v.push_back(40);
    // cout<<v.size()<<" "<<v.capacity()<<endl;
    
   // insert
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//      int d;
//      cin >> d;
//      v.push_back(d);
//    }
    //  v.push_back(50);
    //  print(v);
    //  v.pop_back();
    //  print(v);
    //  cout<<v.size()<<" "<<v.capacity()<<endl;;
    //  v.clear();
    // print(v);
    // cout<<v.size()<<" "<<v.capacity();
   
    //Jagged Array  - HW
    // using vector we can make array with rows having different column size.
    // here brr.size will give number of rows, and brr[i].size will give number of columns in i^th row

  vector< vector<int> > brr;


  vector<int> vec1(10,0);
  vector<int> vec2(5,1);
  vector<int> vec3(7,0);
  vector<int> vec4(8,1);
  vector<int> vec5(20,0);

  brr.push_back(vec1);
  brr.push_back(vec2);
  brr.push_back(vec3);
  brr.push_back(vec4);
  brr.push_back(vec5);

  for(int i=0; i<brr.size(); i++) {
    for(int j=0; j<brr[i].size(); j++) {
      cout << brr[i][j] << " ";
    }
    cout << endl;
  }
  
  
  return 0;
}



/*Time Complexity
 Ordered Map:
    - Insertion -O(logN)
    - Deletion -O(logN)
    - Searching - O(logN)
    Implemention:
    - Using Balanced BST


    UnoOrdered Map:
    - Insertion -O(1)
    - Deletion -O(1)
    - Searching - O(1)
    Implemention:
    - Using Array

*/

/*
How O(1) searching in unordered Using array implementation:
    - There is an Hash function that converts given key(Any datatype) to an integer
    - Hash function = Hash Code + Compression Function
        - Hash code : The formula that is being used to convert key to an integer
        - Compression Function: It bring to generated int inside the bounds of array
    - Now using the inbounded index to store the value in array
    - When searching is done the key provided again go through Hashing and result at generated index is returned.
    - Hash Code should be as such that there are minimum collision for different keys.
    - Collisiong Handling
        - Open Hashing:Create a linked list for the keys where collision is occuring
        - Closed Adressing:If collision occur find out next free space and insert there.
*/
#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    // Declaration
    unordered_map<string,int> m;
    // Insertion
    pair<string,int> p = make_pair("hii",5);
    pair<string,int> q("hello",3);
    pair<string,int> pq;
    pq.first = "hihi";
    pq.second = 33;
    m.insert(p);
    m.insert(q);
    m.insert(pq);
    m["haha"] = 22;

    // Size
    cout<<m.size()<<endl;

    // Accessing
    cout<<m.at("hihi")<<" "<<m["hello"]<<endl;

    // Searching
    // 1) using count
    // is exist 1 returned else 0
    cout<<m.count("hihi")<<endl;

    // 2) Using Find
    if(m.find("hihi")!=m.end()){
        cout<<"found"<<endl;
    }else{
        cout<<"Not found"<<endl;
    }

    // When we try to acces using square notation agr present h to value return ho 
    // jati agr nhi hai to ) return krke us key k liye ek nyi entry create ho jati and size bdh jata
    cout<<m["kumar"]<<endl;
    cout<<m.size()<<endl;
    return 0;
}
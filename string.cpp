#include<iostream>
#include<string.h>
using namespace std;
int main(){
    return 0;
}
// Basic input output
// int main(){
// char ch[10];
// cin>>ch;
// cout<<ch<<endl;
// cout<<ch[1]<<endl;
// //checking ascii value of null character for input dog;
// char temp = ch[3];
// int value = (int)temp;
// cout<<value;
// return 0;
// }

// using cin for takinh input with multiple words;
// int main(){
//     char ch[100],ch2[100];
//     // cin>>ch;
//     // cout<<ch<<endl;
//     // ab agar "Rohit kumar" input me dunga to sorf rohit hi jayega qki cin {space,tab,enter} dbate
//     // hi man leta hai ki input khtm hogya
//     cin.getline(ch2,100);
//     // ise spaces or tab se frk nhi pdta jb tk enter nhi krenge tb tk ye input leta rhega
//     cout<<ch2<<endl;
//     return 0;
// }

// // length of ch array
// int main(){
//     char ch[100];
//     cin.getline(ch,100);
//     int i = 0;
//     while(ch[i] != '\0'){
//         i++;
       
//     }
//     cout<<i<<endl;
//     cout<<strlen(ch);

//     return 0;
// }

// // Reverse a string
// int main(){
//     char ch[10];
//      cin.getline(ch,10);
//      int n = strlen(ch);
//      for(int i = 0;i<n/2;i++){
//         swap(ch[i],ch[n-i-1]);
//      }
//      cout<<ch;
// }

// lower case to UPPER
// int main(){
//     char ch[10];
//      cin.getline(ch,10);
//      int i = 0;
//      while(ch[i]!='\0'){
//         if(ch[i]>='a' && ch[i]<='z'){
//         ch[i] = ch[i] - 'a' + 'A';
//         }
//         i++;
//      }
//      cout<<ch;

//     //  for(int i = 0;i<n;i++){
//     //     int a= (int)ch[i] - 97 +65;
//     //     ch[i] = (char)a;
//     //  }
//     //  cout<<ch;
// }

// replace @ with " "
// int main(){
//     char ch[100];
//      cin.getline(ch,100);
//      int i = 0;
//      while(ch[i]!='\0'){
//         if(ch[i]=='@'){
//         ch[i] = ' ';
//         }
//         i++;
//      }
//      cout<<ch;
// }

// check palindrome
// int main(){
//     char ch[10];
//      cin.getline(ch,10);
//      int n = strlen(ch);
//      bool flag = true;
//      for(int i = 0;i<n/2;i++){
//         if(ch[i]!=ch[n-i-1]){
//             flag = false;
//             break;
//         }
//         }
//      if(flag){
//         cout<<"palindrome";
//      }
//      else{
//         cout<<"not palindrome";
//      }
  
// }


// Strings
// int main(){
//    string name;
//    cin>>name;
//    // or for lines with spaces
//    getline(cin,name);
//    cout<<name;
//    cout<<name[0];
//    // yaha bhi last me null character aata hai;
// }

// operations on string
// int main(){
//  string temp = ""; //empty string
//  string name;
//  getline(cin,name);
// cout<<name.length();
// cout<<temp.empty(); //return 0 or 1
// cout<<name.at[0];
// cout<<name.front(); //phla character
// cout<<name.back(); // last character


//  string abs = "love";
//  abs.push_back('R'); //LoveR
//  abs.pop_back();  //love


//  string str1 = "rohit";
//  string str2 = " dhankhar";
//  str1.append(str2); // dono ko join krdega or str1 me store krdega
//  string str3 = " kumar";
//  str1.insert(5,str3);//rohit kumar dhankhar bna dega


//  string s = "This is a car";
//  s.erase(4,3); //this a car bachega{4th index se start krke 3 aage tk erase}

// string desc = "This car is the daddy of suvs";
// string desc2 = "daddy";

// cout<<desc.substr(16,5); //daddy print hoga {16th index se lekr 5 aage tk}

// if(desc.find(desc2) == string::npos){ //std::npos means no position found
//    //not found
//    cout << "Not FOund" << endl;
//   }
// else {
//    cout << "Found" << endl;
//   }
  

//   string s1 = "rohit";
//   string s2 = "kumar";
//   cout<<s1.compare(s2); //agar equal hui to zero print kr dega


// }


#include <iostream>
#include <vector>
using namespace std;

int main(){
    // vector<int> vec(5, 0);

    // for(int i: vec){
    //     cout << i << endl;
    // }

    vector<char> vec = {'a', 'b', 'c', 'd', 'e'};
    vec.push_back('f');
    vec.push_back('g');
    vec.pop_back();
    cout<< "size = "<<vec.size()<<endl;
    cout<< vec.front() << endl;
    cout<< vec.back() << endl;
    cout<< vec.at(3) << endl;

    for (char i: vec)
    {
        cout << i << endl;
    }
    
    return 0;
}
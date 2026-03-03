#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> website;
    string name;
    while (cin >> name){
        if (name == "end")
            break;
        website.push_back(name);
    }

    auto current_website = website.end();
    int query;
    cin >> query;

    while (query--){
        string command;
        cin >> command;

        if (command == "visit"){
            string find_web_name;
            cin >> find_web_name;

            bool flag = false;
            for (auto it = website.begin(); it != website.end(); it++){
                if (*it == find_web_name){
                    cout << find_web_name << endl;
                    current_website = it;
                    flag = true;
                    break;
                }
            }

            if (!flag){
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next"){
            if (current_website == website.end()){
                cout << "Not Available" << endl;
            }
            else{
                auto it = current_website;
                it++;
                if (it == website.end()){
                    cout << "Not Available" << endl;
                }
                else{
                    cout << *it << endl;
                    current_website = it;
                }
            }
        }
        else if (command == "prev"){
            if (current_website == website.end() || current_website == website.begin()){
                cout << "Not Available" << endl;
            }
            else{
                auto it = current_website;
                it--;
                cout << *it << endl;
                current_website = it;
            }
        }
    }
    return 0;
}
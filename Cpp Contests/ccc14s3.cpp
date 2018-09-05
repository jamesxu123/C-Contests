//
//  ccc14s3.cpp
//  Cpp Contests
//
//  Created by James Xu on 2018-09-04.
//  Copyright © 2018 James Xu. All rights reserved.
//

#include "ccc14s3.hpp"

using namespace std;
void Candy::main() {
    int T;
    cin >> T;
    vector<int> branch;
    vector<int> mountain;
    for (int i=0; i<T; i++) {
        int N;
        cin >> N;
        for (int c=0; c<N; c++) {
            int cartNumber;
            cin >> cartNumber;
            mountain.push_back(cartNumber);
        }
        int currentCart = 1;
        bool flag = true;
        while (currentCart <= N) {
            if (mountain.empty() && branch.back() != currentCart) {
                cout << "N\n";
                flag = false;
                break;
            } else if (mountain.back() == currentCart) {
                mountain.pop_back();
                currentCart++;
            } else if (!branch.empty() && branch.back() == currentCart) {
                branch.pop_back();
                currentCart++;
            } else {
                branch.push_back(mountain.back());
                mountain.pop_back();
            }
        }
        if (flag) {
            cout << "Y\n";
        }
    }
}

//
//  ccc14s4.cpp
//  Cpp Contests
//
//  Created by James Xu on 2018-09-04.
//  Copyright © 2018 James Xu. All rights reserved.
//

#include "ccc14s4.hpp"
using namespace std;

struct Glass {
    int topleft;
    int topright;
    int bottomleft;
    int bottomright;
    int tintfactor;
};

void TintedWindow::main() {
    int N, T, tl, tr, bl, br, tf;
    cin >> N;
    cin >> T;
    Glass* glasses = new Glass[N];
    
    for (int i = 0; i < N; i++) {
        Glass glass;
        glasses[i] = glass;
        
    }
    
    
    delete[] glasses;
    
}

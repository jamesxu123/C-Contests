//
//  ccc15s3.cpp
//  Cpp Contests
//
//  Created by James Xu on 2018-09-05.
//  Copyright © 2018 James Xu. All rights reserved.
//

#include "ccc15s3.hpp"

using namespace std;

void Airport::main() {
    int G, P, a;
    cin >> G >> P;
    int gates[G] = {0};
    int redirect[G] = {0};
    int i;
    for (i = 0; i < P; i++) {
        bool flag = false;
        cin >> a;
        for (int b = a-1-redirect[a]; b >= 0; b--) {
            if (gates[b] == 0) {
                gates[b] = 1000;
                if (a-1-b > 0) {
                    redirect[a] = a-1-b;
                }
                flag = true;
                break;
            }
            
        }
        if (!flag) {
            cout << i << endl;
            break;
        }
        
    }
    
    if (i == P) {
        cout << P;
    }

//    int counter = 0;
//    for (int currentPlane : planes) {
//        currentPlane--;
//        for (int i = currentPlane-1; i >= 0; i--) {
//            cout << "current counter: " << counter << " current plane: " << currentPlane << endl;
//            if (gates[i] < 0) {
//                gates[i] = 1000;
//                counter++;
//                break;
//            } else {
//                if (i == 0) {
//                    cout << counter << endl;
//                    break;
//                }
//            }
//        }
//    }
    
}

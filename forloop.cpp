#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b;
    int evenOdd;
    
    scanf("%d %d", &a, &b);
    
    for (int n = a; n <= b; n++){
        
        if (n > 9){
           int evenOdd = (n % 2);
           if ( evenOdd == 1){
               cout << "odd" << endl;
           }else{
               cout << "even" << endl;
           }
        }else{
                    switch (n) {
                                case 1:
                                  cout << "one" << endl;
                                  break;
                                case 2:
                                  cout << "two" << endl;
                                  break;
                                case 3:
                                  cout << "three" << endl;
                                  break;
                                case 4:
                                  cout << "four" << endl;
                                  break;
                                case 5:
                                  cout << "five" << endl;
                                  break;
                                case 6:
                                  cout << "six" << endl;
                                  break;
                                case 7:
                                  cout << "seven" << endl;
                                  break;
                                case 8:
                                  cout << "eight" << endl;
                                  break;
                                case 9:
                                  cout << "nine" << endl;
                                  break;
        }

}
        
    }
    return 0;
}

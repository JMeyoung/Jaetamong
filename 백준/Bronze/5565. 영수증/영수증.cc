#include <iostream>
using namespace std;

int main(){
  int total_book_price, Number, sum = 0, last_book;

  cin >> total_book_price;
  
  for (int i = 0; i < 9; i++) {
    cin >> Number;
    sum += Number;
    
  }

  last_book = total_book_price - sum;
  
  cout << last_book;
  
  return 0;
}
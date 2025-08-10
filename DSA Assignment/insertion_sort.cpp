/*Organizing Cards in a Hand:
Application: When playing card games, players often use an approach similar to insertion 	sort to  organize their cards. They pick one card at a time and insert it into the correct 	
position in their hand, maintaining a sorted sequence. Write a program that demonstrates 	how to organize (sort) cards in a hand using insertion sort*/
#include <iostream>
using namespace std;
int main() {
    int i,j,n=5;
    int key;
    int cards[5];
    cout <<"Enter "<<n<<" cards:"<<endl;
    for (i=0;i<n;i++) {
        cin >> cards[i];
    }
    for (i=1; i<n; i++) {
        key=cards[i];
        j =i-1;
        while (j >= 0 && cards[j]>key) {
            cards[j+1]=cards[j];
            j--;
        }
        cards[j + 1] = key;
    }
    cout << "Sorted cards: ";
    for (i =0; i<n; i++) {
        cout << cards[i] << " ";
    }
    return 0;
}

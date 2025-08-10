/*Game Development:
write a game development program that implements the Bubble Sort algorithm. The program
will simulate a simple game where the player can input a set of numbers, and the numbers will
be sorted using Bubble Sort to simulate a "level-up" scenario where the player's scores are sorted
in ascending order.*/
#include<iostream>
using namespace std;
int main(){
    int n=5, temp;
    int player1[n], player2[n];
    int total1=0, total2=0;
    cout<<"Enter scores of player 1:\n";
    for (int i=0; i<n; i++){
        cin>>player1[i];
    }
    for(int i=0; i<n-1; i++){
        for (int j=0; j<n-1-i; j++) {
            if (player1[j]>player1[j + 1]) {
                temp =player1[j];
                player1[j]=player1[j + 1];
                player1[j + 1]=temp;
            }
        }
    }  
    cout<<"Enter scores of player 2:"<<endl;
    for (int i = 0; i < n; i++) {
        cin>>player2[i];
    }
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-1-i; j++) {
            if (player2[j]>player2[j + 1]) {
                temp =player2[j];
                player2[j] =player2[j + 1];
                player2[j + 1] =temp;
            }
        }
    }  
    cout<<"Sorted scores of player 1:"<<endl;
    for (int i = 0; i < n; i++) {
        cout<<player1[i]<<" ";
        total1 += player1[i];
    }
    cout<<endl;
    cout<<"Sorted scores of player 2:"<<endl;
    for (int i = 0; i < n; i++) {
        cout<<player2[i]<<" ";
        total2 += player2[i];
    }
    cout << "\nResult: ";
    if (total1>total2) {
        cout<<"Player 1 wins!"<<endl;
    } else if(total2 > total1) {
        cout<<"Player 2 wins!"<<endl;
    } else{
        cout<<"It's a tie!"<<endl;
    }
    return 0;
}

/*For example, imagine you have a set of servers that handle requests for a web application.
The key to load balancing is using the hash value of a client's IP address or a request ID
to determine which server should handle the request.
The hash function is typically designed so that the data is evenly distributed across the servers,
ensuring that no single server is overloaded.
Write a program of a load balancing system.*/


#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cout<<"Enter total number of servers: ";
    cin>>n;
    string ip;
    char q;
    do {
        cout<<"Enter client IP address: ";
        cin>>ip;
        int hash=0;
        for (int i=0; i<ip.length(); i++) {
            hash+= ip[i];
        }
        int server_index=hash%n;
        cout<<"Client IP " <<ip<< " is assigned to server ---> " <<server_index+1<< endl;
        cout<<"Do you want to enter another IP address? (y/n): ";
        cin>>q;
        cout<<"--------------"<<endl;
    } while (q=='y' || q=='Y');
    cout << "End of load balancing." << endl;
    return 0;
}










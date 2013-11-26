/* 
 * Dynamic connectivity client
 * - Reads the number of objects N from stdin
 * - Repeats:
 *      - reads in pair of integers from stdin
 *      - if they are not yet connected, connect them and print out pair
 *
 *
 *        ________________________________
 *        |   0  |   1  |  2  |  3  |  4  |
 *        |______|______|_____|_____|_____|
 *  id[]  |   0  |   1  |  2  |  3  |  4  |
 *        |______|______|_____|_____|_____|
 */

#include <iostream>
using namespace std;

const int N = 10;

// Quickfind class
class QuickFindUF {
    int id[N];
    public:
        QuickFindUF(int);
        void custom_union(int, int);
        bool connected(int, int);
        void print_id();
        int* get_id() { return id; }
};

QuickFindUF::QuickFindUF(int N) {
    /* Constructor sets each object to itself
     *      0 1 2 3 4
     * id[] 0 1 2 3 4
    */
    for (int i = 0; i < N; i++) {
        id[i] = i;
    }
}


bool QuickFindUF::connected(int p, int q) {
    // Check whether p and q are in same component
    // by seeing if the two array values are same ID
    // 2 array accesses
    return id[p] == id[q];
};

void QuickFindUF::custom_union(int p, int q) {
    // Custom union function to avoid using union()
    int pid = id[p];
    int qid = id[q];
    for (int i = 0; i < N; i++) {
        if (id[i] == pid) {
            id[i] = qid;
        }
    }
};

void print_ids(int id[N]) {
    cout << "Index\tValue" << endl;
    for (int i = 0; i < N; i++) {
        cout << i << "\t" << id[i] << endl;
    }
}

string askuser() {
    string result;
    cout << "What would you like to do?" << endl;
    cin >> result;
    return result;
}

int main ()
{
    QuickFindUF uf(N);
    int *p;
    string result;
    p = uf.get_id();
    cout << "Current Table" << endl;
    cout << "--------------" << endl;

    print_ids(p);

    result = askuser();
    while (result != "quit") {
        if (result == "union") {
            cout << "Doing union..." << endl;
            int ux, uy;
            cout << "select number to union with: " << endl;
            cin >> ux;
            cout << "select number to " << ux << " with" << endl;
            cin >> uy;
            uf.custom_union(ux, uy);
            p = uf.get_id();
            print_ids(p);
        }
        result = askuser();
    }
    return 0;

 }

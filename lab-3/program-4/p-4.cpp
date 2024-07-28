// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|

#include <iostream>
using namespace std;
// finding max,min and the sorting the array of the given number
class arr{
    int n;
    int arr[10];
public :
    void enter ()
    {
      cout << "ENTER THE NUMBER OF ELEMENTS (<=10) : ";
      cin >> n;
      for (int i=0;i<n;i++)
      {
        cin >> arr[i];
      }
    }
    void sortArray() {
        for (int i = 0; i < n- 1; ++i) {
            for (int j = 0; j < n- i - 1; ++j) {
                if (arr[j] > arr[j + 1]) {
                    // Swap arr[j] and arr[j + 1]
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    void display ()
    {
      for (int i=0;i<n;i++)
      {
        cout << arr[i] << endl;;
      }
    }
    void min ()
    {
        cout << "THE MINIMUM ELEMENT IS : " << arr[0] << endl;
    }
    void max()
    {
        cout << "THE MAX ELEMENT IS : " << arr[n-1] << endl;
    }
};
int main ()
{
    arr ob1;
    ob1.enter();
    cout << "THE SORTED ARRAY IS : " << endl;
    ob1.sortArray ();
    ob1.display();
    ob1.min();
    ob1.max();
}

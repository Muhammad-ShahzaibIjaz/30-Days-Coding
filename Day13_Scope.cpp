#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

	// Add your code here
    Difference(vector<int> elements){
        this->elements = elements;
        this->maximumDifference = computeDifference();
    }
    
    int computeDifference(){
        int n = elements.size();
        int maxdiff = 0;
        for(int i=0; i < n; i++){
            for(int j=i+1; j < n; j++){
                if(elements[i]>=elements[j]){
                    if(elements[i]-elements[j] > maxdiff && i+1 != n){
                        maxdiff = elements[i]-elements[j];
                    }
                }
                else{
                    if(elements[j]-elements[i] > maxdiff && i+1 != n){
                        maxdiff = elements[j]-elements[i];
                    }
                }
            }
        }
        return maxdiff;
    }

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
/* Finding maximum pairwise product from a given array. We have to select two elements which yield the max product.
Naive approach:
#include <iostream>
#include <vector>
#include <algorithm>

int MaxPairwiseProduct(const std::vector<int>& numbers) {
    int max_product = 0;
    int n = numbers.size();

    for (int first = 0; first < n; ++first) {
        for (int second = first + 1; second < n; ++second) {
            max_product = std::max(max_product,
                numbers[first] * numbers[second]);
        }
    }

    return max_product;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProduct(numbers); << "\n";
    return 0;
}
*/

//efficient approach 

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
   int n;
   cin>>n;
    int a[n-1];
    for(int i=0;i<n-1;i++){
        cin>>a[n-1];

    }
    sort(a[0],a[n-1]);
    int res;
    res=a[n-2]*a[n-1];
    cout<<res;
    return 0;
}


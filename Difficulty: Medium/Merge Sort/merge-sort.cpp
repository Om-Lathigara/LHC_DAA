class Solution {
  public:

    void merge(vector<int>& a, int low, int high, int mid) {

        int l = mid - low + 1;
        int r = high - mid;
        vector<int> lt(l);
        vector<int> rt(r);

        for(int i = 0; i < l; i++) {
            lt[i] = a[low + i];
        }

        for(int i = 0; i < r; i++) {
            rt[i] = a[mid + 1 + i];
        }

        int i = 0;
        int j = 0;
        int k = low;

        while(i < l && j < r) {

            if(lt[i] < rt[j]) {
                a[k] = lt[i];
                i++;
            }
            else {
                a[k] = rt[j];
                j++;
            }

            k++;
        }

        while(i < l) {
            a[k] = lt[i];
            i++;
            k++;
        }

        while(j < r) {
            a[k] = rt[j];
            j++;
            k++;
        }
    }

    void mergeSort(vector<int>& a, int low, int high) {

        if(low >= high)
            return;

        int mid = low + (high - low) / 2;

        mergeSort(a, low, mid);

        mergeSort(a, mid + 1, high);

        merge(a, low, high, mid);
    }
};
class Solution {
  public:

    void merge(vector<int>& a, int low, int high, int mid) {
        // here one arry is given so we'll divide it into parts than sort it accordingly
        int l = mid - low + 1;
        int r = high - mid;
        // we'll store those 2 parts into temporary array
        vector<int> lt(l);
        vector<int> rt(r);
        //copy first half in t
        for(int i = 0; i < l; i++) {
            lt[i] = a[low + i];
        }
        //likewise second half
        for(int i = 0; i < r; i++) {
            rt[i] = a[mid + 1 + i];
        }

        int i = 0;
        int j = 0;
        int k = low;//to start at first index of any array

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
        //remaining elements of left side
        while(i < l) {
            a[k] = lt[i];
            i++;
            k++;
        }
        // remaining elements of right side
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

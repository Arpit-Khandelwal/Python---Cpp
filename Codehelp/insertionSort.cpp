void insertionSort(int n, vector<int> &arr)
{
    // Write your code here.
    int i, j;
    for (i = 1; i < n; i++)
    {
        int temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp) arr[j + 1] = arr[j--];
        // for loop variation
        /*
            for(;j>=0;j--)
            {
                if(arr[j]>temp) arr[j+1]=arr[j];
                else break;
            }
        */
        arr[j + 1] = temp;
    }
}
 #include<bits/stdc++.h> 
 using namespace std;

void merge(int arr[], int l, int mid, int h)
{
        
    int i = l;
    int j = mid + 1;
    int k = l;
    int temp[h-l+1];
    while(i<=mid && j<=h){
        if(arr[i]<=arr[j]){
            temp[k-l] = arr[i];
            i++;
            k++;
        }
        else{
            temp[k-l] = arr[j];
            j++;
            k++;
        }
        
    }
    if(i>mid){
        while(j<=h){
            temp[k-l] = arr[j];
            j++;
            k++;
        }
    }
        else{
    
        while(i<=mid){
                temp[k-l] = arr[i];
                i++;
                k++;
            }
}
        for (int k = l; k <= h;k++){
            arr[k] = temp[k-l];
        }
}

void mergeSort(int arr[], int l, int h)
{
if(l<h){
        int mid = l + (h - l) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, h);
        merge(arr, l, mid, h);
}
    
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

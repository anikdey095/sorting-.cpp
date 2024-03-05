int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    // for (int i = 0; i < n - 1;i++){
    //     int min = i;
    //     for (int j = i + 1; j < n;j++){
    //         if(arr[j]<arr[min]){
    //         min = j;
    //     }
        
    // }
    //  swap(arr[i], arr[min]);
    //  }

    // for (int i = 1; i < n;i++){
    //     int temp = arr[i];
    //     int j = i - 1;
    //     while (j >= 0 && arr[j] > temp){
    //         arr[j + 1] = arr[j];
    //         j--;
    //     }
    //     arr[j + 1] = temp;
    // }

    //quicksort(arr, 0, n - 1);

    for (int i = 0; i < n - 1;i++){
        for (int j = 0; j < n - i - 1;j++){
            if (arr[j] > arr[j + 1] ){
                swap(arr[j], arr[j + 1]);
        }
        }
    }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
}

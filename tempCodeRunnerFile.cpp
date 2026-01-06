int j = i;
            while(arr[j]>arr[j/2]){
            swap(arr[j],arr[j/2]);
            j = j/2;
        }
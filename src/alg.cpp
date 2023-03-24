// Copyright 2021 NNTU-CS
void sort(int* arr, int len) {
    int temp = 0;
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int countPairs1(int* arr, int len, int value) {
    int count = 0;
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (arr[i] + arr[j] == value) {
                count++;
            }
        }
    }
    return count;
}
int countPairs2(int* arr, int len, int value) {
    int count = 0, i = 0, j = len - 1;
    for (int i = 0; i < len; i++) {
        for (int j = len - 1; j > i; j--) {
            int sum = arr[i] + arr[j];
            if (sum == value) {
                    count++;
            } else if (sum < value) {
                continue;
                continue;
            } else {
               continue;
            }
        }
    }
    return count;
}
int countPairs3(int* arr, int len, int value) {
    int count = 0;
    for (int k = 0; k < len - 1; k++) {
        int i = k + 1, j = len - 1;
        while (i <= j) {
            int mid = (i + j) / 2;
            if (arr[mid] + arr[k] == value) {
                count++;
                int j = mid + 1;
                while (j <= j && arr[j] + arr[k] == value) {
                    count++;
                    j++;
                }
                j = mid - 1;
                while (j >= i && arr[j] + arr[k] == value) {
                    count++;
                    j--;
                }
                break;
            } else if (arr[mid] + arr[k] < value) {
                i = mid + 1;
            } else {
                j = mid - 1;
            }
        }
    }
    return count;
}

// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  int c = 0;
  for (int i = 0; i < len - 1; i++) {
    for (int j = i + 1; j < len; j++) {
      if (arr[i] + arr[j] == value)
        c++;
    }
  }
  return c;
}
int countPairs2(int *arr, int len, int value) {
  int c = 0;
  for (int i = 0; i < len; i++) {
    for (int j = len - 1; j > i; j--) {
      if (arr[i] + arr[j] == value)
        c++;
    }
  }
  return c;
}
int countPairs3(int *arr, int len, int value) {
  int c = 0;
  for (int i = 0; arr[i] < value; i++) {
    for (int j = len - 1; j > i; j--) {
      if (arr[i] + arr[j] == value)
        c++;
    }
  }
  return c;
}

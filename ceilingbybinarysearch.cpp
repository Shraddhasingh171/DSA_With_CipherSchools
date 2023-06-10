
//ceiling question
// public static int ceiling(int[] arr, int target) {
// int s = 0;
// int e = arr.length - 1;
// int ceil = -1;

// while(s <= e) {
// int m = s + (e - s) / 2;
// if(arr[m] == target)
// return m;
// else if (arr[m] < target)
// s = m + 1;
// else {
// e = m - 1;
// ceil = m;
// }
// }
// return ceil;
// }
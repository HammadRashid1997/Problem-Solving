class min {
    public static void main(String[] args) {
        int[] arr = {5, 9, 2, 4, 7};
        int min = arr[0];
        for (int i = 1; i < arr.length; i++) {
          if (arr[i] < min) {
            min = arr[i];
          }
        }
        System.out.println("The minimum value in the array is: " + min);
    }
}

public class orderAgnosticBinarySearch {
    public static void main(String[] args) {
        int[] array= {34,56,67,89,123,456,765,908};
        int searchTarget = 123;
        int ans = orderAgnosticBinarySearch(array,searchTarget);
        System.out.println(ans);//4
    }

    static int orderAgnosticBinarySearch(int[] arr, int target){
        int start = 0;
        int end  = arr.length -1;

//        chaek weather array is asending or desending
//        boolean isAsc = arr[start] < arr[end];
        boolean isAsc;
        if (arr[start] < arr[end]){
            isAsc= true;
        }else {
            isAsc = false;
        }

        while (start <= end){
            int mid = start + (end - start)/2; // Hmne ager s+e/2 direct likh diya tho syad int ki range berak ho skti islye is tarh likh hoga is ka reason oops me ptalagega
            if (arr[mid] == target){
                    return  mid;
            }

            if (isAsc){
                if (target <arr[mid]){
                    end = mid -1;

                }else if(target > arr[mid]) {
                    start = mid + 1;
                }
            }else {
                if (target <arr[mid]){
                    start = mid + 1;


                }else if(target > arr[mid]) {
                    end = mid -1;
                }
            }
        }

        return -1;


    }


}

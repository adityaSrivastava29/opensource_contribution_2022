import java.util.*;
class QuickSorting
{
	static void printArray(int arr[])
    {
        int n = arr.length;
        for (int i=0; i<n; ++i)
            System.out.print(arr[i]+" ");
        System.out.println();
    }
    
    // Driver program
    public static void main(String args[])
    {
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		while(T>0)
		{
			int n = sc.nextInt();
			int arr[] = new int[n];
			for(int i=0;i<n;i++)
				arr[i] = sc.nextInt();

			
			new Solution().quickSort(arr,0,n-1);
			printArray(arr);
		    T--;
		}
} }// } Driver Code Ends


class Solution
{
    //Function to sort an array using quick sort algorithm.
    static void swap(int a[], int x, int y)
    {
        int temp=a[x];
        a[x] = a[y];
        a[y] = temp;
    }
    static void quickSort(int arr[], int low, int high)
    {
        // code here
        
        if (low >=high)
        return;
        
        if(low<high)
        {
        int pivot = partition(arr,low,high);
        quickSort(arr,low,pivot-1);
        quickSort(arr,pivot+1,high);
    }
    }
    static int partition(int arr[], int low, int high)
    {
        // your code here
        int i=low,j=high;
        int pivot = arr[low];
        
        while(i<j)
        {
        while(arr[i]<=pivot && i<high) i++;
        while(arr[j]>pivot) j--;
        
        if(i<j)
        {
            swap(arr,i,j);
        }
    } 
    swap(arr,j,low);
    return j;
}
}

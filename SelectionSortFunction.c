int main(int argc, char const *argv[])  
{  
    void selectionSort(int array[], int n);  
    void printfArray(int array[], int n);  
    int selectionSortArray[10] = {9, 8, 7, 6, 5, 4, 3, 2, 10, 1};  
    selectionSort(selectionSortArray, 10);  
    printfArray(selectionSortArray, 10);  
  
    return 0;  
}  
  
void selectionSort(int array[], int n)  
{  
    int min;  
    int temp;  
    int i;  
    int j;  
    for (i = 0; i < n - 1; ++i)  
    {  
        min = i;  
        for (j = min; j < n; ++j)  
        {  
            if (array[min] > array[j])  
            {  
                min = j;  
            }  
        }  
        if (min != i)  
        {  
            temp = array[min];  
            array[min] = array[i];  
            array[i] = temp;  
        }  
    }  
}  
  
void printfArray(int array[], int n)  
{  
    int i;  
    for (i = 0; i < n; ++i)  
    {  
        printf("%3d", array[i]);  
    }  
}
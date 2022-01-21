#include <stdio.h>
void main() {
    int arr[]={3,8,1,2,4,5,10,11};
    int arr_size=8;
    int out2[arr_size];
    int counter_old=0;
    printf("\n");
    for(int i=0;i<arr_size;i++) {
        int max_v=arr[i];
        int out[arr_size];
        int counter=0;
        if(i!=0) {
            //look back
            int max_of_array=0;
            for(int j=0;j<i;j++) {
                if(arr[j]<max_v && max_of_array<arr[j]) {
                    out[counter]=arr[j];
                    counter++;
                    max_of_array=arr[j];
                }
            }
        }
        out[counter]=arr[i];
        counter++;
        for(int j=i+1;j<arr_size;j++) {
            if(max_v<arr[j]) {
                out[counter]=arr[j];
                max_v=arr[j];
                counter++;
            }
        }
        for(int z=0;z<counter;z++) {
            printf("%d ",out[z]);
        }
        printf("\n");
        if(counter_old<counter) {
            for(int z=0;z<arr_size;z++) {
                out2[z]=0;
            }
            for(int z=0;z<counter;z++) {
                out2[z]=out[z];
            }
            counter_old=counter;
        }
    }
    printf("Result is:\n");
    for(int z=0;z<counter_old;z++) {
            printf("%d ",out2[z]);
    }
}
#include <stdio.h>

void main(){
    int size1, size2;
    
    printf("Enter the size of the first set :");
    scanf("%d", &size1);
    int set1[size1];
    printf("Enter the elements : ");
    for(int i=0; i<size1; i++) scanf("%d", &set1[i]);

    printf("Enter the size of the second set :");
    scanf("%d", &size2);
    int set2[size2];
    printf("Enter the elements : ");
    for(int i=0; i<size2; i++) scanf("%d", &set2[i]);

    int set3[size1 + size2], count = size1;

    for(int i=0; i<size1; i++) set3[i] = set1[i];
    for(int i=0; i<size2; i++){
        int flag=0;
        for(int j=0; j<size1; j++){
            if(set1[j] == set2[i]){
                flag=1;
                break;
            }
        }
        if(flag==0) set3[count++] = set2[i];
    }

    printf("Union set : ");
    for(int i=0; i<count; i++) printf("%d ", set3[i]);
}

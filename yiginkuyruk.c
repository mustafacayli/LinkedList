#include <stdio.h>

int main()
{
    
    int arr[9],sirali[9];
    
    
    printf("1)kurumsal\n2)bireysel\n3)65+ \n1-2-3 \nsayilarindan birini giriniz'");
    int i,k,j,l;
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    j=0;
    for(i=0;i<10;i++){
        if(arr[i]==3){
            
            sirali[j]=arr[i];
           j+=1; 
        }
        
    }
    for(i=0;i<10;i++){
        if(arr[i]!=3){
            
            sirali[j]=arr[i];
           j+=1; 
        }
        
    }
    for(i=0;i<10;i++){
        arr[i]=sirali[i];
    }
    
    for(i=0;i<10;i++){
        
        if(arr[i]==2&&arr[i-1]==2&arr[i+1]==2&&arr[i+2]==1){
            sirali[i]=2;
            sirali[i-1]=2;
            sirali[i+1]=1;
            sirali[i+2]=2;
        }
        
        
    }
    
    
    
    for(i=0;i<10;i++){
        printf("%d,",sirali[i]);
    }
    
    
    
    
    

    return 0;
}

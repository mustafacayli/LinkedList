#include<stdio.h>
#include<stdlib.h>

int *dizi;
int boyut=2;
int tepe=0;

int pop(){
	int i,j=0;
    if(tepe<=boyut/4){
        
		int *dizi2=(int*)malloc(sizeof(int)*boyut/2); 
        for(i=0;i<boyut;i++){
		
            dizi2[i]=dizi[i];
    }
        free(dizi); 

        dizi=dizi2;
        boyut/=2;
    }
    
    return dizi[--tepe];
    
}
void push(int a){
	int i;
    if(tepe>=boyut){
        int *dizi2=(int*)malloc(sizeof(int)*boyut*2); 
        for(i=0;i<boyut;i++){
		
            dizi2[i]=dizi[i];
    }
        free(dizi); 

        dizi=dizi2;
        boyut*=2;
        
    }
    dizi[tepe++]=a;
    
}	


void sirala(){
	int i,j=0;
	int *dizi2=(int*)malloc(sizeof(int)*boyut);
	
	for(i=0;i<boyut;i++){
		if(dizi[i]==3){
			dizi2[j]=dizi[i];
			j++;
		}
	}
	for(i=0;i<boyut;i++){
		if(dizi[i]!=3){
			dizi2[j]=dizi[i];
			j++;
		}
	}
	for(i=0;i<10;i++){
        dizi[i]=dizi2[i];
    }
    for(i=0;i<10;i++){
        
        if(dizi[i]==2&&dizi[i-1]==2&dizi[i+1]==2&&dizi[i+2]==1){
            dizi2[i]=2;
            dizi2[i-1]=2;
            dizi2[i+1]=1;
            dizi2[i+2]=2;
        }
 }
 	for(i=0;i<10;i++){
        dizi[i]=dizi2[i];
    }
}


void bastir(){
	
	sirala();
	
    //printf("boyut: %d\n",boyut);
    int i;
    for(i=0;i<tepe;i++){
        printf("%d",dizi[i]);
    }
}

int main(){
	int i,x;
    dizi=(int*)malloc(sizeof(int)*2);   
    printf("1-2-3 olarak degerleri giriniz\n1)Kurumsal\n2)Bireysel\n3)65+\n");
    
	for(i=0;i<10;i++){
    	scanf("%d",&x);
    	push(x);
	}
	
	
    
    bastir();

}

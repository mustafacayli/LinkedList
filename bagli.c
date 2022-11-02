#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>


struct rehber{
    char ad[20];
    char soyad[20];
    char tel[20];
    struct rehber *next;

};

typedef struct rehber node;

//////
//////
//////
//////
//////
node * ekle(node *head,char *ad,char *soyad,char *tel){
    
    node *kisi = (node *)malloc(sizeof(node )); 
    strcpy(kisi->ad,ad);
    strcpy(kisi->soyad,soyad);
    strcpy(kisi->tel,tel);
    kisi->next=NULL;

    if(head==NULL){
        head = kisi;
        printf("ilk kisi eklendi");

    }
    else{
        node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
            temp->next=kisi;
            printf("%s rehbere eklendi",ad);
        }
    }

    return head;
}
//////
//////
//////
//////
//////
node * sil(node *head){

    if(head==NULL){
        printf("list is empty");
    }

    else{
        char numara[20];

        printf("silencek kisinin numarasi");
        scanf("%s",numara);

        if(head->next==NULL && strcmp(head->tel,numara)==0){
            free(head);
            head=NULL;
            printf("now list is empty");

        }
        else if(head->next!=NULL && strcmp(head->tel,numara)==0){
            node *temp = head->next;
            free(head);
            head = temp;

            printf("%s numarali kisi silindi",numara);
        }
        else{
            node *temp2 = head;
            node *temp = head;
            while(temp->next!=NULL){
                if(strcmp(temp->tel,numara)==0){
                    
                    temp2->next=temp->next;
                    free(temp);
                    printf("%s silindi",numara);
                    
                }
                temp2 = temp;
                temp = temp->next;
            }
            if(strcmp(temp->tel,numara)==0){
                    
                    temp2->next=NULL;
                    free(temp);
                    printf("%s numarali kisi silindi",numara);
                    
                }
        }
    }
    return head;
}
//////
//////
//////
//////
//////
node * yazdir(node *head){
    if(head==NULL){
        printf("list is empty");
    }

    else{
        node *temp = head;
        printf("kayitli kisiler");
        printf("--------------\n\n");
        while(temp!=NULL){
            printf("%s\t%s\t%s\n",temp->ad,temp->soyad,temp->tel);
            temp = temp->next;
        }
        printf("--------------\n\n");
    }

    return head;
}
//////
node * arama(node *head){

    system("cls");

    if(head==NULL){
        printf("list is empty");

    }
    else{

        char numara[20];
        printf("Aradiginiz kisinin numarasi");
        scanf("%s",numara);

        node *temp = head;
        while(temp!=NULL){
            if(strcmp(temp->tel,numara)==0){
                printf("ad      :%s \n",temp->ad);
                printf("soyad   :%s \n",temp->soyad);
                printf("telefon no  :%s \n",temp->tel);
                
            }
            temp = temp->next;
        }
        
    }

    return head;
}
void menu(){
    printf("\nodev1\n");
    printf("\n\t1)---ekle\n");
    printf("\n\t2)---sil\n");
    printf("\n\t3)---yazma\n");
    printf("\n\t4)---arama\n");
    printf("\n\t0)---cikma\n");
    printf("seciminizi yapin");
}

int main(){
    



    node * head = NULL;
    int secim;
    char ad[20],soyad[20],tel[20];
    while(1){
        menu();
        scanf("%d",&secim);
        if(secim==1){
            printf("eklenecek kisinin bilgilerini giriniz\n");
            printf("ad      :"); scanf("%s",ad);
            printf("soyad   :"); scanf("%s",soyad);
            printf("telefon :"); scanf("%s",tel);
            head = ekle(head,ad,soyad,tel);
           
        }
        else if(secim==2){
            head = sil(head);
            
        }
        else if(secim==3){
            head = yazdir(head);
            
        }
        else if(secim==4){
            head = arama(head);
           
        }
        else if(secim==0){
            printf("cikis yapildi");
            return 0;
        }
        else{
            printf("hatali giris yapildi");
        }


    }
    return 0;
}
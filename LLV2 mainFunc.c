int main(){
    

   

    node * head = NULL;
    head=ekle(head,"Serpil","Üstebay","123456");
    head=ekle(head,"Ayşe","Gül","123457");
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

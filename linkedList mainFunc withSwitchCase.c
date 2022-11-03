int main(){
    

    

    node * head = NULL;
    int secim;
    char ad[20],soyad[20],tel[20];
    while(1){
        menu();
        scanf("%d",&secim);
        switch(secim){
            case(1):
            printf("eklenecek kisinin bilgilerini giriniz\n");
            printf("ad      :"); scanf("%s",ad);
            printf("soyad   :"); scanf("%s",soyad);
            printf("telefon :"); scanf("%s",tel);
            head = ekle(head,ad,soyad,tel);
           break;
        
            case(2):
                head = sil(head);
                break;
        
            case(3):
                head = yazdir(head);
                break;
        
            case(4):
                head = arama(head);
               break;
        
            case(0):
                printf("cikis yapildi");
                return 0;
        
            default:    printf("hatali giris yapildi");
        }
        


    }
    return 0;
}

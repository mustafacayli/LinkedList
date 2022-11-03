node * ekle(node *head,char *ad,char *soyad,char *tel){
    
    node * kisi = (node *)malloc(sizeof(node )); 
    strcpy(kisi->ad,ad);
    strcpy(kisi->soyad,soyad);
    strcpy(kisi->tel,tel);
    kisi->next=NULL;

    if(head==NULL){
        head = kisi;
        printf("ilk kisi eklendi");

    }
    else
    {
        node *temp = head;
        while(temp->next != NULL)
        temp = temp->next;
        temp->next=kisi;
        printf("%s rehbere eklendi",ad);
        
    }

    return head;
}

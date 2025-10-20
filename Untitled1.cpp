#include <stdio.h>
#include <stdbool.h>

// Bir sayýnýn asal olup olmadýðýný kontrol eden fonksiyon
bool asalMi(int sayi) {
    if (sayi <= 1) {
        return false;
    }
    if (sayi == 2) {
        return true;
    }
    if (sayi % 2 == 0) {
        return false;
    }
    
    // 3'ten baþlayarak sayýnýn kareköküne kadar kontrol et
    for (int i = 3; i * i <= sayi; i += 2) {
        if (sayi % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int sayi1, sayi2, toplam = 0;
    
    printf("Birinci sayiyi girin: ");
    scanf("%d", &sayi1);
    
    printf("Ikinci sayiyi girin: ");
    scanf("%d", &sayi2);
    
    int baslangic = (sayi1 < sayi2) ? sayi1 : sayi2;
    int bitis = (sayi1 > sayi2) ? sayi1 : sayi2;
    
    printf("\n%d ile %d arasindaki asal sayilar:\n", baslangic, bitis);

    for (int i = baslangic; i <= bitis; i++) {
        if (asalMi(i)) {
            printf("%d ", i);
            toplam += i;
        }
    }
    
    printf("\n\nAsal sayilarin toplami: %d\n", toplam);
    
    return 0;
}


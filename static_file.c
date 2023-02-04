#include <stdio.h>

void func() {
   static  int counter = 0;
    counter++;
    printf("Counter = %d\n", counter);
}

int main() {
    for (int i = 0; i < 5; i++) {
        func();
    }
    return 0;
}
/*W powyższym kodzie funkcja func() jest wywoływana kilka razy w pętli w main().
Zmienna counter jest oznaczona jako static, co oznacza, że jej wartość jest zachowywana pomiędzy kolejnymi wywołaniami funkcji. 
W wyniku, każde wywołanie funkcji func() powoduje zwiększenie wartości zmiennej counter i wyświetlenie aktualnej wartości na ekranie.
C:\Users\mateu\Desktop\Konfiguracja>static_file  z użyciem static
Counter = 1
Counter = 2
Counter = 3
Counter = 4
Counter = 5

C:\Users\mateu\Desktop\Konfiguracja>static_file bez użycia static
Counter = 1
Counter = 1
Counter = 1
Counter = 1
Counter = 1
*/
# dziedziczenie

Dziedziczenie to fundament programowania obiektowego umożliwiający tworzenie nowych klas na fundamencie klas już istniejących w celu ponownego wykorzystania raz napisanego kodu.

Klasa, która przekazuje swoje cechy, nazywana jest klasą bazową lub rodzicem, natomiast klasa przejmująca te cechy to klasa pochodna lub dziecko.
W praktyce oznacza to, że obiekt klasy pochodnej automatycznie posiada wszystkie pola i metody zdefiniowane w klasie bazowej, co pozwala uniknąć powielania tych samych instrukcji w wielu miejscach programu. Proces ten tworzy hierarchiczną strukturę, w której klasy znajdujące się niżej stają się bardziej wyspecjalizowane, dodając własne unikalne właściwości do zestawu cech otrzymanych w spadku. 
Dziedziczenie wprowadza relację typu "jest czymś", co pozwala traktować różne obiekty pochodne w sposób jednolity jako przedstawicieli ich wspólnej klasy nadrzędnej. Dzięki temu programista może modyfikować działanie ogólnego mechanizmu w jednym miejscu, a zmiany te zostaną automatycznie uwzględnione we wszystkich klasach, które z niego czerpią. 

Mechanizm ten znacząco ułatwia zarządzanie dużymi projektami, poprawia czytelność struktury danych oraz stanowi niezbędny wstęp do zrozumienia bardziej zaawansowanych koncepcji.

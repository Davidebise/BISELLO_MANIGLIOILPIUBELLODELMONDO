#include <stdio.h>
typedef struct{
    int day;
    int month;
    int year;
}Data;
Data ConfrontaDate(Data date1,Data date2) {
    if (date1.year > date2.year) { //controllo anno
        return date1;
    }else if (date1.year==date2.year){
        if (date1.month > date2.month) { //controllo mese
            return date1;
        }else if (date1.month==date2.month){
            if (date1.day > date2.day) { //controllo giorno
                return date1;
            }else {
                return date2;
            }
        }else {
            return date2;
        }
    }else {
        return date2;
    }
}
int main() {
    Data date1;
    date1.day = 14;
    date1.month = 10;
    date1.year = 2009;

    Data date2;
    date2.day = 13;
    date2.month = 10;
    date2.year = 2009;

    Data date3=ConfrontaDate(date1,date2);
    printf("%d/%d/%d",date3.day,date3.month,date3.year);
    return 0;
}
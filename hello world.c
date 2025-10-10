#include <stdio.h>

int main()
{
    int WaltherP = 38;
    /**printfは、""の間に、表記したい文字を書く**/
    printf("Hello programing in C World\n");
     printf("WaltherP%d ",WaltherP);
    WaltherP  = WaltherP*2;
    /**数を再計算することで、プログラムの途中で数を変えることができる**/
    printf("\nマグナムを、%d％の価格で購入",WaltherP);
    /** printfの文章内で数字の指定をする場合、,を挟んで後に指定するものを書く**/
    /**文頭に\nをつけることで改行することができる \n=newlineの意**/
    /**;は文章の終わりという意味**/
    return 0;
}
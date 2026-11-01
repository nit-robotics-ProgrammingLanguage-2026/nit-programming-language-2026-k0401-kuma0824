#include <stdio.h>

int main(void) {
    /* 課題0401: 入力されたintのデータを+100した結果を，int(桁数指定なし)として表示するプログラムを書け． */
    int input;

    scanf("%d",&input);         // キーボードからiに入力                // iに100を加えて、resultで受ける
    printf("%d", input + 100);   //resultを表示
    return 0;
}

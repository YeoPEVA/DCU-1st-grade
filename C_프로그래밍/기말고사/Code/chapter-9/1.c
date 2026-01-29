void func(int x) {
    int check = 0;

    while(1) {
        printf("이 정수를 맞추어 보세요 >> ");
        scanf("%d", &check);

        if (check < x) {
            printf("\n");
            printf("맞추어야 할 정수가 입력한 %d 보다 큽니다.\n", check);
        } else if (check > x) {
            printf("\n");
            printf("맞추어야 할 정수가 입력한 %d 보다 작습니다.\n", check);
        } else {
            printf("\n");
            printf("축하합니다! 정답은 %d 입니다.\n", x);
            break;
        }
    }
}
#include <stdio.h>
#include <string.h>
char data_base[25][25];
char position[25];
int initialization(int n) {
    for (int i = 0; i < n; i++)
    {
        data_base[i][0] = i;
        position[i] = i;
    }
}
int move_onto(int block_1, int block_2) {
    printf("Move_onto\n");
    data_base[block_2][block_2++] = ' ';
    data_base[block_2][block_2] = position[block_1];
    for (int i = 1; i < 10; i++)
    {
        printf("%c", data_base[1][i]);
    }
    
    return 0;
}
int move_over(int block_1, int block_2) {
    printf("Move_over\n");
    return 0;
}
int pile_onto(int block_1, int block_2) {
    printf("Pile_onto\n");
    return 0;
}
int pile_over(int block_1, int block_2) {
    printf("Pile_over\n");
    return 0;
}
int main() {
    char command_1[5], command_2[5];
    // char ins_1[4]="quit", ins_2[4]="move", ins_3[4]="onto";
    int n, block_1, block_2;
    scanf("%d", &n);
    initialization(n);
    while(1)
    {
        scanf("%s", command_1);
        if (strcmp(command_1, "quit")==0) break;
        scanf("%d %s %d", &block_1, command_2, &block_2);
        if (strcmp(command_1, "move")==0) {
            if (strcmp(command_2, "onto")==0) move_onto(block_1, block_2);
            else move_over(block_1, block_2);
        }
        else if (strcmp(command_1, "pile")==0) {
            if (strcmp(command_2, "onto")==0) pile_onto(block_1, block_2);
            else pile_over(block_1, block_2);
        }
    }
    return 0;
}
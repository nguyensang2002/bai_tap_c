#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>

void split_string(char* str) {
    int word_start = 0; // Vị trí bắt đầu của từ trong chuỗi
    int i = 0;
    int is_space_encountered = 0; // Biến đánh dấu dấu cách đã gặp hay chưa
    while (str[i] != '\0') {
        if (str[i] == ' ') { // Nếu gặp dấu cách
            if (!is_space_encountered) {
                // In từ từ vị trí bắt đầu đến vị trí hiện tại
                for (int j = word_start; j < i; j++) {
                    putchar(str[j]);
                }
                putchar('\n'); // In ký tự xuống dòng sau mỗi từ
                is_space_encountered = 1; // Đánh dấu đã gặp dấu cách
            }
            // Cập nhật vị trí bắt đầu của từ mới
            word_start = i + 1;
        }
        else {
            is_space_encountered = 0; // Reset biến đánh dấu
        }
        i++;
    }
    // In từ cuối cùng sau dấu cách cuối cùng
    for (int j = word_start; str[j] != '\0'; j++) {
        putchar(str[j]);
    }
}

int main()
{
    char c[1000];
    gets_s(c);
    /*
        char* context; // khởi tạo con trỏ context
    char* word = strtok_s(c, " ", &context); // sử dụng strtok_s thay thế strtok
    while (word != NULL)
    {
        printf("%s\n", word); //từ tách được
        word = strtok_s(NULL, " ", &context); // sử dụng strtok_s thay thế strtok
    }
    */
    
    char a[100][100];
    int n = 0;
    char* context; // trong mỗi vòng lặp để nó có thể duy trì trạng thái của việc tách chuỗi giữa các lần gọi liên tiếp
    char* word = strtok_s(c, " ", &context);
    while (word != NULL) {
        strcpy_s(a[n], sizeof(a[n]), word);
        ++n;
        word = strtok_s(NULL, " ", &context);
    }
    printf("%d\n", n);
    for (int i = 0; i < n; i++) {
        printf("%s\n", a[i]);
    }
    




    return 0;
}

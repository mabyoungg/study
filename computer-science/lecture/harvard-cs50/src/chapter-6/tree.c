#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//이진 검색 트리의 노드 구조체
typedef struct node
{
    // 노드의 값
    int number;

    // 왼쪽 자식 노드
    struct node *left;

   // 오른쪽 자식 노드
    struct node *right;
} node;

// 이진 검색 함수 (*tree는 이진 검색 트리를 가리키는 포인터)
bool search(node *tree)
{
    // 트리가 비어있는 경우 ‘false’를 반환하고 함수 종료
    if (tree == NULL)
    {
        return false;
    }
    // 현재 노드의 값이 50보다 크면 왼쪽 노드 검색
    else if (50 < tree->number)
    {
        return search(tree->left);
    }
    // 현재 노드의 값이 50보다 작으면 오른쪽 노드 검색
    else if (50 > tree->number)
    {
        return search(tree->right);
    }
    // 위 모든 조건이 만족하지 않으면 노드의 값이 50이므로 ‘true’ 반환
    else {
        return true;
    }
}
// 새 노드를 생성하는 함수
node* create_node(int value)
{
    node* new_node = malloc(sizeof(node));
    if (new_node == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    new_node->number = value;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

// 간단한 트리 설정과 검색 테스트
int main(void)
{
    // 간단한 이진 검색 트리 생성
    node *root = create_node(30);
    root->left = create_node(20);
    root->right = create_node(60);
    root->right->left = create_node(50);
    root->right->right = create_node(70);

    // 검색 실행
    if (search(root))
    {
        printf("50을 찾았습니다.\n");
    }
    else
    {
        printf("50을 찾지 못했습니다.\n");
    }

    // 메모리 해제 (생략 가능, 실제 구현에서는 메모리 관리를 해야 함)
    free(root->right->right);
    free(root->right->left);
    free(root->right);
    free(root->left);
    free(root);

    return 0;
}

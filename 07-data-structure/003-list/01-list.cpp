/** 연결리스트(linked list)
 * 요소가 인접한 메모리 위치에 저장되지 않는 선형 자료구조
 * 랜덤접근은 불가능하며 오로지 순차적 접근만 가능
 * 요소들은 next, prev라는 포인터로 연결되어 이루어지며 중복을 허용
 *
 * 데이터를 감싼 노드를 포인터로 연결해서 공간적인 효율성을 극대화시킨 자료구조
 * 삽입과 삭제가 O(1)이 걸리며, k번째 요소를 참조한다 했을 때 O(k)가 걸림
 *
 * (싱글연결리스트 기준) 노드는 다음과 같이 구성
 * data, 그리고 노드와 노드를 잇게 만드는 next라는 포인터
 */
class Node {
public:
  int data;
  Node *next;

  Node() {
    data = 0;
    next = NULL;
  }

  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
};
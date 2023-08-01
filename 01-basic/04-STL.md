# 1. STL

* C++은 `STL(Standard Template Library)`을 제공
* 이는 자료구조, 함수 등을 제공하는 라이브러리를 의미
* 알고리즘, 컨테이너, 이터레이터, 펑터 이렇게 4가지를 제공
  * C++로 vector라는 자료구조를 쓴다던가 
  * sort()함수를 쓸 수 있는 것은 다 STL 덕분

---

## 1.1 알고리즘

* 정렬, 탐색 등에 관한 함수로 이루어져 있습니다. 
* sort()가 대표적

---

## 1.2 컨테이너

* 컨테이너는 여러가지 의미로 쓰입니다. 
* e.g. 
  * 클라우드 서비스의 컨테이너 
  * 물건을 많이 담을 수 있는 컨테이너 박스라는 의미. 
  * 여기서의 컨테이너는 **C++에서 제공하는 자료구조**를 의미

시퀀스 컨테이너, 연관 컨테이너, 정렬되지 않은 연관 컨테이너, 컨테이너 어댑터가 있습니다

* `시퀀스 컨테이너(sequence container)`
  * 데이터를 단순히 저장해 놓는 자료구조
  * e.g.) array, vector, deque, forward_list, list
* `연관 컨테이너(associative container)`
  * 자료가 저장됨에 따라 자동정렬되는 자료구조
  * 중복키가 가능한 것은 이름에 multi가 붙습니다
  * e.g.) set, map, multiset, multimap
* `정렬되지 않은 연관 컨테이너(unordered associative container)`
  * 자료가 저장됨에 따라 자동정렬이 되지 않는 자료구조
  * e.g.) unordered_set, unordered_map, unordered_multiset, unordered_multimap
* `컨테이너 어댑터(container adapter)`
  * 시퀀스 컨테이너를 이용해 만든 자료구조
  * e.g.) stack, queue는 deque로 만들어져 있으며, 
  * e.g.) priority_queue는 vector을 이용해 힙 자료구조로 만듬

---

## 1.3 이터레이터

추후 배움

---

## 1.4 펑터

`펑터`란 함수 호출 연산자를 오버로드하는 클래스의 인스턴스를 의미
추후 배움

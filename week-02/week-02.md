## 목표 분량

- [x]  바킹독 3강 수강
- [ ]  3강 연습문제 풀이
- [ ]  바킹독 4강 수강
- [ ]  4강 연습문제 풀이
- [ ]  바킹독 5강 수강
- [ ]  5강 연습문제 풀이
- [ ]  바킹독 6강 수강
- [ ]  6강 연습문제 풀이
- [ ]  1주차 연습문제 풀이

## 0x03 배열

[강의 링크](https://youtu.be/mBeyFsHqzHg?si=vDtxeT4T8ImBuzyZ)

### 정의와 성질

- 메모리상에 원소를 연속하게 배치한 자료구조
- **O(1)에 K번째 원소를 확인하거나 변경 가능**
- 추가적으로 소모되는 메모리 양이 없음
- Cache hit rate가 높다.
- 메모리상에 연속한 구간을 잡아야 해서 할당에 제약이 걸림

### 기능과 구현

- O(1)로 가능한 연산
    - 특정 위치의 원소를 확인 및 변경
    - 배열 맨 뒤 원소를 추가 및 제거
- O(n)이 소요되는 연산
    - 임의의 위치에 원소를 추가 및 제거
        
        원소들을 뒤로 1칸씩 밀어야 한다.
        
- 배열 전체를 특정 값으로 초기화
    - memset -실수의 여지 존재, 비추천
    - for문 - 나쁘지 않으나 코드가 길다.
    - fill - 실수할 여지도 적고 코드도 짧다.
    
    ```cpp
    #include<algorithm>
    
    int arr[10];
    
    fill(a, a+10, 0);
    ```
    

### STL vector

- 배열과의 차이점은 크기 변경이 자유롭다는 점이다. (메모리 연속성은 동일)
- 인접리스트 저장 시 벡터 사용이 유리하나, 다른 상황에서는 굳이 벡터를 사용하지 않아도 좋다.
- O(n) insert, erase
- O(1) pushback, pop_back
- O(n) push_front, pop_front
- ‘=’는 deep copy를 수행
- range based for loop
    
    ```cpp
    #include<vector>
    
    vector<int> v1 = {1, 2, 3, 4};
    
    for(int item : v1)
    	item = 1 // 원본 벡터에 반영되지 않음
    	
    for(int& item : v1)
    	item = 1 // 원본 벡터에 반영
    ```
    
    for문 사용해도 괜찮다.
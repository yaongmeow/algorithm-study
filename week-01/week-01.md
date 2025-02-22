## 목표 분량

- [x]  바킹독 0강 수강
- [x]  바킹독 1강 수강
- [x]  바킹독 2강 수강

## 0x00 - 오리엔테이션

[강의 링크](https://youtu.be/LcOIobH7ues?si=FPddmBAxTJ-rrvaN)

- 입력 데이터는 문제에서 주어진 입력의 제한 조건을 만족함을 보장한다.
    
    if문 등을 이용해 굳이 내가 직접 확인해볼 필요가 없다.
    
- swea의 경우 시간초과 여부만 알려준다. (정답 여부 알 수 없음)
- 코테에 필요한 능력
    - 배경지식
        
        알고리즘, 자료구조, 테크닉 등 문제 해결을 위해 필요한 지식
        
        강의로 습득 가능
        
    - 문제해결능력
        
        배경지식을 문제에 맞게 잘 변형하여 적용하는 능력
        
        문제 풀이 훈련을 통해 기를 수 있음
        
    - 구현력
        
        본인이 생각한 풀이를 코드로 잘 옮겨낼 수 있는 능력
        
        다른사람들의 풀이를 참고하며 좋은 코딩 습관을 가지는 것이 중요
        
- 헤더 파일 여러 개 한꺼번에 include 하는 방법
    
    ```cpp
    #include <bits/stdc++.h>
    // 위 헤더 파일은 아래 헤더를 전부 포함한다.
    
    #include <iostream>
    #include <string>
    #include <map>
    #include <set>
    #include <stack>
    #include <vector>
    #include <functional>
    #include <algorithm>
    ```
    
- [문제집 링크](https://github.com/encrypted-def/basic-algo-lecture/blob/master/workbook.md)

## 0x01 - 기초 코드 작성 요령 1

[강의 링크](https://youtu.be/9MMKsrvRiw4?si=tYTLl2vhkCtXW8Ev)

### 시간/공간복잡도

- 시간복잡도
    
    입력의 크기와 문제를 해결하는데 걸리는 시간의 상관관계
    
- 빅 오 표기법
    
    주어진 식을 값이 가장 큰 대표항만 남겨서 나타내는 방법, 보통 시간복잡도를 나타낼 때 사용
    
    0(1) < 0(lgN) < O(N) < O(NIgN) < O(N^2) < O(2^N) < O(N!)
    
    | O(lgN) | 로그 시간 |
    | --- | --- |
    | O(N) | 선형 시간 |
    | O(NIgN) ~ O(N^2) | 다항 시간 |
    | O(2^N) | 지수 시간 |
- N의 크기에 따른 시간복잡도 허용치 (1초 기준)
    
    
    | N의 크기 | 허용 시간복잡도 |
    | --- | --- |
    | 11 이하 | O(N!) |
    | 25 이하 | O(2^N) |
    | 100 이하 | O(N^4) |
    | 500 이하 | O(N^3) |
    | 3,000 이하 | O(N^2lgN) |
    | 5,000 이하 | O(N^2) |
    | 1,000,0000 이하 | O(NlgN) |
    | 10,000,000 이하 | O(N) |
    | 그 이상 | O(lgN), O(1) |
- 문제를 보고 구현 전에 풀이의 시간복잡도를 생각해봐야 한다.
- 공간복잡도: 입력의 크기와 문제를 해결하는데 필요한 공간의 상관관계
- 512MB = 1.2억개의 `int` 변수 (`int` 1개 = 4 byte)

### 정수 자료형

| 이름 | 크기 (byte) |
| --- | --- |
| char | 1 |
| short | 2 |
| int | 4 |
| longlong | 8 |
- integer overflow

### 실수 자료형

| 이름 | 크기 |
| --- | --- |
| float | 4 |
| double | 8 |
- 실수 자료형의 구성
    
    ![Image](https://github.com/user-attachments/assets/0a82d78d-6f5e-433b-8dc5-ced7f2ec5292)
    
    - sign - 음양수 여부 (음수 1, 양수 0)
    - exponent - 지수 (실제 지수 + 127)
    - fraction - 유효숫자 (소수점 아래 자리수 정보)
- 실수의 저장과 연산 과정에서 반드시 오차가 발생할 수 밖에 없다.
- `double`에 `longlong` 정수를 함부로 담으면 안된다. (`int`는 가능)
- 실수 비교 시 등호 사용 금지 (차이가 10의 -12제곱, 즉 1e-12 이하인지 체크)

## 0x02 - 기초 코드 작성 요령 2

[강의 링크](https://youtu.be/6lhVHP8bkPA?si=d2_W7VN1ZKg4fQdJ)

### STL과 함수 인자

- 포인터와 참조
    
    포인터 대신 참조를 사용하여 동일한 효과를 얻을 수 있다. (값 복사 X, 함수 내 변경사항 반영)
    
    ![Image](https://github.com/user-attachments/assets/a4ce031a-26ec-42bd-ba20-b853303ea367)
    
- STL - C++의 라이브러리
- vector STL - 가변배열 (동적인 크기를 가진 배열)
    
    ```cpp
    #include<vector>
    
    vector<int>v(100)
    // 0으로 초기화된 100칸짜리 int 가변배열
    
    v[2] = 10;
    // 인덱스에 접근하여 값 변경 가능
    ```
    
- STL을 함수 인자로 넘길 때 어떤 일이 발생할까?
    - 복사본을 만들어 함수 인자로 보내기 때문에 함수 내의 값 변경이 반영되지 않는다.
        - 복사본을 제작하는 것에 시간복잡도 소요
    - 참조자 `&`를 이용하면 복사본을 만들지 않으며, 원본을 변경한다.

### 표준입출력

- `scanf`와 `printf`는 C++ string 사용 불가
    - 굳이 사용을 원하면 `char` 배열로 받아온 뒤 `c_str()` 메서드를 사용하면 된다.
- 공백을 포함한 문자열 입력받기
    - `scanf`에 줄바꿈 전까지 입력 받음을 명시
    - `gets` 함수 사용 (C++ 14 이후 제거)
    - `getline(cin, s)` 사용, `s`는 C++ string
- `cin`과 `cout` → 입출력으로 인한 시간초과를 막기 위해 명령어 필요
    
    ```cpp
    ios::sync_with_stdio(0)
    // C stream과 C++ stream의 동기화를 끊는 명령어
    
    cin.tie(0)
    /*
    입출력이 번갈아 존재할 경우 버퍼로 인해 순서가 꼬일 수 있다.
    이때문에 기본적으로는 cin 명령 수행 전 cout 버퍼를 비운다.
    온라인 저지에서는 굳이 버퍼를 비우는 작업이 필요하지 않다.
    버퍼를 불필요하게 비우는 작업을 끊어버리는 명령어이다.
    */
    ```
    
    위 두가지 명령을 쓸 때에는 무조건 `cin`과 `cout`만 사용한다.
    
- `endl` 사용하지 마라.
    - 개행문자 출력 + 출력 버퍼 비우기
    - 줄을 바꾸고 싶으면 `\n`을 직접 출력해라.

### 코드 작성 팁

- 코테와 개발은 다르다.
- 출력 맨 마지막에 공백이나 줄바꿈이 있어도 상관없다.
- 디버거는 굳이 사용하지 않아도 된다. (직접 출력)

## 번외 - 맥 C++ 개발 환경 세팅

- [참고 블로그](https://stg0123.github.io/study/5/)
- 코드 실행은 `ctrl + option + N`
# Algorithm-Study
## 우와앙~ 신나는 알고리즘 공부
  
<h3>
  알고리즘 문제 사이트<br>
  <a href="https://code.plus/course/41" target="_blank">C{ }DE.PLUS+</a><br>
  <a href="https://www.acmicpc.net" target="_blank">BAEKJOON</a><br>
  <a href="https://school.programmers.co.kr/learn/challenges?order=recent&levels=0&languages=cpp" target="_blank">프로그래머스</a><br>
</h3><br>

> **문제풀 때 주의할 것!**
* 입력 시 요구하는 최대 숫자 체킹
* 전역변수 or 배열변수 자료형 체킹

> **여러가지 함수들**
* str.find("string") : 반환값은 인덱스, 찾지 못한 경우 string::npos 값 반환
  
> **C++ 표현방식**
* string 순회
  ```C++
  for(char const &c : string) 
    cout << c << " ";
  ```
* vector 최댓값 및 인덱스 -> algorithm 헤더 이용
  ```C++
  int max = *max_element(v.begin(), v.end());
  int max_index = max_element(v.begin(), v.end()) - v.begin();
  ```
  
<h4>다시 풀 문제들!!</h4>

&emsp;S1)17087 ( 애를 은근 먹었던 문제 )
&emsp;S3)1463 ( DP 기초개념; 다시 풀고 이해한 뒤에 Top-Bottom 방식으로도 풀어볼 것 )<br>
&emsp;S3)9095 ( DP - 점화식 문제 )<br>
&emsp;S1)11052 ( 하씨 도움 )<br>
&emsp;S2)15990 ( DP - 2차원 배열을 사용하여 푸는 문제 )<br>
&emsp;S2)11053 (DP - 답지 참조한 문제)<br>

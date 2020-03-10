/*
3. 타일 맵 에디터

게임 개발자인 철수는 타일 맵 에디터를 만들려고 합니다.
게임에 사용되는 지도는 N x N 크기의 행렬로 표현됩니다.
이 지도에 맵 에디터로 길을 표현하는 타일 이미지를 출력하려고 합니다.





타일 이미지는 위와 같이 A~G, 7가지 종류가 있습니다.

타일 이미지의 가장 자리에는 검은색 선으로 표시된 벽이 그려져 있습니다.

동일한 종류의 타일이 이어지는 길에는 벽이 없도록 타일을 선택해야 합니다.



[입력]

첫 번째 행은 지도의 크기 N입니다. N은 1 이상 10 이하의 자연수입니다.
두 번째 행부터 N개의 행에는 길을 표시할 타일의 종류에 따라 A~G로 표시되어 있습니다.
길이 아닌 곳은 0으로 표시되어 있습니다.
각 행은 개행 문자(newline, \n)로 구분되어 있습니다.
예를 들어 4 x 4 크기의 지도는 다음과 같은 문자열이 표준 입력으로 들어옵니다.
4
A A A A
0 0 0 A
B B 0 A
B B 0 A


[출력]

길이 없는 곳은 -1로 표시합니다.
동일한 종류의 타일이 상/하/좌/우에 인접해 있는 경우, 벽이 없도록 타일을 배치합니다.
길에 해당하는 부분에 그려질 타일 번호를 출력합니다. 
출력값은 표의 형태로 정렬될 수 있도록 포맷을 맞춰서 출력합니다.
각 타일 번호는 출력될 타일 번호 중 가장 큰 값의 자릿수에 맞춰서 출력합니다.
한 행의 끝은 불필요한 공백 없이 개행 문자(newline, \n)로 끝나야 합니다.
위 예시의 경로는 다음과 같이 표현할 수 있으며,

출력값은 다음과 같습니다.
표의 형태로 가지런히 정렬되도록 한 자리 숫자 앞에는 공백이 2개가 있습니다. 주의하세요.
     


입/출력 예시
⋇ 입출력 형식을 잘 지켜주세요.
␣ : 공백↵ : 줄바꿈
보기 입력 1
4↵
A ␣A ␣A ␣A↵
0 ␣0 ␣0 ␣A↵
B ␣B ␣0 ␣A↵
B ␣B ␣0 ␣A4
A A A A
0 0 0 A
B B 0 A
B B 0 A
출력 1
 ␣4 ␣ ␣6 ␣ ␣6 ␣10↵
-1 ␣-1 ␣-1 ␣ ␣9↵
28 ␣26 ␣-1 ␣ ␣9↵
21 ␣19 ␣-1 ␣ ␣1↵
 4  6  6 10
-1 -1 -1  9
28 26 -1  9
21 19 -1  1

보기 입력 2
7↵
A ␣A ␣0 ␣0 ␣0 ␣A ␣A↵
A ␣0 ␣0 ␣A ␣0 ␣0 ␣A↵
0 ␣A ␣A ␣0 ␣0 ␣0 ␣0↵
0 ␣A ␣A ␣0 ␣0 ␣A ␣A↵
0 ␣0 ␣0 ␣A ␣0 ␣0 ␣0↵
A ␣0 ␣0 ␣A ␣0 ␣0 ␣A↵
A ␣A ␣0 ␣0 ␣0 ␣A ␣A7
A A 0 0 0 A A
A 0 0 A 0 0 A
0 A A 0 0 0 0
0 A A 0 0 A A
0 0 0 A 0 0 0
A 0 0 A 0 0 A
A A 0 0 0 A A
출력 2
12 ␣ ␣2 ␣-1 ␣-1 ␣-1 ␣ ␣4 ␣10↵
 ␣1 ␣-1 ␣-1 ␣ ␣0 ␣-1 ␣-1 ␣ ␣1↵
-1 ␣12 ␣10 ␣-1 ␣-1 ␣-1 ␣-1↵
-1 ␣ ␣5 ␣ ␣3 ␣-1 ␣-1 ␣ ␣4 ␣ ␣2↵
-1 ␣-1 ␣-1 ␣ ␣8 ␣-1 ␣-1 ␣-1↵
 ␣8 ␣-1 ␣-1 ␣ ␣1 ␣-1 ␣-1 ␣ ␣8↵
 ␣5 ␣ ␣2 ␣-1 ␣-1 ␣-1 ␣ ␣4 ␣ ␣3↵
12  2 -1 -1 -1  4 10
 1 -1 -1  0 -1 -1  1
-1 12 10 -1 -1 -1 -1
-1  5  3 -1 -1  4  2
-1 -1 -1  8 -1 -1 -1
 8 -1 -1  1 -1 -1  8
 5  2 -1 -1 -1  4  3
*/
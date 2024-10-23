# [Gold IV] Connect The Campus - 6927 

[문제 링크](https://www.acmicpc.net/problem/6927) 

### 성능 요약

메모리: 51352 KB, 시간: 112 ms

### 분류

그래프 이론, 최소 스패닝 트리

### 제출 일자

2024년 9월 20일 01:12:18

### 문제 설명

<p>Many new buildings are under construction on the campus of the University of Polkaroo. The university has hired bricklayers, electricians, plumbers, and a computer programmer. A computer programmer? Yes, you have been hired to ensure that each building is connected to every other building (directly or indirectly) through the campus network of communication cables.</p>

<p>We will treat each building as a point specified by an x-coordinate and a y-coordinate. Each communication cable connects exactly two buildings, following a straight line between the buildings. Information travels along a cable in both directions. Cables can freely cross each other, but they are only connected together at their endpoints (at buildings).</p>

<p>You have been given a campus map which shows the locations of all buildings and existing communication cables. You may not alter the existing cables. Determine where to install new communication cables so that all buildings are connected. Of course, the university wants you to minimize the amount of new cable that you use.</p>

### 입력 

 <p>The input describes one test case. The first line contains the number of buildings $N$ $(1 \le N \le 750)$. The buildings are labelled from $1$ to $N$. The next $N$ lines give the $x$ and $y$ coordinates of the buildings. These coordinates are integers with absolute values at most $10\,000$. No two buildings occupy the same point.</p>

<p>Finally there is a line containing the number of existing cables $M$ $(0 \le M \le 1000)$ followed by $M$ lines describing the existing cables. Each cable is represented by two integers: the building numbers which are directly connected by the cable. There is at most one cable directly connecting each pair of buildings.</p>

### 출력 

 <p>Output the total length of the new cables that you plan to use, rounded to two decimal places. For each new cable you plan to construct, output a line containing the numbers of the two buildings that will be joined by the cable. If there is more than one possible minimal solution you may output any such solution.</p>


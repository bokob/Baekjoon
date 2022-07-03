# 풀이
DP의 Tablation 기법을 이용했다.  

apart라는 배열을 만들고 0층에 해당하는 부분에 적절한 수를 넣는다.  
각 층의 1호 부분에 1을 넣는다.  

![부녀회장이될테야](https://user-images.githubusercontent.com/85085804/177046963-d71bee90-b75c-4318-b922-43ff15b67c21.PNG)


for문을 이용해 채워지지 않은 부분을 채운다.  
k층의 n호 = k-1층의 n호 + k층 + n-1호  
수식으로 나타내면 apart[i][j] = apart[i - 1][j] + apart[i][j - 1]  

# 느낀점
DP로 푸니까 시간이 매우 적게 걸렸다.  
학기 중에 배운 알고리즘 수업이 도움이 되었다.

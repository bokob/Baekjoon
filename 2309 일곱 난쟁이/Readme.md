# 풀이  
algorithm 헤더에 있는 next_permutatioin 함수를 사용했다.  
// default  
bool next_permutation (BidirectionalIterator first, BidirectionalIterator last);  
// custom  
bool next_permutation (BidirectionalIterator first, BidirectionalIterator last, Compare comp);  

next_permutation 사용 시 주의점    
1) 오름차순으로 정렬된 값을 가진 컨테이너로만 사용 가능  
2) default로 operater <(비교 연산자)를 사용해 순열을 생성하므로 오름차순으로 생성    
3) 중복이 있는 원소들은 중복을 제외하고 순열을 생성  

우리가 이용할 것은 순열이 아닌 조합이다.  

배열에서 n개의 원소 중에서 r개를 선택해야 한다.  

1. 크기가 n인 배열 temp를 만들어 r개의 원소는 1로, (n-r)개의 원소는 0으로 초기화 한다.  
2. temp의 모든 순열을 구한다.  
3. temp의 순열에서 원소가 1인 인덱스만 배열에서 가져온다.  

# 느낀점  
여까지 for문으로 순열이나 조합을 이용한 문제를 풀려고 해서 시간초과가 났었다.  
편리한 함수를 알게되어 좋은 문제였다.  

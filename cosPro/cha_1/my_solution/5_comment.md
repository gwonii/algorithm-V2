## 체크하기 

* 이차원 배열 사용하기 


```c++

    // vector이용해서 2차원 배열사용하기

    vector<vector<int>> board;

    board.resize(n);
    for(int i = 0; i < n; i++) {
        board[i].resize(n,0);
    }


```
//https://assets.leetcode.com/uploads/2021/07/12/screenshot-2021-07-12-at-13-40-26-diagram-drawio-diagrams-net.png
//https://assets.leetcode.com/uploads/2021/07/12/screenshot-2021-07-12-at-13-42-14-diagram-drawio-diagrams-net.png
// 3-> 0,2 || 1-> 1,0 || 3?
// 3->0,2 || 5->1,1 || 
// Only cols

// dp[0][0] = board[0][0]
//m*n < =10^5

//1, 2  3,  4,  5,  6,  7
//8, 9, 10, 11, 12, 13, 14


// 1  2  3  4  5  6 7
// 1  2
// https://leetcode.com/problems/maximum-number-of-points-with-cost/

leftdp[k] = max(leftdp[k-1]-1, dp[i-1][k])
rightdp[k] = max(rightdp[k+1]-1, dp[i-1][k])

// m rows, n cols
for(int i=1;i<m;i++) {
    for(int j=0;j<n;j++) {
        if(bpard[i][j] > )
        for(int k=0;k<n;k++) {
            dp[i][j] = max(dp[i][j], dp[i-1][k] - abs(k-j) + board[i][j]);
        }
    }
}



// dp[i][0] += dp[i-1][0] - 1;
// dp[i][j] += dp[i][j-1]

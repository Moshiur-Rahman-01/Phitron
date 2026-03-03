// https: // www.naukri.com/code360/problems/reversing-a-queue_982934

/*
queue<int> reverseQueue(queue<int> q){
    stack<int> st;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    return q;
}
*/
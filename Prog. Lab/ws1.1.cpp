#include <iostream>
using namespace std;

// reverse
int main(){
    
    int N;
    cin>>N;
    int arr[N];
    
    for (int i=0; i<N ; i++){
        cin>>arr[i];
    }
    for (int i=N-1; i>=0 ; i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// sum
int main(){
    
    int N;
    cin>>N;
    int arr[N];
    int sum=0;
    
    for (int i=0; i<N ; i++){
        cin>>arr[i];
    }
    for (int i=N-1; i>=0 ; i--){
        sum+=arr[i];
    }
    cout<<sum;
    
    return 0;
}

// triplet compare
int main(){
    
    int Alice[3];
    int Bob[3];
    
    int AScore=0, BScore=0;
    
    for(int i=0;i<3;i++){
        cin>>Alice[i];
    }
    
    for(int i=0;i<3;i++){
        cin>>Bob[i];
    }
    
    for(int i=0;i<3;i++){
        if (Alice[i]>Bob[i]){
            AScore++;
        }
        else if (Alice[i]<Bob[i]){
            BScore++;
        }
    }
    cout<<AScore<<" "<<BScore;
    
    return 0;
}

//diagonal difference
int main(){
    
    int n;
    cin>>n;
    
    int arr[n][n];
    
    int leftDiag=0;
    int rightDiag=0;
    
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin>>arr[i][j];
        }
        // cout<<endl;
    }
    
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i==j){
                leftDiag+=arr[i][j];
            }
        }
    }
    
    for (int i = 0; i < n; i++) {     
        rightDiag += arr[i][n - i - 1];      
    }
    
    int absoluteDiff = abs(leftDiag - rightDiag);
    
    cout << absoluteDiff << endl;
    
}


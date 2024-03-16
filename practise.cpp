// int gcd(int a, int b){
//   return __gcd(a,b);
// }
 
// int lcm(int a, int b){
//     return (a/__gcd(a,b))*b;
// }
 
// int binarySearch(vi &arr, int key){
//     int start=0, end=arr.size()-1;
//     int mid=(start+end)/2;
//     while(start<=end){
//         if(arr[mid]==key) return mid;
//         if(key>arr[mid]) start=mid+1;
//         else end=mid-1;
//         mid=(start+end)/2;
//     }
//     return -1;
// }
 
// bool binarySearch(vi &arr, int key){
//     int size=sz(arr);
//     int start=0, end=size-1;
//     int mid=(start+end)/2;
//     while(start<=end){
//         if(arr[mid]==key) return true;
//         if(key>arr[mid]) start=mid+1;
//         else end=mid-1;
//         mid=(start+end)/2;
//     }
//     return false;
// }
 
// int lowerb(vector<int>&v,int target){
//        int n=v.size();
//        int lo=0,hi=n-1,mid;
//        while(hi-lo>1){
//           mid=(hi+lo)/2;
//           if(v[mid]<target) lo=mid+1;
//           else hi=mid;
//        }
//        if(v[lo]>=target) return v[lo];
//        if(v[hi]>=target) return v[hi];
//        return -1;
// }
 
// int upperb(vector<int>&v,int target){
//        int n=v.size();
//        int lo=0,hi=n-1,mid;
//        while(hi-lo>1){
//           mid=(hi+lo)/2;
//           if(v[mid]<target) lo=mid+1;
//           else hi=mid;
//        }
//        if(v[lo]>=target) return v[lo];
//        if(v[hi]>=target) return v[hi];
//        return -1;
// }
 
// int binpow(int a,int b) {
//     int m=1e18+10;
//     a%=m;
//     int ans=1;
//     while(b){
//         if(b&1)ans=ans*a%m;
//         a=a*a%m;
//         b>>=1;
//     }
//     return ans;
// }
 
// bool isPrime(int n){
//     if(n<=1) return false;
//     for(int i=2; i*i<=n;i++) if(n%i==0) return false;
//     return true;
// }
 
// void printDivisors(int n){
//     for (int i=1; i<=sqrt(n); i++){
//         if (n%i == 0){
//             if (n/i == i) cout<<" "<<i;
//             else cout<<" "<<i<<" " <<n/i;
//         }
//     }
// }
 
// void primeFactors(int n) { 
//     while (n % 2 == 0) { 
//         cout << 2 << " "; 
//         n = n/2; 
//     } 
//     for (int i = 3; i <= sqrt(n); i = i + 2) { 
//         while (n % i == 0) { 
//             cout << i << " "; 
//             n = n/i; 
//         } 
//     } 
//     if (n > 2) cout << n << " "; 
// }
 
// void rotate(vector<vector<int>>& matrix) {
//         reverse(matrix.begin(), matrix.end());
//         for (int i = 0; i < matrix.size(); ++i) {
//             for (int j = i + 1; j < matrix[i].size(); ++j) swap(matrix[i][j], matrix[j][i]);
//         }
// }
 
// void anti_rotate(vector<vector<int> > &matrix) {
//     for (auto i : matrix) reverse(i.begin(), i.end());
//     for (int i = 0; i < matrix.size(); ++i) {
//         for (int j = i + 1; j < matrix[i].size(); ++j) swap(matrix[i][j], matrix[j][i]);
//     }
// }
 
// int biggestfactor(int n){
//     int k;
//     for(int i=2;i<=sqrt(n);i++) if(n%i==0){ k=n/i; break;}
//     return k;
// }
 
// bool isSubstring(string s1, string s2){
//     // using find method to check if s1 is a substring of s2
//     if(s2.find(s1)!=string::npos) return true;
//     return false;
// }
 
 
// string to_lower(string a){
//     for(int i =0;i<(int)a.size(); ++i) if (a[i] >= 'A' && a[i] <= 'Z') a[i] += 'a' - 'A';
//     return a;
// }
 
// void decToBinary(int n){
//     for(int i= 10;i>=0;i--)cout<<((n>>i)&1);
// }
 
// int binaryToDecimal(int n){
//     int dec_num = 0 ;
//     int power = 0 ;
//     while(n>0){
//         if(n%10 == 1) dec_num += (1<<power) ;
//         power++ ;
//         n = n / 10 ;
//     }
//       return dec_num ;
// }
 
// vi fibo(){
//     vi fib;
//     int a=1, b=1;
//     fib.pb(a); fib.pb(b);
//     fi(i,2,41) fib.pb(fib[i-1]+ fib[i-2]);
//     return fib;
// }
 
// int Dsum(int n){
//     int ans=0;
//     while(n){ ans+=n%10; n/=10; }
//     return ans;
// }
 
// bool isPowerOfThree(int n){
//     if (n <= 0) return false;
//     return 1162261467 % n == 0;
// }
 
// bool isPowerOfTwo(int x){
//     if(x<0) return false;
//     return x && (!(x & (x - 1)));
// }
 
// bool isPower(int x,  int y){
//     if (x == 1) return (y == 1);
//     int pow = 1;
//     while (pow < y) pow *= x;
//     return (pow == y);
// }
 
// bool isPalindrome(string &s){
//     int i=0, j=sz(s)-1;
//     while(i<j){
//         if(s[i]!=s[j]) return false;
//         i++, j--;
//     }
//     return true;
// }
 
// int reversDigits(int num){
//     int rev_num = 0;
//     while (num != 0) {
//         rev_num = rev_num * 10 + num % 10;
//         num = num / 10;
//     }
//     return rev_num;
// }
 

#include<iostream>
using namespace std;

   int bubbleSorting(int myarray[],int p){
       int n=p;
        for(int i=0; i<=n;i++){
            for(int j=0;j<=n;j++){
                if(myarray[j]>myarray[j+1]){
                    int temp=myarray[j];
                    myarray[j]=myarray[j+1];
                    myarray[j+1]=temp;
                }

            }
            n--;
        }
        for (int i=0 ; i<p ; i++){
            cout<<myarray[i]<<endl;
          }

   }

   int selectionSorting(int myarray[], int n)
   {
     for(int i=0 ; i<=n;i++){
            int small=i;
        for(int j=i+1;j<=n;j++){
            if(myarray[j]<myarray[small]){
                   small=j;
            }

        }
       int temp=myarray[i];
       myarray[i]=myarray[small];
       myarray[small]=temp;

     }
      cout<<"it is selection\n";
        for (int i=0 ; i<n ; i++){
            cout<<myarray[i]<<endl;
          }


   }

   int insertionSorting(int myarray[],int n){
       for(int i=1;i<n;i++){
            int p;
            int a=myarray[i];
        for(int j=i;j>0&&myarray[j-1]<a;j--){
            myarray[j]=myarray[j-1];
            p=j;
        }
        myarray[p]=a;

       }
         cout<<"it is insertion\n";
        for (int i=0 ; i<n ; i++){
            cout<<myarray[i]<<endl;
          }


   }


int main(){
cout<<"enter the size of an array : ";
int n;
cin>>n;
int myarray[n];
cout<<"enter the elements of an array : ";
for (int i=0 ; i<n ; i++){
    cin>>myarray[i];
}
//bubbleSorting(myarray,n);
insertionSorting(myarray,n);

}





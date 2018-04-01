#include<iostream>

using namespace std;

//variables
int nums[5];

void sort(int nums[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = nums[i];
       j = i-1;

       /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
       while (j >= 0 && nums[j] > key)
       {
           nums[j+1] = nums[j];
           j = j-1;
       }
       nums[j+1] = key;
   }
}
main(){
//get the numbers from the user and insert them into the array.
cout<<"Enter five integers: "<<endl;
for(int i=0;i<5;i++){
    cin>>nums[i];
}



for(int i=0;i<5;i++){
    sort(nums[i],5);
    cout<<nums[i];
}


}

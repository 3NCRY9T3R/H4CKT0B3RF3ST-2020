/*
 Ques: Given a set of cities and distance between every pair of cities, 
 the problem is to find the shortest possible route that visits every city exactly once and 
 returns to the starting point.
 */

 //Solution using DP based approach and bitmasking

 #include <iostream>
 #include <algorithm>
 #define infinity 999999
 using namespace std;
 //Cities in the form of adjacancy Matrix
 int cities_distance[10][10]={
 	{0,20,42,25},
 	{20,0,30,34},
 	{42,30,0,10},
 	{25,34,10,0}
 };
 int n=4;	//number of cities

 //Bitmask for all visited
 int v_all=(1<<n)-1;

 //dp array
 int dp[16][4];

 int travelling_salesman(int curr_mask,int current_city){
 	if(curr_mask == v_all)
 		return cities_distance[current_city][0];

 	if(dp[curr_mask][current_city]!=-1)
 		return dp[curr_mask][current_city];

 	int ans=infinity;

 	for(int nbr=0;nbr<n;++nbr){
 		if((curr_mask & (1<<nbr)) == 0){
 			int temp=cities_distance[current_city][nbr]+travelling_salesman((curr_mask | (1<<nbr)),nbr);
 			ans=min(ans,temp);
 		}	//checking if current city is visited
 	}

 	return dp[curr_mask][current_city]=ans;

 }

 int main()
 {	
 	for(int i=0;i<(1<<n);++i){
 		for(int j=0;j<n;++j){
 			dp[i][j]=-1;
 		}
 	}
 	cout<<travelling_salesman(1,0);	//considering 0 as the starting city
 	return 0;
 }

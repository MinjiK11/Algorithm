void insert_sort(int list[], int n){
	int i, j, key;
	for(i=1;i<n;i++){
		key=list[i];
		j=i-1;
			while(j>=0 && list[j]>key){
				list[j+1]=list[j];
				j--;
			}
		list[j+1]=key;
	}
}
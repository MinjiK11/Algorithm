int sorted[MAX_SIZE];

void merge(int list[], int left, int mid, int right){
	int i, j, k, l;
	// i, j: index to the sorted left and right sub-arrays
    //k: index for the list to be sorted (combine)

	i=left;
	j=mid+1;
	k=left;
	
    //merge sorted sub-array
	while(i<mid+1 && j<right+1){
		if(list[i]<=list[j])
			sorted[k++]=list[i++];
		else
			sorted[k++]=list[j++];
	}

    // copy remaining data
	if(i<mid+1){
		while(i<mid+1)
			sorted[k++]=list[i++];
	else if(j<right+1)
		while(j<right+1)
			sorted[k++]=list[j++];
	}

    //copy array sorted[] to array list[]
    for(l=left;l<=right;l++)
        list[l]=sorted[l];
}
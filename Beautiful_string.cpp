int makeBeautiful(string str) {
	int n=str.length();
	int stepa=0,stepb=0;
	
	for(int i=0;i<n;i++){
		if(i%2==0){
			if(str[i]=='1'){
				stepa+=1;;
			}
		
		}else{
			if(str[i]=='0'){
				stepa+=1;;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(i%2==0){
			if(str[i]=='0'){
				stepb+=1;;
			}
		
		}else{
			if(str[i]=='1'){
				stepb+=1;;
			}
		}
	}
	return min(stepa,stepb);
}


	

class Main {
	public static void main(String[] args) {
		boolean [] NotNumber=new boolean[10001];
		
		for(int i=1;i<=10000;++i) {
			int num=getDn(i);
			if(num<=10000) {
				NotNumber[num]=true;
			}
		}
		for(int i=1;i<NotNumber.length;++i) {
			if(!NotNumber[i]) {
				System.out.println(i);
			
		}
	}	//main
} //class

static int getDn(int n) {
	int dn=n;
	while(n>0) {
		dn+=n%10;
		n/=10;
	}
		return dn;
	}
}

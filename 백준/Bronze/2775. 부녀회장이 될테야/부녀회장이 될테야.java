import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
	Scanner sc=new Scanner(System.in);
	int [][]floor=new int[15][15];
	int a=sc.nextInt();
	
	for(int i=1;i<15;i++) { //1열 숫자 모두1
		floor[i][1]=1;
	} 
	for(int j=1;j<15;j++) { //0층 숫자 넣기
		floor[0][j]=j;
	}
	for(int k=1;k<15;k++) { //14층까지 숫자 넣기
		for(int i=2;i<15;i++) {
			floor[k][i]=floor[k][i-1]+floor[k-1][i];
		}
	}
	for(int i=0;i<a;i++) {
		int b=sc.nextInt();
		int c=sc.nextInt();
		System.out.println(floor[b][c]);
		}
	} //main
} //class

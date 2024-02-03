#include"libr_altitude.h"
int main()
{
    double **A,**B,**C,**m1,**m2,**m3,**H;
    int m=2,n=1;
    A=loadtxt("A.dat",2,1);
    B=loadtxt("B.dat",2,1);
    C=loadtxt("C.dat",2,1);
    m1=dir_vec(A,B,m,n);
    m2=dir_vec(B,C,m,n);
    m3=dir_vec(C,A,m,n);
    H=line_intersect(m3,B,m1,C,m,n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            printf("%lf\n",H[i][j]);
    }

    freeMat(A,2);
    freeMat(B,2);
    freeMat(C,2);
    freeMat(m1,2);
    freeMat(m2,2);
    freeMat(m3,2);
    freeMat(H,2);
    
    
}
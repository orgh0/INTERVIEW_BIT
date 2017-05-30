int coverPoints(int* X, int n1, int* Y, int n2) {
     int count=0,i,xd,yd;
    for(i=0;i<n1-1&&i<n2-1;i++)
    {
      xd=abs(X[i]-X[i+1]);
      yd=abs(Y[i]-Y[i+1]);
      if(xd>=yd)
      count=count+xd;
      else count=count+yd;
    }
    return count;

}
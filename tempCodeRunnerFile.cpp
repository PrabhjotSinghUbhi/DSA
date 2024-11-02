   int start = 0;
   int end = count - 1;

   while (start < end)
   {
    ans[start] ^= ans[end];
    ans[end] ^= ans[start];
    ans[start] ^= ans[end];
    start++;
    end--;
   }
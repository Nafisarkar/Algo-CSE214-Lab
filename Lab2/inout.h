void io(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
    #endif
}




    int len = sizeof(demo)/sizeof(demo[0]);
     
    cout<<"Before sorting array : ";
    for(int i=0; i<len; i++)
    {
        cout<<" "<<demo[i];
    }
     
    sort(demo, demo+len);//Sorting demo array
     
    cout<<"\n\nAfter sorting array : ";
    for(int i=0; i<len; i++)
    {
        cout<<" "<<demo[i];
    }
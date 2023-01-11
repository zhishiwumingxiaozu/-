int h,w;
	cin>>h>>w;
	vector<string>s,t;
	for(int i=0;i<2*h;i++){
		string te;
		cin>>te;
		if(i<h)s.push_back(te);
		else t.push_back(te);
	}
	int flag=0;
	for(int i=0;i<h;i++){
		sort(s[i].begin(),s[i].end());
		sort(t[i].begin(),t[i].end());
		if(s[i]!=t[i])flag=1;
	}
	if(!flag)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
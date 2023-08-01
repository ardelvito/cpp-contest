
    vector<int> tempVector;
    for (int j = 1; j <= 5; j++)
    {
        cout << "Baris " << j << " " << endl;
        cin >> j1 >> j2 >> j3 >> j4 >> j5;
        tempVector.push_back(j1);
        tempVector.push_back(j2);
        tempVector.push_back(j3);
        tempVector.push_back(j4);
        tempVector.push_back(j5);
    }
    mainVector.push_back(tempVector);
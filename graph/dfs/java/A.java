// Copyright (C) 2016 by iamslash

// > java MainApp

import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

// > java A
public class A {

  private int N;
  private List<List<Integer>> adj = new ArrayList<List<Integer>>();
  private ArrayList<Integer> discovered;
  private int counter;
  

  private void BuildGraph(int n) {

  }
  
  private void Dfs(int here) {

  }
  
  public void Solve() {
    BuildGraph(N);
    for (int i = 0; i < N; ++i) {
      if (discovered[new Integer(i)] == -1)
        Dfs();
    }
  }
  
  public static void main(String[] args) {
    A a = new A();
    a.Solve();
  }
}

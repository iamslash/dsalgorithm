// Copyright (C) 2016 by iamslash

// > java MainApp

import java.util.*;

// > java A
public class A {

  private int N;
  private ArrayList<ArrayList<Integer>> adj = new ArrayList<ArrayList<Integer>>();
  private ArrayList<Integer> discovered;
  private int counter;
  

  private void BuildGraph(int n) {
    adj.clear();
    adj.ensureCapacity(n);
    discovered.clear();
    discovered.ensureCapacity(n);
    for (Integer i : discovered) discovered.set(i, -1);
    counter = 0;

    adj.get(0).add(1);
    adj.get(1).add(2);
    adj.get(1).add(3);
    adj.get(2).add(4);
  }
  
  private void Dfs(int here) {
    discovered.set(here, counter++);
    for (int i = 0; i < adj.get(here).size(); ++i) {
      int there = adj.get(here).get(i);
      if (discovered.get(there) == -1)
        Dfs(there);
    }
  }
  
  public void Solve() {
    BuildGraph(N);
    for (int i = 0; i < N; ++i) {
      if (discovered.get(i) == -1)
        Dfs(i);
    }
  }
  
  public static void main(String[] args) {
    A a = new A();
    a.Solve();
  }
}

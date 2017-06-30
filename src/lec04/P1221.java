package lec04;

import java.util.TreeMap;

public class P1221 {
	public static void main(String[] args) {
		String words[] = "   To know everything, is %^ to know nothing?   ".trim().toLowerCase().replaceAll("t","x").split("\\W+");
		int count=0;
		TreeMap<String, Integer> map = new TreeMap<String, Integer>();
		for (String word : words) {
			if(word.isEmpty())
				continue;
			++count;
			if (map.containsKey(word)) {
				int freq = map.get(word);
				map.put(word, freq + 1);
			} else {
				map.put(word, 1);
			}

		}
		System.out.println(count);
		for (String key : map.keySet()) {
			System.out.println(key + ":" + map.get(key));
		}
	}
}

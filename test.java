import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
class Main {
	static class Activity implements Comparable<Activity> {
		long s, f;
		public Activity(long s, long f) {
			this.s = s;
			this.f = f;
		}
		@Override
		public int compareTo(Activity o) {
			if ((f - s) > (o.f - o.s)) {
				return -1;
			}
			return 1;
		}
	}
	public static void main(String args[]) {
		try {
			BufferedReader br = new BufferedReader(new InputStreamReader(
					System.in));
			BufferedOutputStream bos = new BufferedOutputStream(System.out);
			String eol = System.getProperty("line.separator");
			byte[] eolb = eol.getBytes();
			String str = br.readLine();
			int t = Integer.parseInt(str);
			while (t-- > 0) {
				str = br.readLine();
				int N = Integer.parseInt(str);
				Activity[] act = new Activity[N];
				for (int i = 0; i < N; i++) {
					str = br.readLine();
					int blank = str.indexOf(' ');
					long s =Long.parseLong(str.substring(0, blank));
					long f =Long.parseLong(str.substring(blank + 1));
					act[i] = new Activity(s, f);
				}
				Arrays.sort(act);
				// for (int i = 0; i < N; i++) {
				// System.out.println(act[i].s + " " + act[i].f);
				// }
				bos.write(new Long(comp(act, N)).toString().getBytes());
				bos.write(eolb);
			}
			bos.flush();
		} catch (IOException ioe) {
			ioe.printStackTrace();
		}
	}
	private static long comp(Activity[] act, int n) {
		long sum = act[0].f - act[0].s + 1;
		int i = 0;
		for (int j = 1; j < n; j++) {
			if (act[j].s > act[i].f) {
				sum += (act[j].f - act[j].s + 1);
				i = j;
			}
		}
		return sum;
	}
}
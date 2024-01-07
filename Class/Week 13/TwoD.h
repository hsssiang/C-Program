namespace hsiang{
	class TwoD{
		public:
		~TwoD();
		TwoD();
		void input();
		void output();
		TwoD(int row , int col);
		TwoD operator + (TwoD obj);
		TwoD operator = (TwoD obj);
		private:
		int row;
		int col;
		int ** arrayp;
	};
}


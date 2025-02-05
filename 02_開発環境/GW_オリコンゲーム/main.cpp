#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>


int main(void)
{
	//画面に文字を表示する
	printf("俺には気になる子がいる。名前は羽由里、クラスのマドンナだ\n");
	printf("俺はその子と仲良くなりたいから、皆は１～３のキーで指示を出してくれ！\n");
	getchar();

	//画面に文字を表示する
	printf("朝、学校の玄関に入ったら、目の前に羽由里ちゃんがいる！\n");
	printf("俺はどうしたらいいんだ！指示をくれ！");

	int nData1;

	//数値の入力処理
	printf("１～３までのキーから数値を入力して、指示をしよう\n");
	printf("1：勇気を出して、笑顔で「おはよう」と言う\n");
	printf("2：緊張しながら、「おはよう…」と言う\n");
	printf("3：感情をむき出しにして、後ろから抱き着き、「おはよう」と言う\n");
	scanf("%d", &nData1);

	//数値を比較する
	if (nData1 <= 0 || nData1 >= 4) //||（倫理演算子）を使用
	{
		printf("入力された数値は範囲外です\n");
		scanf("%d", &nData1);
	}

	getchar();

	//数値を比較する
	switch (nData1)
	{
	case 1:
		printf("「あっ！おはよう！」羽由里ちゃんはとびっきりの可愛い笑顔で俺にそう言った\n");
		printf("親密度が２アップした\n");
		nData1 = 2;
		break;

	case 2:
		printf("「え？お、おはよう。」羽由里ちゃんは少し驚いた顔で俺にそう言った\n");
		printf("親密度が１アップした\n");
		nData1 = 1;
		break;

	case 3:
		printf("「きゃー！何すんの変態！」羽由里ちゃんの悲鳴で生徒指導の先生がやってきて、先生の厳重注意と共に羽由里ちゃんから距離を置かれた。\n");
		printf("GAME OVER");
		getchar();
		return 0;
		break;
	}

	getchar();



	//画面に文字を表示する
	printf("午前の授業と昼休みが終わり、午後はグループで話し合いだ！俺の番が回ってきた、羽由里ちゃんにどうかかっこいいところを…！\n");
	printf("俺はどうしたらいいんだ！指示をくれ！");

	int nData2;
	//数値の入力処理
	printf("１～３までのキーから数値を入力して、指示をしよう\n");
	printf("1:小学生でも分かるような感じで面白く自分の意見を言う\n");
	printf("2:やるときはやる。真面目に自分の真の意見を言う\n");
	printf("3:チャラく、ラップで自分の意見を言い、ウケを狙ってみる\n");
	scanf("%d", &nData2);

	//数値を比較する
	if (nData2 <= 0 || nData2 >= 4) //||（倫理演算子）を使用
	{
		printf("入力された数値は範囲外です\n");
		scanf("%d", &nData2);
	}

	getchar();

	//数値を比較する
	switch (nData2)
	{
	case 1:
		printf("「クスクス、わかりやすい」羽由里ちゃんは微笑んで俺にそう言った\n");
		printf("親密度が１アップした\n");
		nData2 = 1;
		break;

	case 2:
		printf("「わぁ、頭が良いなぁ…　しかも、かっこいい…」羽由里ちゃんは目を輝かせて、俺にそう言った\n");
		printf("親密度が２アップした\n");
		nData2 = 2;
		break;

	case 3:
		printf("「うっわ…　授業中に調子乗るとか倫理観無くて、まじ、引くんだけど…」羽由里ちゃんは〇んだ魚のような目で俺にそう言った\n");
		printf("GAME OVER");
		getchar();
		return 0;
		break;
	}

	getchar();



	//文字を表示する
	printf("掃除の時間だ！当番は俺と羽由里ちゃん、他の男子女子も含めて６人だ。羽由里ちゃんを何とかリードしたい…！\n");
	printf("俺はどうしたらいいんだ！指示をくれ！");

	int nData3;
	//画面に文字を表示する
	printf("１～３までのキーから数値を入力して、指示を出そう\n");
	printf("1:男子とふざけて、掃除用具を使い、定番の野球をやる\n");
	printf("2:無言で、黙々と掃除をやる\n");
	printf("3:女子と恥ずかしがらずに掃除を頑張る\n");
	scanf("%d", &nData3);


	//数値を比較する
	if (nData3 <= 0 || nData3 >= 4)//||倫理演算子を使用
	{
		printf("入力された数値は範囲外です");
		scanf("%d", &nData3);
	}

	getchar();

	//数値を比較する
	switch (nData3)
	{
	case 1:
		printf("「ちょっと、男子ふざけないでよ！先生に言うから」羽由里ちゃんと一緒にいた女子２人が俺達、男子３人にキレて職員室に行ってしまった\n");
		printf("GAME OVER");
		getchar();
		return 0;
		break;

	case 2:
		printf("「もー！一人でやらずに私達に頼ってよ～」羽由里ちゃんが少し膨れた顔で俺にそう言った\n");
		printf("親密度が１アップした\n");
		nData3 = 1;
		break;

	case 3:
		printf("「君はえらいな～！そこのふざけて掃除をサボっている２人の男子と違って」羽由里ちゃんは俺の頭を撫でながら、両端の女子と同情しながらそう言った\n");
		printf("親密度が２アップした\n");
		nData3 = 2;
		break;
	}

	getchar();


	{
		//文字を表示する
		printf("何とか掃除が終わり、帰りの用意をする俺\n");
		printf("すると、羽由里ちゃんが俺に近づいて、俺にこう言った\n");
		printf("「今日はお疲れ様！ねぇ、せっかくだしさ、一緒に帰らない？」\n");
		printf("俺は躊躇もなく、「うん、一緒に帰ろう」と即答した\n");
		printf("「わーい！いっぱい楽しい話しながら帰ろうね♪」");
		printf("羽由里ちゃんは俺にノリがいい感じにそう言った\n");
		getchar();
		printf("END\n");
	}



	int nAnswer;                  //計算結果用の変数を宣言する

	//３つの値を加算する
	nAnswer = nData1 + nData2 + nData3; //＋（算術演算子）を使用し加算する

//計算結果を表示する
	printf("合計親密度：%d\n", nAnswer);

	if (nAnswer == 6)
	{
		printf("君、イケメンだね… 羽由里ちゃんみたいな可愛い彼女出来るかもよ～、ヒューヒュー！");
	}

	else if (nAnswer == 4 || nAnswer == 5)
	{
		printf("くっ！惜しい！あともう一息で君はイケメンとして輝ける！");
	}

	else if (nAnswer == 3)
	{
		printf("足らぬ　足らぬ　自分磨きとコミュ力が足らぬ");
	}

	getchar();
	return 0;
}
















































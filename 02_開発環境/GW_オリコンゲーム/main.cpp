#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>


int main(void)
{
	//��ʂɕ�����\������
	printf("���ɂ͋C�ɂȂ�q������B���O�͉H�R���A�N���X�̃}�h���i��\n");
	printf("���͂��̎q�ƒ��ǂ��Ȃ肽������A�F�͂P�`�R�̃L�[�Ŏw�����o���Ă���I\n");
	getchar();

	//��ʂɕ�����\������
	printf("���A�w�Z�̌��ւɓ�������A�ڂ̑O�ɉH�R������񂪂���I\n");
	printf("���͂ǂ������炢���񂾁I�w��������I");

	int nData1;

	//���l�̓��͏���
	printf("�P�`�R�܂ł̃L�[���琔�l����͂��āA�w�������悤\n");
	printf("1�F�E�C���o���āA�Ί�Łu���͂悤�v�ƌ���\n");
	printf("2�F�ْ����Ȃ���A�u���͂悤�c�v�ƌ���\n");
	printf("3�F������ނ��o���ɂ��āA��납����������A�u���͂悤�v�ƌ���\n");
	scanf("%d", &nData1);

	//���l���r����
	if (nData1 <= 0 || nData1 >= 4) //||�i�ϗ����Z�q�j���g�p
	{
		printf("���͂��ꂽ���l�͔͈͊O�ł�\n");
		scanf("%d", &nData1);
	}

	getchar();

	//���l���r����
	switch (nData1)
	{
	case 1:
		printf("�u�����I���͂悤�I�v�H�R�������͂Ƃт�����̉����Ί�ŉ��ɂ���������\n");
		printf("�e���x���Q�A�b�v����\n");
		nData1 = 2;
		break;

	case 2:
		printf("�u���H���A���͂悤�B�v�H�R�������͏�����������ŉ��ɂ���������\n");
		printf("�e���x���P�A�b�v����\n");
		nData1 = 1;
		break;

	case 3:
		printf("�u����[�I������̕ϑԁI�v�H�R�������̔ߖŐ��k�w���̐搶������Ă��āA�搶�̌��d���ӂƋ��ɉH�R������񂩂狗����u���ꂽ�B\n");
		printf("GAME OVER");
		getchar();
		return 0;
		break;
	}

	getchar();



	//��ʂɕ�����\������
	printf("�ߑO�̎��Ƃƒ��x�݂��I���A�ߌ�̓O���[�v�Řb���������I���̔Ԃ�����Ă����A�H�R�������ɂǂ��������������Ƃ�����c�I\n");
	printf("���͂ǂ������炢���񂾁I�w��������I");

	int nData2;
	//���l�̓��͏���
	printf("�P�`�R�܂ł̃L�[���琔�l����͂��āA�w�������悤\n");
	printf("1:���w���ł�������悤�Ȋ����Ŗʔ��������̈ӌ�������\n");
	printf("2:���Ƃ��͂��B�^�ʖڂɎ����̐^�̈ӌ�������\n");
	printf("3:�`�������A���b�v�Ŏ����̈ӌ��������A�E�P��_���Ă݂�\n");
	scanf("%d", &nData2);

	//���l���r����
	if (nData2 <= 0 || nData2 >= 4) //||�i�ϗ����Z�q�j���g�p
	{
		printf("���͂��ꂽ���l�͔͈͊O�ł�\n");
		scanf("%d", &nData2);
	}

	getchar();

	//���l���r����
	switch (nData2)
	{
	case 1:
		printf("�u�N�X�N�X�A�킩��₷���v�H�R�������͔��΂�ŉ��ɂ���������\n");
		printf("�e���x���P�A�b�v����\n");
		nData2 = 1;
		break;

	case 2:
		printf("�u�킟�A�����ǂ��Ȃ��c�@�������A�����������c�v�H�R�������͖ڂ��P�����āA���ɂ���������\n");
		printf("�e���x���Q�A�b�v����\n");
		nData2 = 2;
		break;

	case 3:
		printf("�u������c�@���ƒ��ɒ��q���Ƃ��ϗ��ϖ����āA�܂��A�����񂾂��ǁc�v�H�R�������́Z�񂾋��̂悤�Ȗڂŉ��ɂ���������\n");
		printf("GAME OVER");
		getchar();
		return 0;
		break;
	}

	getchar();



	//������\������
	printf("�|���̎��Ԃ��I���Ԃ͉��ƉH�R�������A���̒j�q���q���܂߂ĂU�l���B�H�R�����������Ƃ����[�h�������c�I\n");
	printf("���͂ǂ������炢���񂾁I�w��������I");

	int nData3;
	//��ʂɕ�����\������
	printf("�P�`�R�܂ł̃L�[���琔�l����͂��āA�w�����o����\n");
	printf("1:�j�q�Ƃӂ����āA�|���p����g���A��Ԃ̖싅�����\n");
	printf("2:�����ŁA�فX�Ƒ|�������\n");
	printf("3:���q�ƒp���������炸�ɑ|�����撣��\n");
	scanf("%d", &nData3);


	//���l���r����
	if (nData3 <= 0 || nData3 >= 4)//||�ϗ����Z�q���g�p
	{
		printf("���͂��ꂽ���l�͔͈͊O�ł�");
		scanf("%d", &nData3);
	}

	getchar();

	//���l���r����
	switch (nData3)
	{
	case 1:
		printf("�u������ƁA�j�q�ӂ����Ȃ��ł�I�搶�Ɍ�������v�H�R�������ƈꏏ�ɂ������q�Q�l�����B�A�j�q�R�l�ɃL���ĐE�����ɍs���Ă��܂���\n");
		printf("GAME OVER");
		getchar();
		return 0;
		break;

	case 2:
		printf("�u���[�I��l�ł�炸�Ɏ��B�ɗ����Ă�`�v�H�R������񂪏����c�ꂽ��ŉ��ɂ���������\n");
		printf("�e���x���P�A�b�v����\n");
		nData3 = 1;
		break;

	case 3:
		printf("�u�N�͂��炢�ȁ`�I�����̂ӂ����đ|�����T�{���Ă���Q�l�̒j�q�ƈ���āv�H�R�������͉��̓��𕏂łȂ���A���[�̏��q�Ɠ���Ȃ��炻��������\n");
		printf("�e���x���Q�A�b�v����\n");
		nData3 = 2;
		break;
	}

	getchar();


	{
		//������\������
		printf("���Ƃ��|�����I���A�A��̗p�ӂ����鉴\n");
		printf("����ƁA�H�R������񂪉��ɋ߂Â��āA���ɂ���������\n");
		printf("�u�����͂����l�I�˂��A���������������A�ꏏ�ɋA��Ȃ��H�v\n");
		printf("�����S�O���Ȃ��A�u����A�ꏏ�ɋA�낤�v�Ƒ�������\n");
		printf("�u��[���I�����ς��y�����b���Ȃ���A�낤�ˁ�v");
		printf("�H�R�������͉��Ƀm�������������ɂ���������\n");
		getchar();
		printf("END\n");
	}



	int nAnswer;                  //�v�Z���ʗp�̕ϐ���錾����

	//�R�̒l�����Z����
	nAnswer = nData1 + nData2 + nData3; //�{�i�Z�p���Z�q�j���g�p�����Z����

//�v�Z���ʂ�\������
	printf("���v�e���x�F%d\n", nAnswer);

	if (nAnswer == 6)
	{
		printf("�N�A�C�P�������ˁc �H�R�������݂����ȉ����ޏ��o���邩����`�A�q���[�q���[�I");
	}

	else if (nAnswer == 4 || nAnswer == 5)
	{
		printf("�����I�ɂ����I���Ƃ����ꑧ�ŌN�̓C�P�����Ƃ��ċP����I");
	}

	else if (nAnswer == 3)
	{
		printf("����ʁ@����ʁ@���������ƃR�~���͂������");
	}

	getchar();
	return 0;
}
















































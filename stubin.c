#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	FILE *fp;
	int i;

	//define struct student with name and score
	struct student {
		char num[8];
		int score;
	}stu[] = {{"101",81},{"102",82},{"103",83},{"104",84},{"105",85}},stu1[5]; //initialized struct student data
	
	if(0 == (fp = fopen("stu.bin","wb+"))){ 
		printf("文件打不开");
		exit(0);
	}

	//打开了文件 将数据写入到文件中去
	for ( i = 0; i < 5; ++i)
	{
		fwrite(&stu[i],sizeof(struct student),1,fp); //写入数据

	}
	rewind(fp);
	//输出数据
	printf("学号    成绩\n");
	while(!feof(fp)){
		fread(&stu1[i],sizeof(struct student),1,fp);
		printf("%s      %d\n",stu1[i].num,stu1[i].score );
	}
	fclose(fp);	
	return 0;
}

//总结: 适合再看几遍
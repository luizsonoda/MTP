# include  < stdio.h >
# include  < stdlib.h >
# include  < math.h >
 byte de caractere não assinado  typedef ;
typedef  signo  short  int word;
typedef  unsigned  int dword;
typedef  struct stPixel {byte B; byte G; byte R; } Pixel;
typedef  struct stHeaderBMP24bpp {
	byte identificador [ 2 ];
	dword tam_arquivo;
	informações de palavras1, informações2;
	deslocamento dword;
	dword tam_cabecalho;
	dword largura_px;
	dword altura_px;
	palavra qtde_plano_cores;
	palavra bits_per_pixel;
	dword metodo_compressao;
	dword tam_imagem;
	dword resolucao_horizontal;
	dword resolucao_vertical;
	dword numero_cores_paleta;
	dword numero_cores_importantes;
} HeaderBMP24bpp;

void  printHeader (HeaderBMP24bpp header) {
	printf ( " Origem: % c% c \ n " , cabeçalho. identificador [ 0 ], cabeçalho. identificador [ 1 ]);
	printf ( " Tamanho do arquivo: % u bytes \ n " , cabeçalho. tam_arquivo );
	printf ( " Offset: % u bytes \ n " , cabeçalho, offset );
	printf ( " Tamanho do cabecalho: % u bytes \ n " , cabeçalho. tam_cabecalho );
	printf ( " Tamanho da imagem: % u px (L), % u px (A) \ n " , cabeçalho. largura_px , cabeçalho. altura_px );
	printf ( " Qtde plano de núcleos: % u \ n " , cabeçalho. qtde_plano_cores );
	printf ( " Bits por pixel (BPP): % u \ n " , cabeçalho. bits_per_pixel );
	printf ( " Metodo de compressão: % u \ n " , cabeçalho. metodo_compressao );
	printf ( " Tamanho da imagem (exceto cabecalho): % u bytes \ n " , cabeçalho. tam_imagem );
	printf ( " Resoluçõe: % u dpi (horizontal), % u dpi (vertical) \ n " , cabeçalho. resolucao_horizontal , cabeçalho. resolucao_vertical);
	printf ( " Numero de núcleos na paleta: % u \ n " , cabeçalho. numero_cores_paleta );
	printf ( " Numero de cores importantes: % u \ n " , cabeçalho. numero_cores_importantes );
}

void  printImagem (Pixel * imagem, int qtd_pixels) {
	int i;
	para (i = 0 ; i <qtd_pixels; i ++)
		printf ( " % 04d : % 02X  % 02X  % 02X : % 03u  % 03u  % 03u \ n " , i, imagem [i]. R , imagem [i]. G , imagem [i]. B ,
			imagem [i]. R , imagem [i]. G , imagem [i]. B );
}

Pixel * carregar_imagem ( const  char * nomearq, HeaderBMP24bpp * pheader) {
	Pixel * imagem = NULL ;
	int AUX, PAL, i, j;
	ARQUIVO * arq;
	arq = fopen (nomearq, " rb " );
	fread (pheader-> identificador, sizeof (byte), 2 , arq);
	fread (& (pheader-> tam_arquivo), sizeof (dword), 1 , arq);
	fread (& (pheader-> infores1), sizeof (palavra), 1 , arq);
	fread (& (pheader-> infores2), sizeof (word), 1 , arq);
	// fseek (arq, 2 * sizeof (palavra), SEEK_CUR);
	fread (& (pheader-> offset), sizeof (dword), 1 , arq);
	fread (& (pheader-> tam_cabecalho), sizeof (dword), 1 , arq);
	fread (& (pheader-> largura_px), sizeof (dword), 1 , arq);
	fread (& (pheader-> altura_px), sizeof (dword), 1 , arq);
	fread (& (pheader-> qtde_plano_cores), sizeof (palavra), 1 , arq);
	fread (& (pheader-> bits_per_pixel), sizeof (palavra), 1 , arq);
	fread (& (pheader-> metodo_compressao), sizeof (dword), 1 , arq);
	fread (& (pheader-> tam_imagem), sizeof (dword), 1 , arq);
	fread (& (pheader-> resolucao_horizontal), sizeof (dword), 1 , arq);
	fread (& (pheader-> resolucao_vertical), sizeof (dword), 1 , arq);
	fread (& (pheader-> numero_cores_paleta), sizeof (dword), 1 , arq);
	se (pheader-> numero_cores_paleta == 0 ) pheader-> numero_cores_paleta = 1 << pheader-> bits_per_pixel;
	fread (& (pheader-> numero_cores_importantes), sizeof (dword), 1 , arq);
	se (pheader-> numero_cores_importantes == 0 ) pheader-> numero_cores_importantes = pheader-> numero_cores_paleta;
	// ************************************************ *****************************
	imagem = (Pixel *) calloc ( sizeof (Pixel), pheader-> largura_px * pheader-> altura_px);
	PAL = piso ((pheader-> bits_per_pixel * pheader-> largura_px + 31. ) / 32. ) * 4 ;
	AUX = PAL - poreer-> largura_px * 3 ;
	para (j = 0 ; j <pheader-> altura_px; j ++) {
		para (i = 0 ; i <pheader-> largura_px; i ++)
			fread (imagem + (j * pheader-> largura_px + i), sizeof (Pixel), 1 , arq);
		se (AUX> 0 ) // se não for multiplo de 32 bits
			fseek (arq, AUX, SEEK_CUR); // fwrite (& lixo, AUX, 1, arq);
	}
	fclose (arq);
	retornar imagem;
}

int  main () {
	Pixel * imagem;
	HeaderBMP24bpp cabeçalho;
	imagem = carregar_imagem ( " imagem.bmp " , & cabeçalho);
	se (imagem) {
		printHeader (cabeçalho);
		printImagem (imagem, cabeçalho. largura_px * cabeçalho. altura_px );
		livre (imagem);
	}
	retornar EXIT_SUCCESS;
}

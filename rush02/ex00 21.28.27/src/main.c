/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur < syonekur@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 19:06:03 by syonekur          #+#    #+#             */
/*   Updated: 2023/08/29 15:52:27 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

// メモリ解放用関数

void	free_dictionary(t_dict_entry *dict)
{
	for (int i = 0; dict[i].key != NULL; ++i)
	{
		free(dict[i].key);
		free(dict[i].value);
	}
	free(dict);
}

int	main(int argc, char *argv[])
{
	char			*str;
	char			**strs;
	int				strs_size;
	t_dict	*dictionary;
	int				num;
	t_dict_entry	*dict;
	unsigned int	num;
	char			*word;

	// コマンドライン引数の処理
	if (argc == 2)
	{
		str = read_dictionary("numbers.dict");
		strs = ft_split(str, "\n");
		strs_size = 0;
		while (strs[strs_size])
			strs_size++;
		strs_to_dict(dictionary, strs_size, strs);
		num = ft_atoi(argv[1]);
		convert_num(num, dictionary);
	}
	if (argc != 3)
	{
		write(1, "Usage: ./rush-02 dictionary_file number\n", 45);
		return (1);
	}
	// 辞書データの読み込み
	dict = read_dictionary(argv[1]);
	if (dict == NULL)
	{
		return (1); // 辞書の読み込みに失敗したら終了
	}
	// 数値変換と結果の表示
	if (is_valid_number(argv[2]))
	{
		num = ft_atoi(argv[2]);
		word = chunk_to_word(num, dict);
		write(1, word, strlen(word));
		write(1, "\n", 1);
		free(word);
	}
	else
	{
		write(1, "Invalid number format\n", 22);
	}
	// メモリ解放
	free_dictionary(dict);
	return (0);
}

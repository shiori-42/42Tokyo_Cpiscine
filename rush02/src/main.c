/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur < syonekur@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 19:06:03 by syonekur          #+#    #+#             */
/*   Updated: 2023/08/27 19:28:34 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "rush02.h"  // rush02.hはあなたのヘッダーファイルと仮定

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <dictionary_file>\n", argv[0]);
        return 1;
    }

    t_dict_entry *dictionary = read_dictionary(argv[1]);
    if (!dictionary) {
        printf("Failed to read dictionary from %s\n", argv[1]);
        return 1;
    }

    // 以下、dictionaryの内容を使った処理（この部分は省略）
    // ...

    // 最後に、動的に確保したメモリを解放
    // （各エントリーのキーと値も動的に確保した場合は、それらも解放する必要があります）

    // 以下、メモリ解放処理（この部分は省略）
    // ...

    return 0;
}

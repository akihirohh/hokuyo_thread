#ifndef URG_DEBUG_H
#define URG_DEBUG_H

/*!
  \file
  \brief URG debugging functions

  \author Satofumi KAMIMURA

  \attention 使う必要はありません。

*/

#ifdef __cplusplus
extern "C" {
#endif

#include "urg_sensor.h"


    /*!
     \brief センサにデータを直接送信する
    */
    extern int urg_raw_write(urg_t *urg, const char *data, int data_size);


    /*!
     \brief センサからデータを直接受信する
    */
    extern int urg_raw_read(urg_t *urg, char *data, int max_data_size,
                            int timeout);

    /*!
     \brief センサから改行までのデータを直接受信する
     */
    extern int urg_raw_readline(urg_t *urg,char *data, int max_data_size,
                                int timeout);

#ifdef __cplusplus
}
#endif

#endif /* !URG_DEBUG_H */

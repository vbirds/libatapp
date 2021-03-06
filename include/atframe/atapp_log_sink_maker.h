﻿/**
 * atapp_log_sink_maker.h
 *
 *  Created on: 2016年05月21日
 *      Author: owent
 */
#ifndef LIBATAPP_ATAPP_LOG_SINK_MAKER_H_
#define LIBATAPP_ATAPP_LOG_SINK_MAKER_H_

#pragma once

#include <string>

#include "ini_loader.h"
#include "log/log_wrapper.h"

namespace atapp {
    class log_sink_maker {
    public:
        typedef std::function<util::log::log_wrapper::log_handler_t(const std::string &, util::log::log_wrapper &, uint32_t,
                                                                    util::config::ini_value &)>
            log_reg_t;

    private:
        log_sink_maker();
        ~log_sink_maker();

    public:
        static const std::string &get_file_sink_name();

        static log_reg_t get_file_sink_reg();

        static const std::string &get_stdout_sink_name();

        static log_reg_t get_stdout_sink_reg();

        static const std::string &get_stderr_sink_name();

        static log_reg_t get_stderr_sink_reg();
    };
}

#endif

#pragma once


namespace elephantlogger {

class LogMessage;


/**
 * Interface that defines how to print a log.
 */
class IOutput {

    protected:
        IOutput() = default;
    public:
        virtual ~IOutput() = default;

    public:

        /**
         * Write one LogMessage on this output and add a line return.
         * Special format may be added.
         *
         * \param message The message to print in the channel.
         */
        virtual void write(const LogMessage & message) = 0;
};


} // End namespace



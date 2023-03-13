
// Generated from ifcc.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "ifccParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ifccParser.
 */
class  ifccVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ifccParser.
   */
    virtual antlrcpp::Any visitAxiom(ifccParser::AxiomContext *context) = 0;

    virtual antlrcpp::Any visitProg(ifccParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitCode(ifccParser::CodeContext *context) = 0;

    virtual antlrcpp::Any visitInstruction(ifccParser::InstructionContext *context) = 0;

    virtual antlrcpp::Any visitId(ifccParser::IdContext *context) = 0;

    virtual antlrcpp::Any visitType(ifccParser::TypeContext *context) = 0;


};


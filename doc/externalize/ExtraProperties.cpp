//==========================================================================
//  LHCb Online software suite
//--------------------------------------------------------------------------
//  Copyright (C) Organisation europeenne pour la Recherche nucleaire (CERN)
//  All rights reserved.
//
//  For the licensing terms see OnlineSys/LICENSE.
//
//--------------------------------------------------------------------------
//  ExtraProperties.cpp
//--------------------------------------------------------------------------
//
//  Package    : Dataflow
//
//  Author     : Markus Frank
//==========================================================================
// Note:
//
// This is an example file, which shows how to instantiate extera parsers,
// which are not part of DD4hep, but may be interesting for a
// client application.
//
//==========================================================================

/// Framework includes
#include "DD4hep/Parsers.h"

#if !defined(DD4HEP_HAVE_ALL_PARSERS)
PARSERS_DECL_FOR_SINGLE(unsigned int)
PARSERS_DECL_FOR_SINGLE(unsigned long)
PARSERS_DECL_FOR_SINGLE(long long)
PARSERS_DECL_FOR_SINGLE(unsigned long long)
#endif

#include "DD4hep/BasicGrammar_inl.h"
#include "DD4hep/ComponentProperties_inl.h"

typedef std::map<std::string, std::vector<std::string> > map_t;
DD4HEP_DEFINE_PARSER_GRAMMAR(map_t,eval_obj)
DD4HEP_DEFINE_PROPERTY_TYPE(map_t)

#if !defined(DD4HEP_HAVE_ALL_PARSERS)
DD4HEP_DEFINE_PARSER_GRAMMAR(unsigned int,eval_item)
DD4HEP_DEFINE_PARSER_GRAMMAR(unsigned long,eval_item)
DD4HEP_DEFINE_PROPERTY_TYPE(unsigned int)
DD4HEP_DEFINE_PROPERTY_TYPE(unsigned long)

DD4HEP_DEFINE_PARSER_GRAMMAR(long long,eval_item)
DD4HEP_DEFINE_PARSER_GRAMMAR(unsigned long long,eval_item)

DD4HEP_DEFINE_PROPERTY_TYPE(long long)
DD4HEP_DEFINE_PROPERTY_TYPE(unsigned long long)
#endif
set(XMLPATTERNS_PRIVATE_INCLUDES
    ${XMLPATTERNS_PRIVATE_INCLUDES}
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qnamespacesupport_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdalternative_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdannotated_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdannotation_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdapplicationinformation_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdassertion_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdattribute_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdattributereference_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdattributeterm_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdattributeuse_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdattributegroup_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdcomplextype_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsddocumentation_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdelement_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdfacet_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdidcache_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdidchelper_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdidentityconstraint_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdinstancereader_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdmodelgroup_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdnotation_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdparticle_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdparticlechecker_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdreference_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdsimpletype_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdschema_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdschemachecker_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdschemacontext_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdschemadebugger_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdschemahelper_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdschemamerger_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdschemaparser_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdschemaparsercontext_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdschemaresolver_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdschematoken_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdschematypesfactory_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdstatemachine_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdstatemachinebuilder_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdterm_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdtypechecker_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsduserschematype_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdvalidatedxmlnodemodel_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdvalidatinginstancereader_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdwildcard_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdxpathexpression_p.h
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsduserschematype.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdstatemachine.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdschemachecker_helper.cpp
)

set(XMLPATTERNS_SOURCES
    ${XMLPATTERNS_SOURCES}
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qnamespacesupport.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdalternative.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdannotated.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdannotation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdapplicationinformation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdassertion.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdattribute.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdattributereference.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdattributeterm.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdattributeuse.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdattributegroup.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdcomplextype.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsddocumentation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdelement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdfacet.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdidcache.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdidchelper.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdidentityconstraint.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdinstancereader.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdmodelgroup.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdnotation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdparticle.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdparticlechecker.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdreference.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdsimpletype.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdschema.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdschemachecker.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdschemachecker_setup.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdschemacontext.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdschemadebugger.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdschemahelper.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdschemamerger.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdschemaparser.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdschemaparser_setup.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdschemaparsercontext.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdschemaresolver.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdschematoken.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdschematypesfactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdstatemachinebuilder.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdterm.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdtypechecker.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdwildcard.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdvalidatedxmlnodemodel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdvalidatinginstancereader.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/qxsdxpathexpression.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/schema/builtinschemas.qrc
)
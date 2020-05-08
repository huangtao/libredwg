// unstable. Called VXTable
#define DWG_TYPE DWG_TYPE_VPORT_ENTITY_HEADER
#include "common.c"

void
api_process (dwg_object *obj)
{
  int error, isnew;
  BITCODE_RS flag;
  BITCODE_T name;
  BITCODE_RS used;
  BITCODE_B is_xref_ref;
  BITCODE_BS is_xref_resolved;
  BITCODE_B is_xref_dep;
  BITCODE_H xref;

  BITCODE_B flag1;
  BITCODE_BL num_viewports;
  BITCODE_H *viewports;

  //Dwg_Version_Type dwg_version = obj->parent->header.version;
  dwg_obj_vport_entity_header *_obj = dwg_object_to_VPORT_ENTITY_HEADER (obj);

  CHK_ENTITY_TYPE (_obj, VPORT_ENTITY_HEADER, flag, RC, flag);
  CHK_ENTITY_UTF8TEXT (_obj, VPORT_ENTITY_HEADER, name, name);
  CHK_ENTITY_TYPE (_obj, VPORT_ENTITY_HEADER, used, RS, used);
  CHK_ENTITY_TYPE (_obj, VPORT_ENTITY_HEADER, is_xref_ref, B, is_xref_ref);
  CHK_ENTITY_TYPE (_obj, VPORT_ENTITY_HEADER, is_xref_resolved, BS, is_xref_resolved);
  CHK_ENTITY_TYPE (_obj, VPORT_ENTITY_HEADER, is_xref_dep, B, is_xref_dep);
  CHK_ENTITY_H (_obj, VPORT_ENTITY_HEADER, xref, xref);

  CHK_ENTITY_TYPE (_obj, VPORT_ENTITY_HEADER, flag1, B, flag1);
  CHK_ENTITY_TYPE (_obj, VPORT_ENTITY_HEADER, num_viewports, BL, num_viewports);
  CHK_ENTITY_HV (_obj, VPORT_ENTITY_HEADER, viewports, viewports, num_viewports);
}

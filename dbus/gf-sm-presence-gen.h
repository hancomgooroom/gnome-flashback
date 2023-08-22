/*
 * This file is generated by gdbus-codegen, do not modify it.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from. Note that it links to GLib, so must comply with the
 * LGPL linking clauses.
 */

#ifndef __GF_SM_PRESENCE_GEN_H__
#define __GF_SM_PRESENCE_GEN_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.gnome.SessionManager.Presence */

#define GF_TYPE_SM_PRESENCE_GEN (gf_sm_presence_gen_get_type ())
#define GF_SM_PRESENCE_GEN(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GF_TYPE_SM_PRESENCE_GEN, GfSmPresenceGen))
#define GF_IS_SM_PRESENCE_GEN(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GF_TYPE_SM_PRESENCE_GEN))
#define GF_SM_PRESENCE_GEN_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), GF_TYPE_SM_PRESENCE_GEN, GfSmPresenceGenIface))

struct _GfSmPresenceGen;
typedef struct _GfSmPresenceGen GfSmPresenceGen;
typedef struct _GfSmPresenceGenIface GfSmPresenceGenIface;

struct _GfSmPresenceGenIface
{
  GTypeInterface parent_iface;


  guint  (*get_status) (GfSmPresenceGen *object);

  void (*status_changed) (
    GfSmPresenceGen *object,
    guint arg_status);

};

GType gf_sm_presence_gen_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *gf_sm_presence_gen_interface_info (void);
guint gf_sm_presence_gen_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus signal emissions functions: */
void gf_sm_presence_gen_emit_status_changed (
    GfSmPresenceGen *object,
    guint arg_status);



/* D-Bus property accessors: */
guint gf_sm_presence_gen_get_status (GfSmPresenceGen *object);
void gf_sm_presence_gen_set_status (GfSmPresenceGen *object, guint value);


/* ---- */

#define GF_TYPE_SM_PRESENCE_GEN_PROXY (gf_sm_presence_gen_proxy_get_type ())
#define GF_SM_PRESENCE_GEN_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GF_TYPE_SM_PRESENCE_GEN_PROXY, GfSmPresenceGenProxy))
#define GF_SM_PRESENCE_GEN_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GF_TYPE_SM_PRESENCE_GEN_PROXY, GfSmPresenceGenProxyClass))
#define GF_SM_PRESENCE_GEN_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GF_TYPE_SM_PRESENCE_GEN_PROXY, GfSmPresenceGenProxyClass))
#define GF_IS_SM_PRESENCE_GEN_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GF_TYPE_SM_PRESENCE_GEN_PROXY))
#define GF_IS_SM_PRESENCE_GEN_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GF_TYPE_SM_PRESENCE_GEN_PROXY))

typedef struct _GfSmPresenceGenProxy GfSmPresenceGenProxy;
typedef struct _GfSmPresenceGenProxyClass GfSmPresenceGenProxyClass;
typedef struct _GfSmPresenceGenProxyPrivate GfSmPresenceGenProxyPrivate;

struct _GfSmPresenceGenProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  GfSmPresenceGenProxyPrivate *priv;
};

struct _GfSmPresenceGenProxyClass
{
  GDBusProxyClass parent_class;
};

GType gf_sm_presence_gen_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GfSmPresenceGenProxy, g_object_unref)
#endif

void gf_sm_presence_gen_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GfSmPresenceGen *gf_sm_presence_gen_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
GfSmPresenceGen *gf_sm_presence_gen_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void gf_sm_presence_gen_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GfSmPresenceGen *gf_sm_presence_gen_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
GfSmPresenceGen *gf_sm_presence_gen_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define GF_TYPE_SM_PRESENCE_GEN_SKELETON (gf_sm_presence_gen_skeleton_get_type ())
#define GF_SM_PRESENCE_GEN_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GF_TYPE_SM_PRESENCE_GEN_SKELETON, GfSmPresenceGenSkeleton))
#define GF_SM_PRESENCE_GEN_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GF_TYPE_SM_PRESENCE_GEN_SKELETON, GfSmPresenceGenSkeletonClass))
#define GF_SM_PRESENCE_GEN_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GF_TYPE_SM_PRESENCE_GEN_SKELETON, GfSmPresenceGenSkeletonClass))
#define GF_IS_SM_PRESENCE_GEN_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GF_TYPE_SM_PRESENCE_GEN_SKELETON))
#define GF_IS_SM_PRESENCE_GEN_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GF_TYPE_SM_PRESENCE_GEN_SKELETON))

typedef struct _GfSmPresenceGenSkeleton GfSmPresenceGenSkeleton;
typedef struct _GfSmPresenceGenSkeletonClass GfSmPresenceGenSkeletonClass;
typedef struct _GfSmPresenceGenSkeletonPrivate GfSmPresenceGenSkeletonPrivate;

struct _GfSmPresenceGenSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  GfSmPresenceGenSkeletonPrivate *priv;
};

struct _GfSmPresenceGenSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType gf_sm_presence_gen_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GfSmPresenceGenSkeleton, g_object_unref)
#endif

GfSmPresenceGen *gf_sm_presence_gen_skeleton_new (void);


G_END_DECLS

#endif /* __GF_SM_PRESENCE_GEN_H__ */

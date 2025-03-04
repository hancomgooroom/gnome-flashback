/*
 * This file is generated by gdbus-codegen, do not modify it.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from. Note that it links to GLib, so must comply with the
 * LGPL linking clauses.
 */

#ifndef __GF_DBUS_DISPLAY_CONFIG_H__
#define __GF_DBUS_DISPLAY_CONFIG_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.gnome.Mutter.DisplayConfig */

#define GF_DBUS_TYPE_DISPLAY_CONFIG (gf_dbus_display_config_get_type ())
#define GF_DBUS_DISPLAY_CONFIG(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GF_DBUS_TYPE_DISPLAY_CONFIG, GfDBusDisplayConfig))
#define GF_DBUS_IS_DISPLAY_CONFIG(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GF_DBUS_TYPE_DISPLAY_CONFIG))
#define GF_DBUS_DISPLAY_CONFIG_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), GF_DBUS_TYPE_DISPLAY_CONFIG, GfDBusDisplayConfigIface))

struct _GfDBusDisplayConfig;
typedef struct _GfDBusDisplayConfig GfDBusDisplayConfig;
typedef struct _GfDBusDisplayConfigIface GfDBusDisplayConfigIface;

struct _GfDBusDisplayConfigIface
{
  GTypeInterface parent_iface;



  gboolean (*handle_apply_monitors_config) (
    GfDBusDisplayConfig *object,
    GDBusMethodInvocation *invocation,
    guint arg_serial,
    guint arg_method,
    GVariant *arg_logical_monitors,
    GVariant *arg_properties);

  gboolean (*handle_change_backlight) (
    GfDBusDisplayConfig *object,
    GDBusMethodInvocation *invocation,
    guint arg_serial,
    guint arg_output,
    gint arg_value);

  gboolean (*handle_get_crtc_gamma) (
    GfDBusDisplayConfig *object,
    GDBusMethodInvocation *invocation,
    guint arg_serial,
    guint arg_crtc);

  gboolean (*handle_get_current_state) (
    GfDBusDisplayConfig *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_resources) (
    GfDBusDisplayConfig *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_set_crtc_gamma) (
    GfDBusDisplayConfig *object,
    GDBusMethodInvocation *invocation,
    guint arg_serial,
    guint arg_crtc,
    GVariant *arg_red,
    GVariant *arg_green,
    GVariant *arg_blue);

  gboolean (*handle_set_output_ctm) (
    GfDBusDisplayConfig *object,
    GDBusMethodInvocation *invocation,
    guint arg_serial,
    guint arg_output,
    GVariant *arg_ctm);

  gboolean  (*get_apply_monitors_config_allowed) (GfDBusDisplayConfig *object);

  gboolean  (*get_night_light_supported) (GfDBusDisplayConfig *object);

  gboolean  (*get_panel_orientation_managed) (GfDBusDisplayConfig *object);

  gint  (*get_power_save_mode) (GfDBusDisplayConfig *object);

  void (*monitors_changed) (
    GfDBusDisplayConfig *object);

};

GType gf_dbus_display_config_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *gf_dbus_display_config_interface_info (void);
guint gf_dbus_display_config_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void gf_dbus_display_config_complete_get_resources (
    GfDBusDisplayConfig *object,
    GDBusMethodInvocation *invocation,
    guint serial,
    GVariant *crtcs,
    GVariant *outputs,
    GVariant *modes,
    gint max_screen_width,
    gint max_screen_height);

void gf_dbus_display_config_complete_change_backlight (
    GfDBusDisplayConfig *object,
    GDBusMethodInvocation *invocation,
    gint new_value);

void gf_dbus_display_config_complete_get_crtc_gamma (
    GfDBusDisplayConfig *object,
    GDBusMethodInvocation *invocation,
    GVariant *red,
    GVariant *green,
    GVariant *blue);

void gf_dbus_display_config_complete_set_crtc_gamma (
    GfDBusDisplayConfig *object,
    GDBusMethodInvocation *invocation);

void gf_dbus_display_config_complete_get_current_state (
    GfDBusDisplayConfig *object,
    GDBusMethodInvocation *invocation,
    guint serial,
    GVariant *monitors,
    GVariant *logical_monitors,
    GVariant *properties);

void gf_dbus_display_config_complete_apply_monitors_config (
    GfDBusDisplayConfig *object,
    GDBusMethodInvocation *invocation);

void gf_dbus_display_config_complete_set_output_ctm (
    GfDBusDisplayConfig *object,
    GDBusMethodInvocation *invocation);



/* D-Bus signal emissions functions: */
void gf_dbus_display_config_emit_monitors_changed (
    GfDBusDisplayConfig *object);



/* D-Bus method calls: */
void gf_dbus_display_config_call_get_resources (
    GfDBusDisplayConfig *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gf_dbus_display_config_call_get_resources_finish (
    GfDBusDisplayConfig *proxy,
    guint *out_serial,
    GVariant **out_crtcs,
    GVariant **out_outputs,
    GVariant **out_modes,
    gint *out_max_screen_width,
    gint *out_max_screen_height,
    GAsyncResult *res,
    GError **error);

gboolean gf_dbus_display_config_call_get_resources_sync (
    GfDBusDisplayConfig *proxy,
    guint *out_serial,
    GVariant **out_crtcs,
    GVariant **out_outputs,
    GVariant **out_modes,
    gint *out_max_screen_width,
    gint *out_max_screen_height,
    GCancellable *cancellable,
    GError **error);

void gf_dbus_display_config_call_change_backlight (
    GfDBusDisplayConfig *proxy,
    guint arg_serial,
    guint arg_output,
    gint arg_value,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gf_dbus_display_config_call_change_backlight_finish (
    GfDBusDisplayConfig *proxy,
    gint *out_new_value,
    GAsyncResult *res,
    GError **error);

gboolean gf_dbus_display_config_call_change_backlight_sync (
    GfDBusDisplayConfig *proxy,
    guint arg_serial,
    guint arg_output,
    gint arg_value,
    gint *out_new_value,
    GCancellable *cancellable,
    GError **error);

void gf_dbus_display_config_call_get_crtc_gamma (
    GfDBusDisplayConfig *proxy,
    guint arg_serial,
    guint arg_crtc,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gf_dbus_display_config_call_get_crtc_gamma_finish (
    GfDBusDisplayConfig *proxy,
    GVariant **out_red,
    GVariant **out_green,
    GVariant **out_blue,
    GAsyncResult *res,
    GError **error);

gboolean gf_dbus_display_config_call_get_crtc_gamma_sync (
    GfDBusDisplayConfig *proxy,
    guint arg_serial,
    guint arg_crtc,
    GVariant **out_red,
    GVariant **out_green,
    GVariant **out_blue,
    GCancellable *cancellable,
    GError **error);

void gf_dbus_display_config_call_set_crtc_gamma (
    GfDBusDisplayConfig *proxy,
    guint arg_serial,
    guint arg_crtc,
    GVariant *arg_red,
    GVariant *arg_green,
    GVariant *arg_blue,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gf_dbus_display_config_call_set_crtc_gamma_finish (
    GfDBusDisplayConfig *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gf_dbus_display_config_call_set_crtc_gamma_sync (
    GfDBusDisplayConfig *proxy,
    guint arg_serial,
    guint arg_crtc,
    GVariant *arg_red,
    GVariant *arg_green,
    GVariant *arg_blue,
    GCancellable *cancellable,
    GError **error);

void gf_dbus_display_config_call_get_current_state (
    GfDBusDisplayConfig *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gf_dbus_display_config_call_get_current_state_finish (
    GfDBusDisplayConfig *proxy,
    guint *out_serial,
    GVariant **out_monitors,
    GVariant **out_logical_monitors,
    GVariant **out_properties,
    GAsyncResult *res,
    GError **error);

gboolean gf_dbus_display_config_call_get_current_state_sync (
    GfDBusDisplayConfig *proxy,
    guint *out_serial,
    GVariant **out_monitors,
    GVariant **out_logical_monitors,
    GVariant **out_properties,
    GCancellable *cancellable,
    GError **error);

void gf_dbus_display_config_call_apply_monitors_config (
    GfDBusDisplayConfig *proxy,
    guint arg_serial,
    guint arg_method,
    GVariant *arg_logical_monitors,
    GVariant *arg_properties,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gf_dbus_display_config_call_apply_monitors_config_finish (
    GfDBusDisplayConfig *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gf_dbus_display_config_call_apply_monitors_config_sync (
    GfDBusDisplayConfig *proxy,
    guint arg_serial,
    guint arg_method,
    GVariant *arg_logical_monitors,
    GVariant *arg_properties,
    GCancellable *cancellable,
    GError **error);

void gf_dbus_display_config_call_set_output_ctm (
    GfDBusDisplayConfig *proxy,
    guint arg_serial,
    guint arg_output,
    GVariant *arg_ctm,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gf_dbus_display_config_call_set_output_ctm_finish (
    GfDBusDisplayConfig *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gf_dbus_display_config_call_set_output_ctm_sync (
    GfDBusDisplayConfig *proxy,
    guint arg_serial,
    guint arg_output,
    GVariant *arg_ctm,
    GCancellable *cancellable,
    GError **error);



/* D-Bus property accessors: */
gint gf_dbus_display_config_get_power_save_mode (GfDBusDisplayConfig *object);
void gf_dbus_display_config_set_power_save_mode (GfDBusDisplayConfig *object, gint value);

gboolean gf_dbus_display_config_get_panel_orientation_managed (GfDBusDisplayConfig *object);
void gf_dbus_display_config_set_panel_orientation_managed (GfDBusDisplayConfig *object, gboolean value);

gboolean gf_dbus_display_config_get_apply_monitors_config_allowed (GfDBusDisplayConfig *object);
void gf_dbus_display_config_set_apply_monitors_config_allowed (GfDBusDisplayConfig *object, gboolean value);

gboolean gf_dbus_display_config_get_night_light_supported (GfDBusDisplayConfig *object);
void gf_dbus_display_config_set_night_light_supported (GfDBusDisplayConfig *object, gboolean value);


/* ---- */

#define GF_DBUS_TYPE_DISPLAY_CONFIG_PROXY (gf_dbus_display_config_proxy_get_type ())
#define GF_DBUS_DISPLAY_CONFIG_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GF_DBUS_TYPE_DISPLAY_CONFIG_PROXY, GfDBusDisplayConfigProxy))
#define GF_DBUS_DISPLAY_CONFIG_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GF_DBUS_TYPE_DISPLAY_CONFIG_PROXY, GfDBusDisplayConfigProxyClass))
#define GF_DBUS_DISPLAY_CONFIG_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GF_DBUS_TYPE_DISPLAY_CONFIG_PROXY, GfDBusDisplayConfigProxyClass))
#define GF_DBUS_IS_DISPLAY_CONFIG_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GF_DBUS_TYPE_DISPLAY_CONFIG_PROXY))
#define GF_DBUS_IS_DISPLAY_CONFIG_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GF_DBUS_TYPE_DISPLAY_CONFIG_PROXY))

typedef struct _GfDBusDisplayConfigProxy GfDBusDisplayConfigProxy;
typedef struct _GfDBusDisplayConfigProxyClass GfDBusDisplayConfigProxyClass;
typedef struct _GfDBusDisplayConfigProxyPrivate GfDBusDisplayConfigProxyPrivate;

struct _GfDBusDisplayConfigProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  GfDBusDisplayConfigProxyPrivate *priv;
};

struct _GfDBusDisplayConfigProxyClass
{
  GDBusProxyClass parent_class;
};

GType gf_dbus_display_config_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GfDBusDisplayConfigProxy, g_object_unref)
#endif

void gf_dbus_display_config_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GfDBusDisplayConfig *gf_dbus_display_config_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
GfDBusDisplayConfig *gf_dbus_display_config_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void gf_dbus_display_config_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GfDBusDisplayConfig *gf_dbus_display_config_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
GfDBusDisplayConfig *gf_dbus_display_config_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define GF_DBUS_TYPE_DISPLAY_CONFIG_SKELETON (gf_dbus_display_config_skeleton_get_type ())
#define GF_DBUS_DISPLAY_CONFIG_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GF_DBUS_TYPE_DISPLAY_CONFIG_SKELETON, GfDBusDisplayConfigSkeleton))
#define GF_DBUS_DISPLAY_CONFIG_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GF_DBUS_TYPE_DISPLAY_CONFIG_SKELETON, GfDBusDisplayConfigSkeletonClass))
#define GF_DBUS_DISPLAY_CONFIG_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GF_DBUS_TYPE_DISPLAY_CONFIG_SKELETON, GfDBusDisplayConfigSkeletonClass))
#define GF_DBUS_IS_DISPLAY_CONFIG_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GF_DBUS_TYPE_DISPLAY_CONFIG_SKELETON))
#define GF_DBUS_IS_DISPLAY_CONFIG_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GF_DBUS_TYPE_DISPLAY_CONFIG_SKELETON))

typedef struct _GfDBusDisplayConfigSkeleton GfDBusDisplayConfigSkeleton;
typedef struct _GfDBusDisplayConfigSkeletonClass GfDBusDisplayConfigSkeletonClass;
typedef struct _GfDBusDisplayConfigSkeletonPrivate GfDBusDisplayConfigSkeletonPrivate;

struct _GfDBusDisplayConfigSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  GfDBusDisplayConfigSkeletonPrivate *priv;
};

struct _GfDBusDisplayConfigSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType gf_dbus_display_config_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GfDBusDisplayConfigSkeleton, g_object_unref)
#endif

GfDBusDisplayConfig *gf_dbus_display_config_skeleton_new (void);


G_END_DECLS

#endif /* __GF_DBUS_DISPLAY_CONFIG_H__ */

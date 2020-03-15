/*
 * Generated by gdbus-codegen 2.62.1 from org.xfce.Power.Manager.xml. DO NOT EDIT.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from.
 */

#ifndef __XFCE_POWER_MANAGER_DBUS_H__
#define __XFCE_POWER_MANAGER_DBUS_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.xfce.Power.Manager */

#define XFPM_TYPE_POWER_MANAGER (xfpm_power_manager_get_type ())
#define XFPM_POWER_MANAGER(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), XFPM_TYPE_POWER_MANAGER, XfpmPowerManager))
#define XFPM_IS_POWER_MANAGER(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), XFPM_TYPE_POWER_MANAGER))
#define XFPM_POWER_MANAGER_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), XFPM_TYPE_POWER_MANAGER, XfpmPowerManagerIface))

struct _XfpmPowerManager;
typedef struct _XfpmPowerManager XfpmPowerManager;
typedef struct _XfpmPowerManagerIface XfpmPowerManagerIface;

struct _XfpmPowerManagerIface
{
  GTypeInterface parent_iface;

  gboolean (*handle_get_config) (
    XfpmPowerManager *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_info) (
    XfpmPowerManager *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_quit) (
    XfpmPowerManager *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_restart) (
    XfpmPowerManager *object,
    GDBusMethodInvocation *invocation);

};

GType xfpm_power_manager_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *xfpm_power_manager_interface_info (void);
guint xfpm_power_manager_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void xfpm_power_manager_complete_quit (
    XfpmPowerManager *object,
    GDBusMethodInvocation *invocation);

void xfpm_power_manager_complete_restart (
    XfpmPowerManager *object,
    GDBusMethodInvocation *invocation);

void xfpm_power_manager_complete_get_config (
    XfpmPowerManager *object,
    GDBusMethodInvocation *invocation,
    GVariant *config);

void xfpm_power_manager_complete_get_info (
    XfpmPowerManager *object,
    GDBusMethodInvocation *invocation,
    const gchar *name,
    const gchar *version,
    const gchar *vendor);



/* D-Bus method calls: */
void xfpm_power_manager_call_quit (
    XfpmPowerManager *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean xfpm_power_manager_call_quit_finish (
    XfpmPowerManager *proxy,
    GAsyncResult *res,
    GError **error);

gboolean xfpm_power_manager_call_quit_sync (
    XfpmPowerManager *proxy,
    GCancellable *cancellable,
    GError **error);

void xfpm_power_manager_call_restart (
    XfpmPowerManager *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean xfpm_power_manager_call_restart_finish (
    XfpmPowerManager *proxy,
    GAsyncResult *res,
    GError **error);

gboolean xfpm_power_manager_call_restart_sync (
    XfpmPowerManager *proxy,
    GCancellable *cancellable,
    GError **error);

void xfpm_power_manager_call_get_config (
    XfpmPowerManager *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean xfpm_power_manager_call_get_config_finish (
    XfpmPowerManager *proxy,
    GVariant **out_config,
    GAsyncResult *res,
    GError **error);

gboolean xfpm_power_manager_call_get_config_sync (
    XfpmPowerManager *proxy,
    GVariant **out_config,
    GCancellable *cancellable,
    GError **error);

void xfpm_power_manager_call_get_info (
    XfpmPowerManager *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean xfpm_power_manager_call_get_info_finish (
    XfpmPowerManager *proxy,
    gchar **out_name,
    gchar **out_version,
    gchar **out_vendor,
    GAsyncResult *res,
    GError **error);

gboolean xfpm_power_manager_call_get_info_sync (
    XfpmPowerManager *proxy,
    gchar **out_name,
    gchar **out_version,
    gchar **out_vendor,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define XFPM_TYPE_POWER_MANAGER_PROXY (xfpm_power_manager_proxy_get_type ())
#define XFPM_POWER_MANAGER_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), XFPM_TYPE_POWER_MANAGER_PROXY, XfpmPowerManagerProxy))
#define XFPM_POWER_MANAGER_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), XFPM_TYPE_POWER_MANAGER_PROXY, XfpmPowerManagerProxyClass))
#define XFPM_POWER_MANAGER_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), XFPM_TYPE_POWER_MANAGER_PROXY, XfpmPowerManagerProxyClass))
#define XFPM_IS_POWER_MANAGER_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), XFPM_TYPE_POWER_MANAGER_PROXY))
#define XFPM_IS_POWER_MANAGER_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), XFPM_TYPE_POWER_MANAGER_PROXY))

typedef struct _XfpmPowerManagerProxy XfpmPowerManagerProxy;
typedef struct _XfpmPowerManagerProxyClass XfpmPowerManagerProxyClass;
typedef struct _XfpmPowerManagerProxyPrivate XfpmPowerManagerProxyPrivate;

struct _XfpmPowerManagerProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  XfpmPowerManagerProxyPrivate *priv;
};

struct _XfpmPowerManagerProxyClass
{
  GDBusProxyClass parent_class;
};

GType xfpm_power_manager_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (XfpmPowerManagerProxy, g_object_unref)
#endif

void xfpm_power_manager_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
XfpmPowerManager *xfpm_power_manager_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
XfpmPowerManager *xfpm_power_manager_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void xfpm_power_manager_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
XfpmPowerManager *xfpm_power_manager_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
XfpmPowerManager *xfpm_power_manager_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define XFPM_TYPE_POWER_MANAGER_SKELETON (xfpm_power_manager_skeleton_get_type ())
#define XFPM_POWER_MANAGER_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), XFPM_TYPE_POWER_MANAGER_SKELETON, XfpmPowerManagerSkeleton))
#define XFPM_POWER_MANAGER_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), XFPM_TYPE_POWER_MANAGER_SKELETON, XfpmPowerManagerSkeletonClass))
#define XFPM_POWER_MANAGER_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), XFPM_TYPE_POWER_MANAGER_SKELETON, XfpmPowerManagerSkeletonClass))
#define XFPM_IS_POWER_MANAGER_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), XFPM_TYPE_POWER_MANAGER_SKELETON))
#define XFPM_IS_POWER_MANAGER_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), XFPM_TYPE_POWER_MANAGER_SKELETON))

typedef struct _XfpmPowerManagerSkeleton XfpmPowerManagerSkeleton;
typedef struct _XfpmPowerManagerSkeletonClass XfpmPowerManagerSkeletonClass;
typedef struct _XfpmPowerManagerSkeletonPrivate XfpmPowerManagerSkeletonPrivate;

struct _XfpmPowerManagerSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  XfpmPowerManagerSkeletonPrivate *priv;
};

struct _XfpmPowerManagerSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType xfpm_power_manager_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (XfpmPowerManagerSkeleton, g_object_unref)
#endif

XfpmPowerManager *xfpm_power_manager_skeleton_new (void);


G_END_DECLS

#endif /* __XFCE_POWER_MANAGER_DBUS_H__ */

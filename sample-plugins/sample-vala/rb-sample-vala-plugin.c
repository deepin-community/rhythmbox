/* rb-sample-vala-plugin.c generated by valac 0.46.5, the Vala compiler
 * generated from rb-sample-vala-plugin.vala, do not modify */

#include <libpeas/peas.h>
#include <glib-object.h>
#include <stdio.h>

#define TYPE_SAMPLE_VALA_PLUGIN (sample_vala_plugin_get_type ())
#define SAMPLE_VALA_PLUGIN(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SAMPLE_VALA_PLUGIN, SampleValaPlugin))
#define SAMPLE_VALA_PLUGIN_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_SAMPLE_VALA_PLUGIN, SampleValaPluginClass))
#define IS_SAMPLE_VALA_PLUGIN(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SAMPLE_VALA_PLUGIN))
#define IS_SAMPLE_VALA_PLUGIN_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_SAMPLE_VALA_PLUGIN))
#define SAMPLE_VALA_PLUGIN_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_SAMPLE_VALA_PLUGIN, SampleValaPluginClass))

typedef struct _SampleValaPlugin SampleValaPlugin;
typedef struct _SampleValaPluginClass SampleValaPluginClass;
typedef struct _SampleValaPluginPrivate SampleValaPluginPrivate;
enum  {
	SAMPLE_VALA_PLUGIN_0_PROPERTY,
	SAMPLE_VALA_PLUGIN_OBJECT_PROPERTY,
	SAMPLE_VALA_PLUGIN_NUM_PROPERTIES
};
static GParamSpec* sample_vala_plugin_properties[SAMPLE_VALA_PLUGIN_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _SampleValaPlugin {
	PeasExtensionBase parent_instance;
	SampleValaPluginPrivate * priv;
};

struct _SampleValaPluginClass {
	PeasExtensionBaseClass parent_class;
};

struct _SampleValaPluginPrivate {
	GObject* _object;
};

static gint SampleValaPlugin_private_offset;
static gpointer sample_vala_plugin_parent_class = NULL;
static PeasActivatableInterface * sample_vala_plugin_peas_activatable_parent_iface = NULL;
static GType sample_vala_plugin_type_id = 0;

GType sample_vala_plugin_register_type (GTypeModule * module);
GType sample_vala_plugin_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (SampleValaPlugin, g_object_unref)
static void sample_vala_plugin_real_activate (PeasActivatable* base);
static void sample_vala_plugin_real_deactivate (PeasActivatable* base);
static void sample_vala_plugin_real_update_state (PeasActivatable* base);
SampleValaPlugin* sample_vala_plugin_new (void);
SampleValaPlugin* sample_vala_plugin_construct (GType object_type);
static void sample_vala_plugin_finalize (GObject * obj);
static void _vala_sample_vala_plugin_get_property (GObject * object,
                                            guint property_id,
                                            GValue * value,
                                            GParamSpec * pspec);
static void _vala_sample_vala_plugin_set_property (GObject * object,
                                            guint property_id,
                                            const GValue * value,
                                            GParamSpec * pspec);
void peas_register_types (GTypeModule* module);

static inline gpointer
sample_vala_plugin_get_instance_private (SampleValaPlugin* self)
{
	return G_STRUCT_MEMBER_P (self, SampleValaPlugin_private_offset);
}

static void
sample_vala_plugin_real_activate (PeasActivatable* base)
{
	SampleValaPlugin * self;
	FILE* _tmp0_;
	self = (SampleValaPlugin*) base;
	_tmp0_ = stdout;
	fprintf (_tmp0_, "Hello world\n");
}

static void
sample_vala_plugin_real_deactivate (PeasActivatable* base)
{
	SampleValaPlugin * self;
	FILE* _tmp0_;
	self = (SampleValaPlugin*) base;
	_tmp0_ = stdout;
	fprintf (_tmp0_, "Goodbye world\n");
}

static void
sample_vala_plugin_real_update_state (PeasActivatable* base)
{
	SampleValaPlugin * self;
	FILE* _tmp0_;
	self = (SampleValaPlugin*) base;
	_tmp0_ = stdout;
	fprintf (_tmp0_, "Update world\n");
}

SampleValaPlugin*
sample_vala_plugin_construct (GType object_type)
{
	SampleValaPlugin * self = NULL;
	self = (SampleValaPlugin*) g_object_new (object_type, NULL);
	return self;
}

SampleValaPlugin*
sample_vala_plugin_new (void)
{
	return sample_vala_plugin_construct (TYPE_SAMPLE_VALA_PLUGIN);
}

static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}

static GObject*
sample_vala_plugin_real_get_object (PeasActivatable* base)
{
	GObject* result;
	SampleValaPlugin* self;
	GObject* _tmp0_;
	GObject* _tmp1_;
	self = (SampleValaPlugin*) base;
	_tmp0_ = self->priv->_object;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	result = _tmp1_;
	return result;
}

static void
sample_vala_plugin_real_set_object (PeasActivatable* base,
                                    GObject* value)
{
	SampleValaPlugin* self;
	self = (SampleValaPlugin*) base;
	if (sample_vala_plugin_real_get_object (base) != value) {
		GObject* _tmp0_;
		_tmp0_ = _g_object_ref0 (value);
		_g_object_unref0 (self->priv->_object);
		self->priv->_object = _tmp0_;
		g_object_notify_by_pspec ((GObject *) self, sample_vala_plugin_properties[SAMPLE_VALA_PLUGIN_OBJECT_PROPERTY]);
	}
}

static void
sample_vala_plugin_class_init (SampleValaPluginClass * klass,
                               gpointer klass_data)
{
	sample_vala_plugin_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &SampleValaPlugin_private_offset);
	G_OBJECT_CLASS (klass)->get_property = _vala_sample_vala_plugin_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_sample_vala_plugin_set_property;
	G_OBJECT_CLASS (klass)->finalize = sample_vala_plugin_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), SAMPLE_VALA_PLUGIN_OBJECT_PROPERTY, sample_vala_plugin_properties[SAMPLE_VALA_PLUGIN_OBJECT_PROPERTY] = g_param_spec_object ("object", "object", "object", G_TYPE_OBJECT, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
}

static void
sample_vala_plugin_peas_activatable_interface_init (PeasActivatableInterface * iface,
                                                    gpointer iface_data)
{
	sample_vala_plugin_peas_activatable_parent_iface = g_type_interface_peek_parent (iface);
	iface->activate = (void (*) (PeasActivatable*)) sample_vala_plugin_real_activate;
	iface->deactivate = (void (*) (PeasActivatable*)) sample_vala_plugin_real_deactivate;
	iface->update_state = (void (*) (PeasActivatable*)) sample_vala_plugin_real_update_state;
}

static void
sample_vala_plugin_instance_init (SampleValaPlugin * self,
                                  gpointer klass)
{
	self->priv = sample_vala_plugin_get_instance_private (self);
}

static void
sample_vala_plugin_finalize (GObject * obj)
{
	SampleValaPlugin * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_SAMPLE_VALA_PLUGIN, SampleValaPlugin);
	_g_object_unref0 (self->priv->_object);
	G_OBJECT_CLASS (sample_vala_plugin_parent_class)->finalize (obj);
}

GType
sample_vala_plugin_get_type (void)
{
	return sample_vala_plugin_type_id;
}

GType
sample_vala_plugin_register_type (GTypeModule * module)
{
	static const GTypeInfo g_define_type_info = { sizeof (SampleValaPluginClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) sample_vala_plugin_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (SampleValaPlugin), 0, (GInstanceInitFunc) sample_vala_plugin_instance_init, NULL };
	static const GInterfaceInfo peas_activatable_info = { (GInterfaceInitFunc) sample_vala_plugin_peas_activatable_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	sample_vala_plugin_type_id = g_type_module_register_type (module, peas_extension_base_get_type (), "SampleValaPlugin", &g_define_type_info, 0);
	g_type_module_add_interface (module, sample_vala_plugin_type_id, peas_activatable_get_type (), &peas_activatable_info);
	SampleValaPlugin_private_offset = sizeof (SampleValaPluginPrivate);
	return sample_vala_plugin_type_id;
}

static void
_vala_sample_vala_plugin_get_property (GObject * object,
                                       guint property_id,
                                       GValue * value,
                                       GParamSpec * pspec)
{
	SampleValaPlugin * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_SAMPLE_VALA_PLUGIN, SampleValaPlugin);
	switch (property_id) {
		case SAMPLE_VALA_PLUGIN_OBJECT_PROPERTY:
		g_value_take_object (value, sample_vala_plugin_real_get_object ((PeasActivatable*) self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_vala_sample_vala_plugin_set_property (GObject * object,
                                       guint property_id,
                                       const GValue * value,
                                       GParamSpec * pspec)
{
	SampleValaPlugin * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_SAMPLE_VALA_PLUGIN, SampleValaPlugin);
	switch (property_id) {
		case SAMPLE_VALA_PLUGIN_OBJECT_PROPERTY:
		sample_vala_plugin_real_set_object ((PeasActivatable*) self, g_value_get_object (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

void
peas_register_types (GTypeModule* module)
{
	PeasObjectModule* objmodule = NULL;
	PeasObjectModule* _tmp0_;
	FILE* _tmp1_;
	g_return_if_fail (module != NULL);
	sample_vala_plugin_register_type (module);
	_tmp0_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (module, peas_object_module_get_type ()) ? ((PeasObjectModule*) module) : NULL);
	objmodule = _tmp0_;
	_tmp1_ = stdout;
	fprintf (_tmp1_, "Registering plugin %s\n", "SampleValaPlugin");
	peas_object_module_register_extension_type (objmodule, peas_activatable_get_type (), TYPE_SAMPLE_VALA_PLUGIN);
	_g_object_unref0 (objmodule);
}

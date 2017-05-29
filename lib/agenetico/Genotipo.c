/* Genotipo.c generated by valac 0.34.8, the Vala compiler
 * generated from Genotipo.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gobject/gvaluecollector.h>


#define CUBO_GENETICO_AGENETICO_TYPE_GENOTIPO (cubo_genetico_agenetico_genotipo_get_type ())
#define CUBO_GENETICO_AGENETICO_GENOTIPO(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CUBO_GENETICO_AGENETICO_TYPE_GENOTIPO, CuboGeneticoAGeneticoGenotipo))
#define CUBO_GENETICO_AGENETICO_GENOTIPO_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CUBO_GENETICO_AGENETICO_TYPE_GENOTIPO, CuboGeneticoAGeneticoGenotipoClass))
#define CUBO_GENETICO_AGENETICO_IS_GENOTIPO(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CUBO_GENETICO_AGENETICO_TYPE_GENOTIPO))
#define CUBO_GENETICO_AGENETICO_IS_GENOTIPO_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CUBO_GENETICO_AGENETICO_TYPE_GENOTIPO))
#define CUBO_GENETICO_AGENETICO_GENOTIPO_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CUBO_GENETICO_AGENETICO_TYPE_GENOTIPO, CuboGeneticoAGeneticoGenotipoClass))

typedef struct _CuboGeneticoAGeneticoGenotipo CuboGeneticoAGeneticoGenotipo;
typedef struct _CuboGeneticoAGeneticoGenotipoClass CuboGeneticoAGeneticoGenotipoClass;
typedef struct _CuboGeneticoAGeneticoGenotipoPrivate CuboGeneticoAGeneticoGenotipoPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _CuboGeneticoAGeneticoParamSpecGenotipo CuboGeneticoAGeneticoParamSpecGenotipo;

struct _CuboGeneticoAGeneticoGenotipo {
	GTypeInstance parent_instance;
	volatile int ref_count;
	CuboGeneticoAGeneticoGenotipoPrivate * priv;
};

struct _CuboGeneticoAGeneticoGenotipoClass {
	GTypeClass parent_class;
	void (*finalize) (CuboGeneticoAGeneticoGenotipo *self);
};

struct _CuboGeneticoAGeneticoGenotipoPrivate {
	gint* geno;
	gint geno_length1;
	gint _geno_size_;
};

struct _CuboGeneticoAGeneticoParamSpecGenotipo {
	GParamSpec parent_instance;
};


static gpointer cubo_genetico_agenetico_genotipo_parent_class = NULL;

gpointer cubo_genetico_agenetico_genotipo_ref (gpointer instance);
void cubo_genetico_agenetico_genotipo_unref (gpointer instance);
GParamSpec* cubo_genetico_agenetico_param_spec_genotipo (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void cubo_genetico_agenetico_value_set_genotipo (GValue* value, gpointer v_object);
void cubo_genetico_agenetico_value_take_genotipo (GValue* value, gpointer v_object);
gpointer cubo_genetico_agenetico_value_get_genotipo (const GValue* value);
GType cubo_genetico_agenetico_genotipo_get_type (void) G_GNUC_CONST;
#define CUBO_GENETICO_AGENETICO_GENOTIPO_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), CUBO_GENETICO_AGENETICO_TYPE_GENOTIPO, CuboGeneticoAGeneticoGenotipoPrivate))
enum  {
	CUBO_GENETICO_AGENETICO_GENOTIPO_DUMMY_PROPERTY
};
CuboGeneticoAGeneticoGenotipo* cubo_genetico_agenetico_genotipo_new (gint n);
CuboGeneticoAGeneticoGenotipo* cubo_genetico_agenetico_genotipo_construct (GType object_type, gint n);
gchar* cubo_genetico_agenetico_genotipo_to_string (CuboGeneticoAGeneticoGenotipo* self);
gint* cubo_genetico_agenetico_genotipo_get_genotipo (CuboGeneticoAGeneticoGenotipo* self, int* result_length1);
static void cubo_genetico_agenetico_genotipo_finalize (CuboGeneticoAGeneticoGenotipo* obj);


CuboGeneticoAGeneticoGenotipo* cubo_genetico_agenetico_genotipo_construct (GType object_type, gint n) {
	CuboGeneticoAGeneticoGenotipo* self = NULL;
	gint _tmp0_ = 0;
	gint* _tmp1_ = NULL;
	self = (CuboGeneticoAGeneticoGenotipo*) g_type_create_instance (object_type);
	_tmp0_ = n;
	_tmp1_ = g_new0 (gint, _tmp0_);
	self->priv->geno = (g_free (self->priv->geno), NULL);
	self->priv->geno = _tmp1_;
	self->priv->geno_length1 = _tmp0_;
	self->priv->_geno_size_ = self->priv->geno_length1;
	return self;
}


CuboGeneticoAGeneticoGenotipo* cubo_genetico_agenetico_genotipo_new (gint n) {
	return cubo_genetico_agenetico_genotipo_construct (CUBO_GENETICO_AGENETICO_TYPE_GENOTIPO, n);
}


gchar* cubo_genetico_agenetico_genotipo_to_string (CuboGeneticoAGeneticoGenotipo* self) {
	gchar* result = NULL;
	gchar* s = NULL;
	gchar* _tmp0_ = NULL;
	gint* _tmp1_ = NULL;
	gint _tmp1__length1 = 0;
	const gchar* _tmp9_ = NULL;
	gchar* _tmp10_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = g_strdup ("Genotipo: ");
	s = _tmp0_;
	_tmp1_ = self->priv->geno;
	_tmp1__length1 = self->priv->geno_length1;
	{
		gint* i_collection = NULL;
		gint i_collection_length1 = 0;
		gint _i_collection_size_ = 0;
		gint i_it = 0;
		i_collection = _tmp1_;
		i_collection_length1 = _tmp1__length1;
		for (i_it = 0; i_it < _tmp1__length1; i_it = i_it + 1) {
			gint i = 0;
			i = i_collection[i_it];
			{
				const gchar* _tmp2_ = NULL;
				gint _tmp3_ = 0;
				gchar* _tmp4_ = NULL;
				gchar* _tmp5_ = NULL;
				gchar* _tmp6_ = NULL;
				gchar* _tmp7_ = NULL;
				gchar* _tmp8_ = NULL;
				_tmp2_ = s;
				_tmp3_ = i;
				_tmp4_ = g_strdup_printf ("%i", _tmp3_);
				_tmp5_ = _tmp4_;
				_tmp6_ = g_strconcat (_tmp5_, ",", NULL);
				_tmp7_ = _tmp6_;
				_tmp8_ = g_strconcat (_tmp2_, _tmp7_, NULL);
				_g_free0 (s);
				s = _tmp8_;
				_g_free0 (_tmp7_);
				_g_free0 (_tmp5_);
			}
		}
	}
	_tmp9_ = s;
	_tmp10_ = g_strconcat (_tmp9_, "\n", NULL);
	_g_free0 (s);
	s = _tmp10_;
	result = s;
	return result;
}


gint* cubo_genetico_agenetico_genotipo_get_genotipo (CuboGeneticoAGeneticoGenotipo* self, int* result_length1) {
	gint* result;
	gint* _tmp0_ = NULL;
	gint _tmp0__length1 = 0;
	gint* _tmp1_ = NULL;
	gint _tmp1__length1 = 0;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->geno;
	_tmp0__length1 = self->priv->geno_length1;
	_tmp1_ = _tmp0_;
	_tmp1__length1 = _tmp0__length1;
	if (result_length1) {
		*result_length1 = _tmp1__length1;
	}
	result = _tmp1_;
	return result;
}


static void cubo_genetico_agenetico_value_genotipo_init (GValue* value) {
	value->data[0].v_pointer = NULL;
}


static void cubo_genetico_agenetico_value_genotipo_free_value (GValue* value) {
	if (value->data[0].v_pointer) {
		cubo_genetico_agenetico_genotipo_unref (value->data[0].v_pointer);
	}
}


static void cubo_genetico_agenetico_value_genotipo_copy_value (const GValue* src_value, GValue* dest_value) {
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = cubo_genetico_agenetico_genotipo_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}


static gpointer cubo_genetico_agenetico_value_genotipo_peek_pointer (const GValue* value) {
	return value->data[0].v_pointer;
}


static gchar* cubo_genetico_agenetico_value_genotipo_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	if (collect_values[0].v_pointer) {
		CuboGeneticoAGeneticoGenotipo* object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = cubo_genetico_agenetico_genotipo_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}


static gchar* cubo_genetico_agenetico_value_genotipo_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	CuboGeneticoAGeneticoGenotipo** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = cubo_genetico_agenetico_genotipo_ref (value->data[0].v_pointer);
	}
	return NULL;
}


GParamSpec* cubo_genetico_agenetico_param_spec_genotipo (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	CuboGeneticoAGeneticoParamSpecGenotipo* spec;
	g_return_val_if_fail (g_type_is_a (object_type, CUBO_GENETICO_AGENETICO_TYPE_GENOTIPO), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}


gpointer cubo_genetico_agenetico_value_get_genotipo (const GValue* value) {
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, CUBO_GENETICO_AGENETICO_TYPE_GENOTIPO), NULL);
	return value->data[0].v_pointer;
}


void cubo_genetico_agenetico_value_set_genotipo (GValue* value, gpointer v_object) {
	CuboGeneticoAGeneticoGenotipo* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, CUBO_GENETICO_AGENETICO_TYPE_GENOTIPO));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, CUBO_GENETICO_AGENETICO_TYPE_GENOTIPO));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		cubo_genetico_agenetico_genotipo_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		cubo_genetico_agenetico_genotipo_unref (old);
	}
}


void cubo_genetico_agenetico_value_take_genotipo (GValue* value, gpointer v_object) {
	CuboGeneticoAGeneticoGenotipo* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, CUBO_GENETICO_AGENETICO_TYPE_GENOTIPO));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, CUBO_GENETICO_AGENETICO_TYPE_GENOTIPO));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		cubo_genetico_agenetico_genotipo_unref (old);
	}
}


static void cubo_genetico_agenetico_genotipo_class_init (CuboGeneticoAGeneticoGenotipoClass * klass) {
	cubo_genetico_agenetico_genotipo_parent_class = g_type_class_peek_parent (klass);
	((CuboGeneticoAGeneticoGenotipoClass *) klass)->finalize = cubo_genetico_agenetico_genotipo_finalize;
	g_type_class_add_private (klass, sizeof (CuboGeneticoAGeneticoGenotipoPrivate));
}


static void cubo_genetico_agenetico_genotipo_instance_init (CuboGeneticoAGeneticoGenotipo * self) {
	self->priv = CUBO_GENETICO_AGENETICO_GENOTIPO_GET_PRIVATE (self);
	self->ref_count = 1;
}


static void cubo_genetico_agenetico_genotipo_finalize (CuboGeneticoAGeneticoGenotipo* obj) {
	CuboGeneticoAGeneticoGenotipo * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, CUBO_GENETICO_AGENETICO_TYPE_GENOTIPO, CuboGeneticoAGeneticoGenotipo);
	g_signal_handlers_destroy (self);
	self->priv->geno = (g_free (self->priv->geno), NULL);
}


GType cubo_genetico_agenetico_genotipo_get_type (void) {
	static volatile gsize cubo_genetico_agenetico_genotipo_type_id__volatile = 0;
	if (g_once_init_enter (&cubo_genetico_agenetico_genotipo_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { cubo_genetico_agenetico_value_genotipo_init, cubo_genetico_agenetico_value_genotipo_free_value, cubo_genetico_agenetico_value_genotipo_copy_value, cubo_genetico_agenetico_value_genotipo_peek_pointer, "p", cubo_genetico_agenetico_value_genotipo_collect_value, "p", cubo_genetico_agenetico_value_genotipo_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (CuboGeneticoAGeneticoGenotipoClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) cubo_genetico_agenetico_genotipo_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (CuboGeneticoAGeneticoGenotipo), 0, (GInstanceInitFunc) cubo_genetico_agenetico_genotipo_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType cubo_genetico_agenetico_genotipo_type_id;
		cubo_genetico_agenetico_genotipo_type_id = g_type_register_fundamental (g_type_fundamental_next (), "CuboGeneticoAGeneticoGenotipo", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&cubo_genetico_agenetico_genotipo_type_id__volatile, cubo_genetico_agenetico_genotipo_type_id);
	}
	return cubo_genetico_agenetico_genotipo_type_id__volatile;
}


gpointer cubo_genetico_agenetico_genotipo_ref (gpointer instance) {
	CuboGeneticoAGeneticoGenotipo* self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}


void cubo_genetico_agenetico_genotipo_unref (gpointer instance) {
	CuboGeneticoAGeneticoGenotipo* self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		CUBO_GENETICO_AGENETICO_GENOTIPO_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}



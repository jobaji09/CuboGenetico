/* FFitness.c generated by valac 0.34.8, the Vala compiler
 * generated from FFitness.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include "agenetico.h"
#include <float.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


#define CUBO_GENETICO_TYPE_FFITNESS (cubo_genetico_ffitness_get_type ())
#define CUBO_GENETICO_FFITNESS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CUBO_GENETICO_TYPE_FFITNESS, CuboGeneticoFFitness))
#define CUBO_GENETICO_FFITNESS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CUBO_GENETICO_TYPE_FFITNESS, CuboGeneticoFFitnessClass))
#define CUBO_GENETICO_IS_FFITNESS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CUBO_GENETICO_TYPE_FFITNESS))
#define CUBO_GENETICO_IS_FFITNESS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CUBO_GENETICO_TYPE_FFITNESS))
#define CUBO_GENETICO_FFITNESS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CUBO_GENETICO_TYPE_FFITNESS, CuboGeneticoFFitnessClass))

typedef struct _CuboGeneticoFFitness CuboGeneticoFFitness;
typedef struct _CuboGeneticoFFitnessClass CuboGeneticoFFitnessClass;
typedef struct _CuboGeneticoFFitnessPrivate CuboGeneticoFFitnessPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _CuboGeneticoFFitness {
	GObject parent_instance;
	CuboGeneticoFFitnessPrivate * priv;
};

struct _CuboGeneticoFFitnessClass {
	GObjectClass parent_class;
};

struct _CuboGeneticoFFitnessPrivate {
	CuboGeneticoAGeneticoCubo3x3* cubo;
};


static gpointer cubo_genetico_ffitness_parent_class = NULL;

GType cubo_genetico_ffitness_get_type (void) G_GNUC_CONST;
#define CUBO_GENETICO_FFITNESS_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), CUBO_GENETICO_TYPE_FFITNESS, CuboGeneticoFFitnessPrivate))
enum  {
	CUBO_GENETICO_FFITNESS_DUMMY_PROPERTY
};
CuboGeneticoFFitness* cubo_genetico_ffitness_new (CuboGeneticoAGeneticoCubo3x3* cubo);
CuboGeneticoFFitness* cubo_genetico_ffitness_construct (GType object_type, CuboGeneticoAGeneticoCubo3x3* cubo);
gdouble cubo_genetico_ffitness_evaluacion (CuboGeneticoFFitness* self, CuboGeneticoAGeneticoFenotipo* feno);
gdouble cubo_genetico_ffitness_caraFitness (CuboGeneticoFFitness* self, gint centro, gint x, gint y);
static void cubo_genetico_ffitness_finalize (GObject* obj);


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


CuboGeneticoFFitness* cubo_genetico_ffitness_construct (GType object_type, CuboGeneticoAGeneticoCubo3x3* cubo) {
	CuboGeneticoFFitness * self = NULL;
	CuboGeneticoAGeneticoCubo3x3* _tmp0_ = NULL;
	CuboGeneticoAGeneticoCubo3x3* _tmp1_ = NULL;
	g_return_val_if_fail (cubo != NULL, NULL);
	self = (CuboGeneticoFFitness*) g_object_new (object_type, NULL);
	_tmp0_ = cubo;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->priv->cubo);
	self->priv->cubo = _tmp1_;
	return self;
}


CuboGeneticoFFitness* cubo_genetico_ffitness_new (CuboGeneticoAGeneticoCubo3x3* cubo) {
	return cubo_genetico_ffitness_construct (CUBO_GENETICO_TYPE_FFITNESS, cubo);
}


gdouble cubo_genetico_ffitness_evaluacion (CuboGeneticoFFitness* self, CuboGeneticoAGeneticoFenotipo* feno) {
	gdouble result = 0.0;
	CuboGeneticoAGeneticoCubo3x3* _tmp0_ = NULL;
	CuboGeneticoAGeneticoFenotipo* _tmp1_ = NULL;
	gchar** _tmp2_ = NULL;
	gint _tmp2__length1 = 0;
	gchar** _tmp3_ = NULL;
	gint _tmp3__length1 = 0;
	gdouble fitness = 0.0;
	CuboGeneticoAGeneticoCubo3x3* _tmp38_ = NULL;
	gdouble _tmp39_ = 0.0;
	g_return_val_if_fail (self != NULL, 0.0);
	g_return_val_if_fail (feno != NULL, 0.0);
	_tmp0_ = self->priv->cubo;
	_tmp1_ = feno;
	_tmp2_ = cubo_genetico_agenetico_fenotipo_get_fenotipo (_tmp1_, &_tmp2__length1);
	_tmp3_ = _tmp2_;
	_tmp3__length1 = _tmp2__length1;
	cubo_genetico_agenetico_cubo3x3_giraCaras (_tmp0_, _tmp3_, _tmp3__length1);
	fitness = 0.0;
	{
		gint i = 0;
		i = 0;
		{
			gboolean _tmp4_ = FALSE;
			_tmp4_ = TRUE;
			while (TRUE) {
				gint _tmp6_ = 0;
				gint _tmp7_ = 0;
				if (!_tmp4_) {
					gint _tmp5_ = 0;
					_tmp5_ = i;
					i = _tmp5_ + 1;
				}
				_tmp4_ = FALSE;
				_tmp6_ = i;
				if (!(_tmp6_ < 6)) {
					break;
				}
				_tmp7_ = i;
				switch (_tmp7_) {
					case 0:
					{
						gdouble _tmp8_ = 0.0;
						gint _tmp9_ = 0;
						gint _tmp10_ = 0;
						gint _tmp11_ = 0;
						gdouble _tmp12_ = 0.0;
						_tmp8_ = fitness;
						_tmp9_ = i;
						_tmp10_ = i;
						_tmp11_ = i;
						_tmp12_ = cubo_genetico_ffitness_caraFitness (self, _tmp9_, _tmp10_ + 1, _tmp11_ + 1);
						fitness = _tmp8_ + _tmp12_;
						break;
					}
					case 1:
					{
						gdouble _tmp13_ = 0.0;
						gint _tmp14_ = 0;
						gint _tmp15_ = 0;
						gint _tmp16_ = 0;
						gdouble _tmp17_ = 0.0;
						_tmp13_ = fitness;
						_tmp14_ = i;
						_tmp15_ = i;
						_tmp16_ = i;
						_tmp17_ = cubo_genetico_ffitness_caraFitness (self, _tmp14_, _tmp15_, _tmp16_ + 3);
						fitness = _tmp13_ + _tmp17_;
						break;
					}
					case 2:
					{
						gdouble _tmp18_ = 0.0;
						gint _tmp19_ = 0;
						gint _tmp20_ = 0;
						gint _tmp21_ = 0;
						gdouble _tmp22_ = 0.0;
						_tmp18_ = fitness;
						_tmp19_ = i;
						_tmp20_ = i;
						_tmp21_ = i;
						_tmp22_ = cubo_genetico_ffitness_caraFitness (self, _tmp19_, _tmp20_ - 1, _tmp21_ + 5);
						fitness = _tmp18_ + _tmp22_;
						break;
					}
					case 3:
					{
						gdouble _tmp23_ = 0.0;
						gint _tmp24_ = 0;
						gint _tmp25_ = 0;
						gint _tmp26_ = 0;
						gdouble _tmp27_ = 0.0;
						_tmp23_ = fitness;
						_tmp24_ = i;
						_tmp25_ = i;
						_tmp26_ = i;
						_tmp27_ = cubo_genetico_ffitness_caraFitness (self, _tmp24_, _tmp25_ + 1, _tmp26_ - 2);
						fitness = _tmp23_ + _tmp27_;
						break;
					}
					case 4:
					{
						gdouble _tmp28_ = 0.0;
						gint _tmp29_ = 0;
						gint _tmp30_ = 0;
						gint _tmp31_ = 0;
						gdouble _tmp32_ = 0.0;
						_tmp28_ = fitness;
						_tmp29_ = i;
						_tmp30_ = i;
						_tmp31_ = i;
						_tmp32_ = cubo_genetico_ffitness_caraFitness (self, _tmp29_, _tmp30_, _tmp31_);
						fitness = _tmp28_ + _tmp32_;
						break;
					}
					case 5:
					{
						gdouble _tmp33_ = 0.0;
						gint _tmp34_ = 0;
						gint _tmp35_ = 0;
						gint _tmp36_ = 0;
						gdouble _tmp37_ = 0.0;
						_tmp33_ = fitness;
						_tmp34_ = i;
						_tmp35_ = i;
						_tmp36_ = i;
						_tmp37_ = cubo_genetico_ffitness_caraFitness (self, _tmp34_, _tmp35_ - 1, _tmp36_ + 2);
						fitness = _tmp33_ + _tmp37_;
						break;
					}
					default:
					break;
				}
			}
		}
	}
	_tmp38_ = self->priv->cubo;
	cubo_genetico_agenetico_cubo3x3_reset (_tmp38_);
	_tmp39_ = fitness;
	result = _tmp39_ / 6;
	return result;
}


gdouble cubo_genetico_ffitness_caraFitness (CuboGeneticoFFitness* self, gint centro, gint x, gint y) {
	gdouble result = 0.0;
	gdouble f = 0.0;
	gint* c = NULL;
	CuboGeneticoAGeneticoCubo3x3* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	gint _tmp2_ = 0;
	gint* _tmp3_ = NULL;
	gint c_length1 = 0;
	gint c_length2 = 0;
	gint _tmp4_ = 0;
	gint* _tmp5_ = NULL;
	gint _tmp5__length1 = 0;
	gint _tmp5__length2 = 0;
	gint _tmp6_ = 0;
	gint _tmp7_ = 0;
	gint _tmp8_ = 0;
	gint _tmp10_ = 0;
	gint* _tmp11_ = NULL;
	gint _tmp11__length1 = 0;
	gint _tmp11__length2 = 0;
	gint _tmp12_ = 0;
	gint _tmp13_ = 0;
	gint _tmp14_ = 0;
	gint _tmp16_ = 0;
	gint* _tmp17_ = NULL;
	gint _tmp17__length1 = 0;
	gint _tmp17__length2 = 0;
	gint _tmp18_ = 0;
	gint _tmp19_ = 0;
	gint _tmp20_ = 0;
	gint _tmp22_ = 0;
	gint* _tmp23_ = NULL;
	gint _tmp23__length1 = 0;
	gint _tmp23__length2 = 0;
	gint _tmp24_ = 0;
	gint _tmp25_ = 0;
	gint _tmp26_ = 0;
	gint _tmp28_ = 0;
	gint* _tmp29_ = NULL;
	gint _tmp29__length1 = 0;
	gint _tmp29__length2 = 0;
	gint _tmp30_ = 0;
	gint _tmp31_ = 0;
	gint _tmp32_ = 0;
	gint _tmp34_ = 0;
	gint* _tmp35_ = NULL;
	gint _tmp35__length1 = 0;
	gint _tmp35__length2 = 0;
	gint _tmp36_ = 0;
	gint _tmp37_ = 0;
	gint _tmp38_ = 0;
	gint _tmp40_ = 0;
	gint* _tmp41_ = NULL;
	gint _tmp41__length1 = 0;
	gint _tmp41__length2 = 0;
	gint _tmp42_ = 0;
	gint _tmp43_ = 0;
	gint _tmp44_ = 0;
	gint _tmp46_ = 0;
	gint* _tmp47_ = NULL;
	gint _tmp47__length1 = 0;
	gint _tmp47__length2 = 0;
	gint _tmp48_ = 0;
	gint _tmp49_ = 0;
	gint _tmp50_ = 0;
	gdouble _tmp52_ = 0.0;
	g_return_val_if_fail (self != NULL, 0.0);
	f = 0.0;
	_tmp0_ = self->priv->cubo;
	_tmp3_ = cubo_genetico_agenetico_cubo3x3_getActual (_tmp0_, &_tmp1_, &_tmp2_);
	c = _tmp3_;
	c_length1 = _tmp1_;
	c_length2 = _tmp2_;
	_tmp4_ = centro;
	_tmp5_ = c;
	_tmp5__length1 = c_length1;
	_tmp5__length2 = c_length2;
	_tmp6_ = x;
	_tmp7_ = y;
	_tmp8_ = _tmp5_[((_tmp6_ - 1) * _tmp5__length2) + (_tmp7_ - 1)];
	if (_tmp4_ == _tmp8_) {
		gdouble _tmp9_ = 0.0;
		_tmp9_ = f;
		f = _tmp9_ + 1;
	}
	_tmp10_ = centro;
	_tmp11_ = c;
	_tmp11__length1 = c_length1;
	_tmp11__length2 = c_length2;
	_tmp12_ = x;
	_tmp13_ = y;
	_tmp14_ = _tmp11_[((_tmp12_ - 1) * _tmp11__length2) + _tmp13_];
	if (_tmp10_ == _tmp14_) {
		gdouble _tmp15_ = 0.0;
		_tmp15_ = f;
		f = _tmp15_ + 1;
	}
	_tmp16_ = centro;
	_tmp17_ = c;
	_tmp17__length1 = c_length1;
	_tmp17__length2 = c_length2;
	_tmp18_ = x;
	_tmp19_ = y;
	_tmp20_ = _tmp17_[((_tmp18_ - 1) * _tmp17__length2) + (_tmp19_ + 1)];
	if (_tmp16_ == _tmp20_) {
		gdouble _tmp21_ = 0.0;
		_tmp21_ = f;
		f = _tmp21_ + 1;
	}
	_tmp22_ = centro;
	_tmp23_ = c;
	_tmp23__length1 = c_length1;
	_tmp23__length2 = c_length2;
	_tmp24_ = x;
	_tmp25_ = y;
	_tmp26_ = _tmp23_[(_tmp24_ * _tmp23__length2) + (_tmp25_ - 1)];
	if (_tmp22_ == _tmp26_) {
		gdouble _tmp27_ = 0.0;
		_tmp27_ = f;
		f = _tmp27_ + 1;
	}
	_tmp28_ = centro;
	_tmp29_ = c;
	_tmp29__length1 = c_length1;
	_tmp29__length2 = c_length2;
	_tmp30_ = x;
	_tmp31_ = y;
	_tmp32_ = _tmp29_[(_tmp30_ * _tmp29__length2) + (_tmp31_ + 1)];
	if (_tmp28_ == _tmp32_) {
		gdouble _tmp33_ = 0.0;
		_tmp33_ = f;
		f = _tmp33_ + 1;
	}
	_tmp34_ = centro;
	_tmp35_ = c;
	_tmp35__length1 = c_length1;
	_tmp35__length2 = c_length2;
	_tmp36_ = x;
	_tmp37_ = y;
	_tmp38_ = _tmp35_[((_tmp36_ + 1) * _tmp35__length2) + (_tmp37_ - 1)];
	if (_tmp34_ == _tmp38_) {
		gdouble _tmp39_ = 0.0;
		_tmp39_ = f;
		f = _tmp39_ + 1;
	}
	_tmp40_ = centro;
	_tmp41_ = c;
	_tmp41__length1 = c_length1;
	_tmp41__length2 = c_length2;
	_tmp42_ = x;
	_tmp43_ = y;
	_tmp44_ = _tmp41_[((_tmp42_ + 1) * _tmp41__length2) + _tmp43_];
	if (_tmp40_ == _tmp44_) {
		gdouble _tmp45_ = 0.0;
		_tmp45_ = f;
		f = _tmp45_ + 1;
	}
	_tmp46_ = centro;
	_tmp47_ = c;
	_tmp47__length1 = c_length1;
	_tmp47__length2 = c_length2;
	_tmp48_ = x;
	_tmp49_ = y;
	_tmp50_ = _tmp47_[((_tmp48_ + 1) * _tmp47__length2) + (_tmp49_ + 1)];
	if (_tmp46_ == _tmp50_) {
		gdouble _tmp51_ = 0.0;
		_tmp51_ = f;
		f = _tmp51_ + 1;
	}
	_tmp52_ = f;
	result = 1.0 - (_tmp52_ / 8.0);
	c = (g_free (c), NULL);
	return result;
}


static void cubo_genetico_ffitness_class_init (CuboGeneticoFFitnessClass * klass) {
	cubo_genetico_ffitness_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (CuboGeneticoFFitnessPrivate));
	G_OBJECT_CLASS (klass)->finalize = cubo_genetico_ffitness_finalize;
}


static void cubo_genetico_ffitness_instance_init (CuboGeneticoFFitness * self) {
	self->priv = CUBO_GENETICO_FFITNESS_GET_PRIVATE (self);
}


static void cubo_genetico_ffitness_finalize (GObject* obj) {
	CuboGeneticoFFitness * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, CUBO_GENETICO_TYPE_FFITNESS, CuboGeneticoFFitness);
	_g_object_unref0 (self->priv->cubo);
	G_OBJECT_CLASS (cubo_genetico_ffitness_parent_class)->finalize (obj);
}


GType cubo_genetico_ffitness_get_type (void) {
	static volatile gsize cubo_genetico_ffitness_type_id__volatile = 0;
	if (g_once_init_enter (&cubo_genetico_ffitness_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (CuboGeneticoFFitnessClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) cubo_genetico_ffitness_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (CuboGeneticoFFitness), 0, (GInstanceInitFunc) cubo_genetico_ffitness_instance_init, NULL };
		GType cubo_genetico_ffitness_type_id;
		cubo_genetico_ffitness_type_id = g_type_register_static (G_TYPE_OBJECT, "CuboGeneticoFFitness", &g_define_type_info, 0);
		g_once_init_leave (&cubo_genetico_ffitness_type_id__volatile, cubo_genetico_ffitness_type_id);
	}
	return cubo_genetico_ffitness_type_id__volatile;
}



